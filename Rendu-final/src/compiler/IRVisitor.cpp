#include <iostream>
#include "IRVisitor.h"
#include <string>
#include <iostream>
using namespace std;


IRVisitor::IRVisitor(ValeurVisitor v){
	this->v=v;

	//Add putchar and getchar functions to the table
	add_put_and_get_char();
	
}

/*
*	Visite la déclaration d'une fonction, ses instructions et génère le CFG correspondant
*/
antlrcpp::Any IRVisitor::visitProg(ifccParser::ProgContext *context) 
{
	
	string functionName = context->VAR(0)->getText();
	Type typeFonction = visit(context->typeFunction());
	cfg = new CFG(functionName);
	
	
	//recuperation du nom des variables introduites par la declaration d'une fonction
	vector<string> argNames;
	for (int i =1; i < context->VAR().size(); i++) {
		string newArg = context->VAR().at(i)->getText();
		argNames.push_back(newArg);
	}

	//gestion des types des variables
	vector<Type> types;
	for (int i =0; i < context->type().size(); i++) {
		Type newTypeArg = stringToType(context->type().at(i)->getText());
		types.push_back(newTypeArg);
	}
	
	//gestion des paramètres d'une fonction
	vector<pair<string,Type>> args;
	for (int i =0; i<argNames.size(); i++){
		args.push_back(pair<string, Type>(argNames.at(i),types.at(i)));
		string nameVar = argNames.at(i);
		Type type = types.at(i);
		cfg->create_new_tempvar_function(type,nameVar,currentLine);
	}

	//Erreur si fonction non déclarée
	redeclarationFunctionError(currentLine,functionName, typeFonction, args);

	//Creation de la fonction du CFG
	fonction * f = add_to_function_table(functionName,  typeFonction, currentLine);
	f->setArgs(args);
	cfg->setFonction(f);

	
	
	//parcours des instructions de la fonction si il n'y a pas eu de return au milieu
    for(int i=0 ; i<context->instr().size(); i++){
		if(!returnStmt){
			currentLine=context->instr().at(i)->getStart()->getLine();
			visit(context->instr().at(i));
		}
	}

    //Generation assembleur
    cfg->gen_asm(cout);

	//Gestion des warning
	cfg->warningVarNotUsed();
	
	returnStmt=false;

	return 0;
}


/*
*	Visiteur de l'instruction déclaration d'une variable 
*/
antlrcpp::Any IRVisitor::visitDeclarationInstr(ifccParser::DeclarationInstrContext *context){
	visitDeclaration(context->declaration());
	return 0;
}

/*
*	Visiteur de l'instruction affectation d'une variable 
*/
antlrcpp::Any IRVisitor::visitAffectationInstr(ifccParser::AffectationInstrContext *context){
	visitAffectation(context->affectation());
	return 0;
}

/*
*	Visiteur de l'instruction if then else 
*/
antlrcpp::Any IRVisitor::visitIf_then_elseInstr(ifccParser::If_then_elseInstrContext *context){

	visitIf_then_else(context->if_then_else());
	return 0;
}

/*
*	Visiteur de l'instruction while
*/
antlrcpp::Any IRVisitor::visitWhileloopInstr(ifccParser::WhileloopInstrContext *context){

	visitWhileloop(context->whileloop());
	return 0;
}


/*
*	Visiteur de l'instruction return en fin de fonction 
*/
antlrcpp::Any IRVisitor::visitReturn_stmtInstr(ifccParser::Return_stmtInstrContext *context){
	visitReturn_stmt(context->return_stmt());
	return 0;
}

/*
*	Visiteur de l'instruction d'appel de fonction 
*/
antlrcpp::Any IRVisitor::visitFunctionCallInstr(ifccParser::FunctionCallInstrContext *context){
	visitFunctionCall(context->functionCall());
	return 0;
}


/*
*	Visite la déclaration de variables, les ajoute à la table des symboles du cfg
*/
antlrcpp::Any IRVisitor::visitDeclaration(ifccParser::DeclarationContext *context)
{
	typeVardecl = visit(context->type());
	
	declaration = true;

	for(int i=0 ; i<context->variables().size(); i++){
		string var =visit(context->variables().at(i));
	}

	string var =visit(context->enddeclaration());

	declaration = false;

	return 0;
}

/*
*	Visite d'une type, retourne son type
*/

antlrcpp::Any IRVisitor::visitInt(ifccParser::IntContext *context){
	return Type::INT;
}

antlrcpp::Any IRVisitor::visitChar(ifccParser::CharContext *context){
	return Type::CHAR;
}

antlrcpp::Any IRVisitor::visitTypeFunc(ifccParser::TypeFuncContext *context){
	return visit(context->type());
}

antlrcpp::Any IRVisitor::visitVoid(ifccParser::VoidContext *context){
	return Type::VOID;
}


//	Visite l'appel de fonction

antlrcpp::Any IRVisitor::visitFunctionCall(ifccParser::FunctionCallContext *context)
{

	string functionName = context->VAR()->getText();
	
	erreurFunctionNonDeclaree(functionName,currentLine);

	//Recuperation de la fonction appellée et de son type de retour
	fonction* calledFunction = get_func(functionName);
	Type typeFunction = calledFunction->getReturnType();

	//Creation d'une nouvelle variable résultat
	string vartmp = cfg->create_new_tempvar(typeFunction, cfg->current_bb->label,currentLine);

	vector<string> params = {functionName, vartmp};

	//Gestion des erreurs
	if(calledFunction->getArgsSize() != context->expression().size()){
		cerr << "Error : no function with this declaration exists" << endl;
	}

	if(context->expression().size() > 6 ) {
			cerr << "Error : function can't have more than 6 arguments" << endl;
			exit(1);
	}

	
	//Gestion des paramètres de la fonction
	for (int i = 0; i < context->expression().size(); i++) {
			string arg = visit(context->expression().at(i));

			Type typeArg = cfg->get_var_type(arg);

			string param = cfg->create_new_tempvar(typeArg, cfg->current_bb->label,currentLine);
			
			//recuperation des registres
			string paramReg = to_string(cfg->get_var_index(param))+"(%rbp)";
			string argReg = cfg->IR_reg_to_asm(cfg->get_var_index(arg));

			vector<string> params2 = {paramReg,argReg};

			cfg->current_bb->add_IRInstr(IRInstr::Operation::mov,params2);
			params.push_back(param);
	}

	cfg->current_bb->add_IRInstr(IRInstr::Operation::call, params);
	
	return vartmp;
}

/*
*	Visite d'une variable en fin de déclaration et retourne son nom
*/
antlrcpp::Any IRVisitor::visitEnddeclvar(ifccParser::EnddeclvarContext *context){
	return visit(context->lvalue());
}

/*
*	Visite une variable déclarée et affectée en fin de déclaration et retourne son nom
*/
antlrcpp::Any IRVisitor::visitEnddeclaffect(ifccParser::EnddeclaffectContext *context){
	return visit(context->affectation());
}



/*
*	Visite une variable  et retourne son nom
*/
antlrcpp::Any IRVisitor::visitVarsimpledecl(ifccParser::VarsimpledeclContext *context){
	return visit(context->lvalue());
}

/*
*	Visite une variable déclarée et affectée et retourne son nom
*/
antlrcpp::Any IRVisitor::visitVaraffectdecl(ifccParser::VaraffectdeclContext *context){
	return visit(context->affectation());
}


/*
*	Visite de l'affectation d'une variable et création de l'instruction dans le block.
*	Si la variable a bien été déclarée au préalable, on lui affecte la valeur produite par la visite de l'expression et on 
*	indique qu'elle a été utilisée. 
*/
antlrcpp::Any IRVisitor::visitAffectation(ifccParser::AffectationContext *context)
{
	affectation = true;

	//Recuperation nouvelle variable droite
	string exprResult = visit(context->expression());

	//Recuperation nouvelle variable gauche
	string lval =visit(context->lvalue());
	

	//verifie que l'on a pas b[5] = 6 dans une declaration
	if(declaration && v.contains(lval+"_tab_size")){
		cfg->erreurInvalidInitializer(currentLine);
	}


 	vector<string> params = {lval,exprResult};

    cfg->current_bb->add_IRInstr(IRInstr::Operation::wmem, params);

	affectation = false;

	/*
	* Recuperation du resultat stocké dans lval si on a b = a=5 
	* (5 est sotcké dans l'addresse de a contenu dans lval, on sotck alors 5 dans lval pour ne pas avoir b =adress de a)
	*/
	if(nestedAffectation){
		vector<string> params = {lval,lval};
		cfg->current_bb->add_IRInstr(IRInstr::Operation::rmem, params);
		nestedAffectation=false;
	}


	return lval;
}


/*
*	Visiteur de lvalue pour une variable simple
*/
antlrcpp::Any IRVisitor::visitLvalVar(ifccParser::LvalVarContext *context){

	string lval = context->VAR()->getText();
	
	//Pour une declaration seulement, on ajoute le symbole à la table
	if(declaration){
		addSymbolToTable(lval,typeVardecl);
		if(!affectation){
			return lval;
		}
		
	}

	//Check si la var a été déclaree
	cfg->erreurVariableNonDeclare(lval,currentLine);

	//Recupere son offset dans la table des symboles
	string offset = "-"+to_string(cfg->get_var_index(lval));
	
	Type typeVar = cfg->get_var_type(lval);

	//Creation d'une nouvelle variable pour stocker l'offset
	string newVar = cfg->create_new_tempvar(typeVar, cfg->current_bb->label,currentLine);

	vector<string> params = {newVar,offset};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, params);

	vector<string> params2 = {newVar,"%rbp",newVar};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::add, params2);

	cfg->set_var_used(lval,true);


	return newVar;
}

/*
*	Visiteur de lvalue pour un tableau
*/
antlrcpp::Any IRVisitor::visitLvaltableau(ifccParser::LvaltableauContext *context){
	
	string lval = context->VAR()->getText();

	//Lors d'une declaration, on récupère la taille du tableau pour allouer la mémoire necessaire
	if(declaration){
		string name = lval+"_tab_size";
		int size = v.values.at(name);
		if(size<0){
			cfg->erreurNegativeTabSize(name,currentLine);
		}
		addSymbolToTable(lval,typeVardecl,size);

		return lval;
	}

	//Récupération de l'index du tableau
	string index = visit(context->expression());

	string offsetValeurTableau = gestionTableau(lval,index);
	
	return offsetValeurTableau;
}

/*
*	Visite de l'expression plus ou de l'expression moins. 
* 	Récupère le nom des deux variables var et var2 obtenues par la 
*	visite de l'expression à droite du (+/-) et de celle à gauche.
*	Stocke le résultat dans une nouvelle variable temporaire et retourne son nom
*/
antlrcpp::Any IRVisitor::visitPlusminus(ifccParser::PlusminusContext *context) 
{

	//Indique si l'expression est une addition ou une soustraction
	bool op = (context->PLUS())? true : false;


	//récuparation du nom de la première variable
	string var= visit(context->expression(0));
	
	//récuparation du nom de la deuxieme variable
	exprGauche=true;
	string var2=visit(context->expression(1));	
	exprGauche=false;

	//Creation d'une nouvelle variable résultat
	string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,currentLine);

    vector<string> params = {vartmp,var,var2};

    if(op){
        cfg->current_bb->add_IRInstr(IRInstr::Operation::add, params);
    }else{
        cfg->current_bb->add_IRInstr(IRInstr::Operation::sub, params);
    }
    

	return vartmp;
}


/*
*	Visite d'un character 
*/
antlrcpp::Any IRVisitor::visitCharacter(ifccParser::CharacterContext *context) 
{
	string character =context->CHARACTER()->getText();

	int64_t temp = (int64_t) character[1];
	string val = to_string(temp);


	//Creation d'une nouvelle variable résultat
	string var = cfg->create_new_tempvar(Type::CHAR, cfg->current_bb->label,currentLine);

    vector<string> params = {var,val};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, params); 

	return var;

};


/*
*	Visite de l'expression multiply ou de l'expression divide. 
* 	Récupère le nom des deux variables var et var2 obtenues par la 
*	visite de l'expression à droite du (*,/) et de celle à gauche.
*	Stock le résultat dans une nouvelle variable temporaire et retourne son nom.
*/
antlrcpp::Any IRVisitor::visitMultdiv(ifccParser::MultdivContext *context) 
{
	//Indique si l'expression est une multiplication ou une division
	bool op = (context->MULTIPLY())? true : false;

	//récuparation du nom de la première variable
	string var= visit(context->expression(0));
	
	//récuparation du nom de la deuxieme variable
	exprGauche=true;
	string var2=visit(context->expression(1));	
	exprGauche=false;

	//Creation d'une nouvelle variable résultat
	string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,currentLine);

    vector<string> params = {vartmp,var,var2};

	if(op){
        cfg->current_bb->add_IRInstr(IRInstr::Operation::mul, params);
    }else{
        cfg->current_bb->add_IRInstr(IRInstr::Operation::div, params);
    }


	return vartmp;
}

/*
*	Visite de l'expression d'appel de fonction
*/
antlrcpp::Any IRVisitor::visitFuncCall(ifccParser::FuncCallContext *context) 
{
	string functionName = context->VAR()->getText();
	
	erreurFunctionNonDeclaree(functionName,currentLine);

	//Recuperation de la fonction appellée et de son type de retour
	fonction* calledFunction = get_func(functionName);
	Type typeFunction = calledFunction->getReturnType();

	//Creation d'une nouvelle variable résultat
	string vartmp = cfg->create_new_tempvar(typeFunction, cfg->current_bb->label,currentLine);

	vector<string> params = {functionName, vartmp};

	//Gestion des erreurs
	if(calledFunction->getArgsSize() != context->expression().size()){
		cerr << "Error : no function with this declaration exists" << endl;
	}

	if(context->expression().size() > 6 ) {
			cerr << "Error : function can't have more than 6 arguments" << endl;
			exit(1);
	}

	
	//Gestion des paramètres de la fonction
	for (int i = 0; i < context->expression().size(); i++) {
			string arg = visit(context->expression().at(i));

			Type typeArg = cfg->get_var_type(arg);

			string param = cfg->create_new_tempvar(typeArg, cfg->current_bb->label,currentLine);
			
			//recuperation des registres
			string paramReg = to_string(cfg->get_var_index(param))+"(%rbp)";
			string argReg = cfg->IR_reg_to_asm(cfg->get_var_index(arg));

			vector<string> params2 = {paramReg,argReg};

			cfg->current_bb->add_IRInstr(IRInstr::Operation::mov,params2);
			params.push_back(param);
	}

	cfg->current_bb->add_IRInstr(IRInstr::Operation::call, params);
	
	return vartmp;
}

/*
*	Visite de l'expression entre parenthèses et retourne le nom de la variable obtenue
*/
antlrcpp::Any IRVisitor::visitPar(ifccParser::ParContext *context) 
{	
	//les parenthèse sont prioritaire ex : a = 5+(b=7) marche et pas a = 5 + b=7
	exprGauche=false;

	string var = visit(context->expression());
	return var;	
}

/*
*	Visite une affectation dans une expression
*/
antlrcpp::Any IRVisitor::visitExprAffectation(ifccParser::ExprAffectationContext *context){
	// Error lorsque b = 6 + a=5  avec a=5 à gauche de l'operation
	if(exprGauche){
		cfg->errorlvalMisPlaced(currentLine);
	}
	nestedAffectation=true;
	string var = visit(context->affectation());
	return var;
}

/*
*	Visite d'une variable. Si elle a été déclarée, retourne son nom
*/
antlrcpp::Any IRVisitor::visitVar(ifccParser::VarContext *context) 
{
	std::string var =context->VAR()->getText();

	return var;
	
}


/*
*	Visite d'une valeur dans le tableau
*/
antlrcpp::Any IRVisitor::visitValTableau(ifccParser::ValTableauContext *context){
	
	string var = context->VAR()->getText();

	//Récupération de l'index
	string index = visit(context->expression());

	//Gestion de la position dans le tableau
	string newVar = gestionTableau(var,index);	

	//load content of the address contained in newVar in newVar
	vector<string> params = {newVar,newVar};

    cfg->current_bb->add_IRInstr(IRInstr::Operation::rmem, params);

	return newVar;
}

/*
*	Visite d'un moins unaire.
*	Récupère le nom de la variable var obtenue par la visite de l'expression suivant le -.
*	Stock et retourne le nom du résultat dans une nouvelle variable temporaire
*/
antlrcpp::Any IRVisitor::visitOppose(ifccParser::OpposeContext *context){

	string var =visit(context->expression());

	//Creation d'une nouvelle variable résultat
	string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,currentLine);

    vector<string> params = {vartmp,var};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::neg, params);

	return vartmp;
}

/*
*	Visite d'un ! unaire qui signifie une négation boolean.
*	Récupère le nom de la variable var obtenue par la visite de l'expression suivant le !.
*	Stock et retourne le nom du résultat dans une nouvelle variable temporaire
*/
antlrcpp::Any IRVisitor::visitNegation(ifccParser::NegationContext *context){
	string var = visit(context->expression());

	//Creation d'une nouvelle variable résultat
	string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,currentLine);

    vector<string> params = {vartmp,var,"$0"};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::cmp_eq, params);

	return vartmp;
}


/*
*	Visite d'un et logique.
*	Récupère le nom des variables var obtenues par la visite des expressions précédant et suivant le &.
*	Stock et retourne le nom du résultat dans une nouvelle variable temporaire
*/
antlrcpp::Any IRVisitor::visitAndlogiq(ifccParser::AndlogiqContext *context){

	//récuparation du nom de la première variable
	string var= visit(context->expression(0));
	
	//récuparation du nom de la deuxieme variable
	exprGauche=true;
	string var2=visit(context->expression(1));	
	exprGauche=false;

	//Creation d'une nouvelle variable résultat
	string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,currentLine);

    vector<string> params = {vartmp,var,var2};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::andq, params);

	return vartmp;
}

/*
*	Visite d'un xor logique.
*	Récupère le nom des variables var obtenues par la visite des expressions précédant et suivant le ^.
*	Stock et retourne le nom du résultat dans une nouvelle variable temporaire
*/
antlrcpp::Any IRVisitor::visitXorlogiq(ifccParser::XorlogiqContext *context){

	//récuparation du nom de la première variable
	string var= visit(context->expression(0));
	
	//récuparation du nom de la deuxieme variable
	exprGauche=true;
	string var2=visit(context->expression(1));	
	exprGauche=false;

	//Creation d'une nouvelle variable résultat
	string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,currentLine);

    vector<string> params = {vartmp,var,var2};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::xorq, params);

	return vartmp;
}


/*
*	Visite d'un ou logique.
*	Récupère le nom des variables var obtenues par la visite des expressions précédant et suivant le |.
*	Stock et retourne le nom du résultat dans une nouvelle variable temporaire
*/
antlrcpp::Any IRVisitor::visitOrlogiq(ifccParser::OrlogiqContext *context){
	
	//récuparation du nom de la première variable
	string var= visit(context->expression(0));
	
	//récuparation du nom de la deuxieme variable
	exprGauche=true;
	string var2=visit(context->expression(1));	
	exprGauche=false;

	//Creation d'une nouvelle variable résultat
	string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,currentLine);

    vector<string> params = {vartmp,var,var2};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::orq, params);

	return vartmp;
}



/*
*	Visite d'une constante. 
*	Récupère sa valeur et stock la constante dans une nouvelle variable temporaire.
*	Retourne le nom de la nouvelle variable.
*/
antlrcpp::Any IRVisitor::visitConst(ifccParser::ConstContext *context)
{
	
	string val = context->CONST()->getText();

    //Creation d'une nouvelle variable résultat
	string var = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,currentLine);

    vector<string> params = {var,val};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst,params); 

	return var;
}


/*
* Visite d'une comparaison d'égalité 	(== ou !=)
* Retourne le résultat de comparaison entre deux expressions
*/
antlrcpp::Any IRVisitor::visitEquality(ifccParser::EqualityContext *context){

	//Indique si l'expression est une == ou une !=
	bool op = (context->ISEQUAL())? true : false;

	//récuparation du nom de la première variable
	string var= visit(context->expression(0));
	
	//récuparation du nom de la deuxieme variable
	exprGauche=true;
	string var2=visit(context->expression(1));	
	exprGauche=false;

	//Creation d'une nouvelle variable résultat
	string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,currentLine);

    vector<string> params = {vartmp,var,var2};

	if(op) {
		cfg->current_bb->add_IRInstr(IRInstr::Operation::cmp_eq, params);

	}else {
		cfg->current_bb->add_IRInstr(IRInstr::Operation::cmp_ineq, params);

	}

	return vartmp;
}


/*
* Visite d'une comparaison (< ou >)
* Retourne le résultat de comparaison entre deux expressions
*/
antlrcpp::Any IRVisitor :: visitInequality(ifccParser::InequalityContext *context) {

	//Indique si l'expression est une == ou une !=
	bool op = (context->GREATER())? true : false;

	//récuparation du nom de la première variable
	string var= visit(context->expression(0));
	
	//récuparation du nom de la deuxieme variable
	exprGauche=true;
	string var2=visit(context->expression(1));	
	exprGauche=false;

	//Creation d'une nouvelle variable résultat
	string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,currentLine);

    vector<string> params = {vartmp,var,var2};

	if(op) {
		cfg->current_bb->add_IRInstr(IRInstr::Operation::cmp_gt, params);

	}else {
		cfg->current_bb->add_IRInstr(IRInstr::Operation::cmp_lt, params);

	}

	return vartmp;
}


/*
*	Visite du ITE statement (If Then Else). 
*/
antlrcpp::Any IRVisitor :: visitIf_then_else(ifccParser::If_then_elseContext *context) {

	condition= true;

	//visite de la condition de la boucle et renvoie son résultat
	string var = visit(context->expression());

	//Creation d'une nouvelle variable résultat
	string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,currentLine);

	vector<string> params = {vartmp,var,"$0"};

	//Comparer le retour de la condition à 0
	cfg->current_bb->add_IRInstr(IRInstr::Operation::cmp_eq, params);
	
	//sauvegarde le output avant d'entrer dans la boucle 
	BasicBlock* savedBlock = cfg->current_bb->exit_true;
	
	//créer les blocks then, else et endif
	string nameBlockThen= cfg->new_BB_name("then");
    BasicBlock* blockThen = new BasicBlock(cfg,nameBlockThen);
	cfg->add_bb(blockThen);
	cfg->nextBBnumber++;

	string nameBlockElse= cfg->new_BB_name("else");
    BasicBlock* blockElse = new BasicBlock(cfg,nameBlockElse);
	cfg->add_bb(blockElse);
	cfg->nextBBnumber++;

	string nameBlockEndIf= cfg->new_BB_name("endif");
    BasicBlock* blockEndIf = new BasicBlock(cfg,nameBlockEndIf);
	cfg->add_bb(blockEndIf);
	cfg->nextBBnumber++;

	cfg->current_bb->exit_true= blockThen; // true-> then
	cfg->current_bb->exit_false= blockElse; // false->else

	cfg->current_bb=blockThen;
	blockThen->exit_true= blockEndIf;
	blockThen->exit_false= nullptr;
	

	visit(context->blockthen); 
	
	cfg->current_bb=blockElse;
	blockElse->exit_true= blockEndIf; 
	blockElse->exit_false= nullptr;

	visit(context->blockelse); 

	cfg->current_bb=blockEndIf;
	blockEndIf->exit_true = savedBlock;
	blockEndIf->exit_false=nullptr;

	condition=false;
	return 0;
}


/*
*	Visite du while statement. 
*/
antlrcpp::Any IRVisitor:: visitWhileloop(ifccParser::WhileloopContext *context) {

	condition = true;
	//sauvegarde le output avant d'entrer dans la boucle 
	BasicBlock* savedBlock = cfg->current_bb->exit_true;

	
	//créer les blocks condition, whileBlock et endwhile
	string nameblockCondition= cfg->new_BB_name("condition");
    BasicBlock* blockCondition = new BasicBlock(cfg,nameblockCondition);
	cfg->add_bb(blockCondition);
	cfg->nextBBnumber++;

	string nameblockBody= cfg->new_BB_name("whileBody");
    BasicBlock* blockBodyWhile = new BasicBlock(cfg,nameblockBody);
	cfg->add_bb(blockBodyWhile);
	cfg->nextBBnumber++;

	string nameblockEndWhile= cfg->new_BB_name("endwhile");
    BasicBlock* blockEndWhile = new BasicBlock(cfg,nameblockEndWhile);
	cfg->add_bb(blockEndWhile);
	cfg->nextBBnumber++;

	cfg->current_bb->exit_true= blockCondition;
	cfg->current_bb->exit_false= nullptr;

	cfg->current_bb=blockCondition;
	cfg->current_bb->exit_true= blockBodyWhile; // true-> whileBody
	cfg->current_bb->exit_false= blockEndWhile; // false-> quit (endWhile)


	//visite de la condition de la boucle et renvoie son résultat
	string var = visit(context->blockConditionWhile());

	//Creation d'une nouvelle variable résultat
	string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,currentLine);
	
	vector<string> params = {vartmp,var,"$0"};

	//Comparer le retour de la condition à 0
	cfg->current_bb->add_IRInstr(IRInstr::Operation::cmp_eq, params);

	

	cfg->current_bb=blockBodyWhile;
	blockBodyWhile->exit_true= blockCondition; // après l'execution du block while, on revient toujours à la condition
	blockBodyWhile->exit_false= nullptr;
	
	visit(context->blockwhile); 


	cfg->current_bb=blockEndWhile;
	blockEndWhile->exit_true = savedBlock;
	blockEndWhile->exit_false=nullptr;

	condition = false;

	return 0;
}
/*
*	Visite du block d'instructions d'une boucle
*/
antlrcpp::Any IRVisitor::visitBlock(ifccParser::BlockContext *context){
	for(int i=0 ; i<context->instr().size(); i++){
		currentLine=context->instr().at(i)->getStart()->getLine();
		visit(context->instr().at(i));
	}

	return 0;
}

/*
*	Visite de la condition de while loop
*/
antlrcpp::Any IRVisitor::visitBlockConditionWhile(ifccParser::BlockConditionWhileContext *context){
	
	string var =visit(context->expression());
	return var;
}


/*
*	Visite du return. Génère le code assembleur associé en utilisant le 
*	nom de la variable obtenue par la visite de l'expression dans le return.
*/
antlrcpp::Any IRVisitor::visitReturn_stmt(ifccParser::Return_stmtContext *context) 
{
	
	string ret = visit(context->expression());

    vector<string> params = {ret};

	cfg->warningReturnVoid(currentLine);

    cfg->current_bb->add_IRInstr(IRInstr::Operation::ret, params); 

	//Check si un return se fait au milieu du programme ou dans un if/while
	if(condition){
		cfg->current_bb->exit_true= cfg->return_bb;
	}else {
		returnStmt = true;
	}
	
	return 0;
}



//private methods

/*
* Ajoute un symbole à la table des symboles
*/
void IRVisitor::addSymbolToTable(string var, Type type, int nbAlloc){
	cfg->redeclarationError(currentLine,var);
	cfg->add_to_symbol_table(var,type,currentLine,nbAlloc);
}


/*
* Gestion de l'accès aux valeurs d'un tableau
*/
string IRVisitor::gestionTableau(string var, string index){

	//Check si la var a été déclaree
	cfg->erreurVariableNonDeclare(var,currentLine);

	//Recupere son offset dans la table des symboles
	string offset = "-"+to_string(cfg->get_var_index(var));

	//variable utilisée
	cfg->set_var_used(var,true);

	Type typeVar = cfg->get_var_type(var);

	//Stock l'offset de la première variable du tableau
	string offsetValeurTableau = cfg->create_new_tempvar(typeVar, cfg->current_bb->label,currentLine);

	vector<string> params = {offsetValeurTableau,offset};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, params);


	//Multiplication de sa valeur par la taille de la variable pour obtenir un bon offset
	string taille_var = "-"+to_string(sizeof(int64_t));

	//Stock le resultat
	string offsetIndex= cfg->create_new_tempvar(typeVar, cfg->current_bb->label,currentLine);

	vector<string> params_taille = {offsetIndex,taille_var};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, params_taille);

	//Multiplication de l'index par la taille
	vector<string> params_mul = {offsetIndex,offsetIndex,index};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::mul, params_mul);


	//Addition de l'offset de l'index à l'offset de la première variable du tableau
	vector<string> params2 = {offsetValeurTableau,offsetIndex,offsetValeurTableau};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::add, params2);

	//Ajout de l'ofset de la variable du tableau à l'index i à rbp
	vector<string> params3 = {offsetValeurTableau,"%rbp",offsetValeurTableau};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::add, params3);


	return offsetValeurTableau;
}


/*
* retourne le type associé à la string type
*/
Type IRVisitor::stringToType(string type){
	if(type=="int"){
        return Type::INT;
    }
    if(type=="char"){
        return Type::CHAR;
    }
	if(type=="void"){
        return Type::VOID;
    }
    return Type::DEFAULT;
}

//FunctionTable

/*
*	Ajoute une fonction à la table des fonctions
*/
fonction * IRVisitor::add_to_function_table(string name, Type returnType, size_t line){
	nextFreeFunctionIndex++;
    return fonctionTable->add(name,returnType,line);
}

/*
*	Génère une erreur si la fonction est redéclarée
*/
void IRVisitor::redeclarationFunctionError(size_t currentLine, string name, Type returnType, vector<pair<string,Type>> args){
    if(fonctionTable->contains(name) && fonctionTable->getReturnType(name)==returnType && fonctionTable->getArgsSize(name)==args.size() ){  
		cerr << "<source>:"<<currentLine<<": error: redeclaration of '"<<fonctionTable->getReturnType(name)<<" "<<name<<"'" << endl;
		cerr << "<source>:"<<fonctionTable->getLine(name)<<": error: '"<<fonctionTable->getReturnType(name)<<" "<<name<<"' previously declared here" << endl;
	}
}

/*
* Génère une erreur si on utilise une fonction non déclarée
*/
void IRVisitor::erreurFunctionNonDeclaree(string name, size_t currentLine){
	if(!fonctionTable->contains(name)){
		cerr << "<source>:"<<currentLine<<": error: '"<<name<<"' was not declared in this scope" << endl;
		exit(1);
	}
}

/*
*	Ajoute les fonctions putchar et getchar à la table des fonctions
*/
void IRVisitor::add_put_and_get_char(){
	fonction * putchar = add_to_function_table("putchar",Type::INT,0);
	vector<pair<string,Type>> args;
	args.push_back(pair<string, Type>("character",Type::INT));
	putchar->setArgs(args);

	fonction * getchar = add_to_function_table("getchar",Type::INT,0);
}

//getters fonction

Type IRVisitor::get_func_returnType(string name){
    return fonctionTable->getReturnType(name);
}

fonction* IRVisitor::get_func(string name){
    return fonctionTable->getFonction(name);
}







