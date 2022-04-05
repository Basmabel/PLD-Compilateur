#include <iostream>
#include "IRVisitor.h"
#include <string>
#include <iostream>
using namespace std;


IRVisitor::IRVisitor(ValeurVisitor v){
	this->v=v;
}

/*
*	Visite les instructions du programme et génère le CFG correspondant
*/
antlrcpp::Any IRVisitor::visitProg(ifccParser::ProgContext *context) 
{

	string functionName = context->VAR(0)->getText();
	cfg = new CFG(functionName);
	
	
	vector<string> name;
	for (int i =1; i < context->VAR().size(); i++) {
		string newArg = context->VAR().at(i)->getText();
		name.push_back(newArg);
	}
	//gestion des paramètres d'une fonction
	vector<string> types;
	for (int i =1; i < context->INT().size(); i++) {
		string newTypeArg = context->INT().at(i)->getText();
		types.push_back(newTypeArg);
	}
	
	vector<pair<string,string>> args;
	for (int i =0; i<name.size(); i++){
		args.push_back(pair<string, string>(name.at(i),types.at(i)));
		string nameVar = name.at(i);
		string type = types.at(i);
		if(type == "int"){
			cfg->create_new_tempvar_function(Type::INT,nameVar,linectr);
		}else if (type =="char"){
			cfg->create_new_tempvar_function(Type::CHAR,nameVar,linectr);
		}
	}
	
	redeclarationFunctionError(linectr,functionName, context->INT(0)->getText(), args);
	if(functionName != "main")
		add_to_function_table(functionName, context->INT(0)->getText(),args, linectr);
    
    for(int i=0 ; i<context->instr().size(); i++){
		linectr=context->instr().at(i)->getStart()->getLine();
		visit(context->instr().at(i));
	}
    
    cfg->gen_asm(cout, fonctionTable->getSize(), fonctionTable);

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
//	Visite l'appel de fonction

antlrcpp::Any IRVisitor::visitFunctionCall(ifccParser::FunctionCallContext *context)
{
	string functionName = context->VAR()->getText();
	
	erreurFunctionNonDeclaree(functionName,linectr);

	fonction* actualFunction = get_func(functionName);

	//Creation d'une nouvelle variable résultat
	std:: string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,linectr);
		

	if(actualFunction->getArgsSize() != context->expression().size()){
		cerr << "Error : no function with this declaration exists" << endl;
	}

	if(context->expression().size() > 6 ) {
			cerr << "Error : function can't have more than 6 arguments" << endl;
			exit(1);
	}
	vector<string> params = {"test", functionName, vartmp};

	for (int i = 0; i < context->expression().size(); i++) {
			string arg = visit(context->expression().at(i));
			params.push_back(arg);
	}

	cfg->current_bb->add_IRInstr(IRInstr::Operation::call, Type::CALL, params);
	
	return vartmp;
}


/*
*	Visite d'une variable, retourne son nom 
*/
/*antlrcpp::Any IRVisitor::visitVariables(ifccParser::VariablesContext *context){
	return context->VAR()->getText();
}*/


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
	string local = visit(context->expression());

	//Recuperation nouvelle variable gauche
	string var =visit(context->lvalue());


	//verifie que l'on a pas b[5] = 6 dans une declaration
	if(declaration && v.contains(var+"_tab_size")){
		//generer erreur
		cfg->erreurInvalidInitializer(linectr);
	}

	string varOff = cfg->IR_reg_to_asm(cfg->get_var_index(var));
	string localOff = cfg->IR_reg_to_asm(cfg->get_var_index(local));
  vector<string> params = {varOff,localOff};

  cfg->current_bb->add_IRInstr(IRInstr::Operation::wmem, Type::WMEM, params);

	affectation = false;

	return var;
}


/*
*	Visiteur de lvalue pour une variable simple
*/
antlrcpp::Any IRVisitor::visitLvalVar(ifccParser::LvalVarContext *context){

	string var = context->VAR()->getText();

	if(declaration){
		addSymbolToTable(var,typeVardecl);
		if(!affectation){
			return var;
		}
		
	}

	//Check si la var a été déclaree
	cfg->erreurVariableNonDeclare(var,linectr);

	//Recupere son offset dans la table des symboles
	string offset = "-"+to_string(cfg->get_var_index(var));
	
	//Creation d'une nouvelle variable pour stocker l'offset
	std:: string newVar = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,linectr);

	vector<string> params = {newVar,offset};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, Type::CONST, params);

	vector<string> params2 = {newVar,"%rbp",newVar};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::add, Type::ADD, params2);

	cfg->set_var_used(var,true);


	return newVar;
}

/*
*	Visiteur de lvalue pour un tableau
*/
antlrcpp::Any IRVisitor::visitLvaltableau(ifccParser::LvaltableauContext *context){
	
	string var = context->VAR()->getText();

	//Lors d'une declaration, on récupère la taille du tableau pour allouer la mémoire necessaire
	if(declaration){
		string name = var+"_tab_size";
		int size = v.values.at(name);
		if(size<0){
			cfg->erreurNegativeTabSize(name,linectr);
		}
		addSymbolToTable(var,typeVardecl,size);

		return var;
	}

	//Récupération de l'index du tableau
	string index = visit(context->expression());

	string offsetValeurTableau = gestionTableau(var,index);
	
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
	std::string var= visit(context->expression(0));
	
	//récuparation du nom de la deuxieme variable
	std:: string var2=visit(context->expression(1));	


	//Creation d'une nouvelle variable résultat
	std:: string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,linectr);

    vector<string> params = {vartmp,var,var2};

    if(op){
        cfg->current_bb->add_IRInstr(IRInstr::Operation::add, Type::ADD, params);
    }else{
        cfg->current_bb->add_IRInstr(IRInstr::Operation::sub, Type::SUB, params);
    }
    

	return vartmp;
}

antlrcpp::Any IRVisitor::visitCharacter(ifccParser::CharacterContext *context) 
{
	string character =context->CHARACTER()->getText();

	int64_t temp = (int64_t) character[1];
	string val = to_string(temp);


	//Creation d'une nouvelle variable résultat
	std:: string var = cfg->create_new_tempvar(Type::CHAR, cfg->current_bb->label,linectr);

    vector<string> params = {var,val};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, Type::CONST, params); 

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
	std::string var= visit(context->expression(0));

	//récuparation du nom de la deuxieme variable
	std:: string var2=visit(context->expression(1));

	//Creation d'une nouvelle variable résultat
	std:: string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,linectr);

    vector<string> params = {vartmp,var,var2};

	if(op){
        cfg->current_bb->add_IRInstr(IRInstr::Operation::mul, Type::MUL, params);
    }else{
        cfg->current_bb->add_IRInstr(IRInstr::Operation::div, Type::DIV, params);
    }


	return vartmp;
}

/*
*	Visite de l'expression d'appel de fonction
*/
antlrcpp::Any IRVisitor::visitFuncCall(ifccParser::FuncCallContext *context) 
{
	string functionName = context->VAR()->getText();
	
	erreurFunctionNonDeclaree(functionName,linectr);

	fonction* actualFunction = get_func(functionName);

	//Creation d'une nouvelle variable résultat
	std:: string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,linectr);
		

	if(actualFunction->getArgsSize() != context->expression().size()){
		cerr << "Error : no function with this declaration exists" << endl;
	}

	if(context->expression().size() > 6 ) {
			cerr << "Error : function can't have more than 6 arguments" << endl;
			exit(1);
	}
	vector<string> params = {"test", functionName, vartmp};

	for (int i = 0; i < context->expression().size(); i++) {
			string arg = visit(context->expression().at(i));
			params.push_back(arg);
	}

	cfg->current_bb->add_IRInstr(IRInstr::Operation::call, Type::CALL, params);
	
	return vartmp;	 	
}

/*
*	Visite de l'expression entre parenthèses et retourne le nom de la variable obtenue
*/
antlrcpp::Any IRVisitor::visitPar(ifccParser::ParContext *context) 
{
	string var = visit(context->expression());
	return var;	
}

antlrcpp::Any IRVisitor::visitExprAffectation(ifccParser::ExprAffectationContext *context){
	string var = visit(context->affectation());
	return var;
}

/*
*	Visite d'une variable. Si elle a été déclarée, retourne son nom
*/
antlrcpp::Any IRVisitor::visitVar(ifccParser::VarContext *context) 
{
	std::string var =context->VAR()->getText();

	//cfg->erreurVariableNonDeclare(var,linectr);

	return var;
	
}


/*
*	Visite d'une valeur dans le tableau
*/
antlrcpp::Any IRVisitor::visitValTableau(ifccParser::ValTableauContext *context){
	
	string var = context->VAR()->getText();

	//Récupération de l'index
	string var2 = visit(context->expression());

	string newVar = gestionTableau(var,var2);
	string newVarOffSet = cfg->IR_reg_to_asm(cfg->get_var_index(newVar));

	//load content of the address contained in newVar in newVar
	vector<string> params = {newVarOffSet,newVarOffSet};
    cfg->current_bb->add_IRInstr(IRInstr::Operation::mov, Type::MOV, params);

	return newVar;
}

/*
*	Visite d'un moins unaire.
*	Récupère le nom de la variable var obtenue par la visite de l'expression suivant le -.
*	Stock et retourne le nom du résultat dans une nouvelle variable temporaire
*/
antlrcpp::Any IRVisitor::visitOppose(ifccParser::OpposeContext *context){

	std::string var =visit(context->expression());

	//Creation d'une nouvelle variable résultat
	std:: string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,linectr);

    vector<string> params = {vartmp,var};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::neg, Type::NEG, params);

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
	string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,linectr);

    vector<string> params = {vartmp,var};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::setz, Type::SETZ, params);

	return vartmp;
}


/*
*	Visite d'un et logique.
*	Récupère le nom des variables var obtenues par la visite des expressions précédant et suivant le &.
*	Stock et retourne le nom du résultat dans une nouvelle variable temporaire
*/
antlrcpp::Any IRVisitor::visitAndlogiq(ifccParser::AndlogiqContext *context){

	//récuparation du nom de la première variable
	std::string var= visit(context->expression(0));
	
	//récuparation du nom de la deuxieme variable
	std:: string var2=visit(context->expression(1));	


	//Creation d'une nouvelle variable résultat
	std:: string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,linectr);

    vector<string> params = {vartmp,var,var2};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::andq, Type::AND, params);

	return vartmp;
}

/*
*	Visite d'un xor logique.
*	Récupère le nom des variables var obtenues par la visite des expressions précédant et suivant le ^.
*	Stock et retourne le nom du résultat dans une nouvelle variable temporaire
*/
antlrcpp::Any IRVisitor::visitXorlogiq(ifccParser::XorlogiqContext *context){

	//récuparation du nom de la première variable
	std::string var= visit(context->expression(0));
	
	//récuparation du nom de la deuxieme variable
	std:: string var2=visit(context->expression(1));	


	//Creation d'une nouvelle variable résultat
	std:: string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,linectr);

    vector<string> params = {vartmp,var,var2};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::xorq, Type::XOR, params);

	return vartmp;
}


/*
*	Visite d'un ou logique.
*	Récupère le nom des variables var obtenues par la visite des expressions précédant et suivant le |.
*	Stock et retourne le nom du résultat dans une nouvelle variable temporaire
*/
antlrcpp::Any IRVisitor::visitOrlogiq(ifccParser::OrlogiqContext *context){
	//récuparation du nom de la première variable
	std::string var= visit(context->expression(0));
	
	//récuparation du nom de la deuxieme variable
	std:: string var2=visit(context->expression(1));	


	//Creation d'une nouvelle variable résultat
	std:: string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,linectr);

    vector<string> params = {vartmp,var,var2};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::orq, Type::OR, params);

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
	std:: string var = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,linectr);
	
    vector<string> params = {var,val};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, Type::CONST, params); 

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
	std::string var= visit(context->expression(0));

	//récuparation du nom de la deuxieme variable
	std:: string var2=visit(context->expression(1));

	//Creation d'une nouvelle variable résultat
	std:: string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,linectr);

	vector<string> params = {vartmp,var,var2};
	if(op) {
		cfg->current_bb->add_IRInstr(IRInstr::Operation::cmp_eq, Type::CMP_EQ, params);

	}else {
		cfg->current_bb->add_IRInstr(IRInstr::Operation::cmp_ineq, Type::CMP_INEQ, params);

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
	std::string var= visit(context->expression(0));

	//récuparation du nom de la deuxieme variable
	std:: string var2=visit(context->expression(1));

	//Creation d'une nouvelle variable résultat
	std:: string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,linectr);

	vector<string> params = {vartmp,var,var2};
	if(op) {
		cfg->current_bb->add_IRInstr(IRInstr::Operation::cmp_gt, Type::CMP_GT, params);

	}else {
		cfg->current_bb->add_IRInstr(IRInstr::Operation::cmp_lt, Type::CMP_LT, params);

	}

	return vartmp;
}



/*
* Visite d'une comparaison 'is greater' (>)
* Retourne le résultat de comparaison entre deux expressions
*/
// antlrcpp::Any IRVisitor :: visitIsgreater(ifccParser::IsgreaterContext *context) {
// 	return 0;
// }


/*
*	Visite du ITE statement (If Then Else). 
*/
antlrcpp::Any IRVisitor :: visitIf_then_else(ifccParser::If_then_elseContext *context) {

	//visite de la condition de la boucle et renvoie son résultat
	string var = visit(context->expression());

	//Creation d'une nouvelle variable résultat
	std:: string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,linectr);

	vector<string> params = {vartmp,var,"$0"};

	//Comparer le retour de la condition à 0
	cfg->current_bb->add_IRInstr(IRInstr::Operation::cmp_eq, Type::CMP_EQ, params);
	
	//sauvegarde le output avant d'entrer dans la boucle 
	BasicBlock* blockTmp = cfg->current_bb->exit_true;
	
	//créer les blocks then, else et endif
	string nameBlock1= cfg->new_BB_name("then");
    BasicBlock* block1 = new BasicBlock(cfg,nameBlock1);
	cfg->add_bb(block1);
	cfg->nextBBnumber++;

	string nameBlock2= cfg->new_BB_name("else");
    BasicBlock* block2 = new BasicBlock(cfg,nameBlock2);
	cfg->add_bb(block2);
	cfg->nextBBnumber++;

	string nameBlock3= cfg->new_BB_name("endif");
    BasicBlock* block3 = new BasicBlock(cfg,nameBlock3);
	cfg->add_bb(block3);
	cfg->nextBBnumber++;

	cfg->current_bb->exit_true= block1; // true-> then
	cfg->current_bb->exit_false= block2; // false->else

	cfg->current_bb=block1;
	block1->exit_true= block3;
	block1->exit_false= nullptr;
	

	visit(context->blockthen); 
	
	cfg->current_bb=block2;
	block2->exit_true= block3; 
	block2->exit_false= nullptr;

	visit(context->blockelse); 

	cfg->current_bb=block3;
	block3->exit_true = blockTmp;
	block3->exit_false=nullptr;


	return 0;
}

antlrcpp::Any IRVisitor:: visitWhileloop(ifccParser::WhileloopContext *context) {
	//sauvegarde le output avant d'entrer dans la boucle 
	BasicBlock* blockTmp = cfg->current_bb->exit_true;

	
	//créer les blocks condition, whileBlock et endwhile
	string nameBlock1= cfg->new_BB_name("condition");
    BasicBlock* block1 = new BasicBlock(cfg,nameBlock1);
	cfg->add_bb(block1);
	cfg->nextBBnumber++;

	string nameBlock2= cfg->new_BB_name("whileBody");
    BasicBlock* block2 = new BasicBlock(cfg,nameBlock2);
	cfg->add_bb(block2);
	cfg->nextBBnumber++;

	string nameBlock3= cfg->new_BB_name("endwhile");
    BasicBlock* block3 = new BasicBlock(cfg,nameBlock3);
	cfg->add_bb(block3);
	cfg->nextBBnumber++;

	cfg->current_bb->exit_true= block1;
	cfg->current_bb->exit_false= nullptr;

	cfg->current_bb=block1;
	cfg->current_bb->exit_true= block2; // true-> whileBody
	cfg->current_bb->exit_false= block3; // false-> quit (endWhile)


	//visite de la condition de la boucle et renvoie son résultat
	string var = visit(context->blockConditionWhile());

	//Creation d'une nouvelle variable résultat
	std:: string vartmp = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,linectr);

	vector<string> params = {vartmp,var,"$0"};

	//Comparer le retour de la condition à 0
	cfg->current_bb->add_IRInstr(IRInstr::Operation::cmp_eq, Type::CMP_EQ, params);

	//--------------------

	cfg->current_bb=block2;
	block2->exit_true= block1;
	block2->exit_false= nullptr;
	
	visit(context->blockwhile); 


	cfg->current_bb=block3;
	block3->exit_true = blockTmp;
	block3->exit_false=nullptr;

	return 0;
}
/*
*	Visite du block d'instructions d'une boucle
*/
antlrcpp::Any IRVisitor::visitBlock(ifccParser::BlockContext *context){
	for(int i=0 ; i<context->instr().size(); i++){
		linectr=context->instr().at(i)->getStart()->getLine();
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
	
	std:string ret = visit(context->expression());
	
    vector<string> params = {ret};

    cfg->current_bb->add_IRInstr(IRInstr::Operation::ret, Type::RET, params); 
	
	return 0;
}


//FunctionTable
void IRVisitor::add_to_function_table(string name, string returnType, vector<pair<string,string>> args, size_t line){
    fonctionTable->add(name,returnType,args,line);
    nextFreeFunctionIndex++;
}

void IRVisitor::redeclarationFunctionError(size_t linectr, string name, string returnType, vector<pair<string,string>> args){
    if(fonctionTable->contains(name) && fonctionTable->getReturnType(name)==returnType && fonctionTable->getArgsSize(name)==args.size() ){  
		cerr << "<source>:"<<linectr<<": error: redeclaration of '"<<fonctionTable->getReturnType(name)<<" "<<name<<"'" << endl;
		cerr << "<source>:"<<fonctionTable->getLine(name)<<": error: '"<<fonctionTable->getReturnType(name)<<" "<<name<<"' previously declared here" << endl;
	}
}

void IRVisitor::addSymbolToTable(string var, Type type, int nbAlloc){
	cfg->redeclarationError(linectr,var);
	cfg->add_to_symbol_table(var,type,linectr,nbAlloc);
}

void IRVisitor::erreurFunctionNonDeclaree(string name, size_t linectr){
	if(!fonctionTable->contains(name)){
		cerr << "<source>:"<<linectr<<": error: '"<<name<<"' was not declared in this scope" << endl;
		exit(1);
	}
}


Type IRVisitor::get_func_returnType(string name){
    if(fonctionTable->getReturnType(name)=="int"){
        return Type::INT;
    }else if(fonctionTable->getReturnType(name)=="char"){
        return Type::CHAR;
    }else if(fonctionTable->getReturnType(name)=="void"){
        return Type::VOID;
    }
    return Type::DEFAULT;
}

fonction* IRVisitor::get_func(string name){
    return fonctionTable->getFonction(name);
}

string IRVisitor::gestionTableau(string var, string index){
	//Check si la var a été déclaree
	cfg->erreurVariableNonDeclare(var,linectr);

	//Recupere son offset dans la table des symboles
	string offset = "-"+to_string(cfg->get_var_index(var));

	//variable utilisée
	cfg->set_var_used(var,true);

	//Stock l'offset de la première variable du tableau
	std:: string offsetValeurTableau = cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,linectr);

	vector<string> params = {offsetValeurTableau,offset};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, Type::CONST, params);



	//Multiplication de sa valeur par la taille de la variable pour obtenir un bon offset
	string taille_var = "-"+to_string(sizeof(int64_t));

	//Stock du resultat
	string offsetIndex= cfg->create_new_tempvar(Type::INT, cfg->current_bb->label,linectr);

	vector<string> params_taille = {offsetIndex,taille_var};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::ldconst, Type::CONST, params_taille);

	//Multiplication de l'index par la taille

	vector<string> params_mul = {offsetIndex,offsetIndex,index};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::mul, Type::MUL, params_mul);


	//Addition de l'offset de l'index à l'offset de la première variable du tableau

	vector<string> params2 = {offsetValeurTableau,offsetIndex,offsetValeurTableau};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::add, Type::ADD, params2);

	//Ajout de l'ofset de la variable du tableau à l'index i à rbp

	vector<string> params3 = {offsetValeurTableau,"%rbp",offsetValeurTableau};

	cfg->current_bb->add_IRInstr(IRInstr::Operation::add, Type::ADD, params3);

	return offsetValeurTableau;
}





