#include "IRVisitor.h"
using namespace std;


/*
*	Visite les instructions du programme et génère le CFG correspondant
*/
antlrcpp::Any IRVisitor::visitProg(ifccParser::ProgContext *context) 
{
	cfg = new CFG();
	
	string functionName = context->VAR(0)->getText();
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
    
    cfg->gen_asm(cout,functionName);
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
	

	for(int i=0 ; i<context->variables().size(); i++){
		string var =visitVariables(context->variables().at(i));
        cfg->redeclarationError(linectr,var);
		cfg->add_to_symbol_table(var,Type::INT,linectr);
	}

	string var =context->VAR()->getText();
	cfg->redeclarationError(linectr,var);
	cfg->add_to_symbol_table(var,Type::INT,linectr);
	
	return 0;
}

/*
*	Visite l'appel de fonction
*/
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
antlrcpp::Any IRVisitor::visitVariables(ifccParser::VariablesContext *context){
	return context->VAR()->getText();
}


/*
*	Visite de l'affectation d'une variable et création de l'instruction dans le block.
*	Si la variable a bien été déclarée au préalable, on lui affecte la valeur produite par la visite de l'expression et on 
*	indique qu'elle a été utilisée. 
*/
antlrcpp::Any IRVisitor::visitAffectation(ifccParser::AffectationContext *context)
{

	std::string var =context->VAR()->getText();

    cfg->erreurVariableNonDeclare(var,linectr);

	string local = visit(context->expression());
	
	cfg->set_var_used(var,true);

    vector<string> params = {var,local};

    cfg->current_bb->add_IRInstr(IRInstr::Operation::mov, Type::MOV, params);

	return 0;
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







