#include "CodeGenVisitor.h"
using namespace std;


/*
*	Visite les instructions du programme et génère le code assembleur pour l'epilogue et le prologue
*/
antlrcpp::Any CodeGenVisitor::visitProg(ifccParser::ProgContext *ctx) 
{
	symboltable = new symbolTable();
	

	#ifdef __APPLE__
	std::cout<<".globl    _main\n"
        " _main: \n"
	#else
	std::cout<<".globl    main\n"
        " main: \n"
	#endif
        "    # prologue\n"
        "    pushq %rbp\n"
        "    movq %rsp, %rbp\n"
        "\n";

	std::cout<<"    #body\n";
	for(int i=0 ; i<ctx->instr().size(); i++){
		linectr=ctx->instr().at(i)->getStart()->getLine();
		visit(ctx->instr().at(i));
	}

	std::cout<<"    #epilogue\n"
        "    popq %rbp\n"
        "    ret\n";

	for(auto i : symboltable->checkIfSymbolsUsed()){
		std::cerr<<"warning : variable '"<<i.first<<"' was declared but never referenced"<<endl;
	}

	return 0;
}


/*
*	Visiteur de l'instruction déclaration d'une variable 
*/
antlrcpp::Any CodeGenVisitor::visitDeclarationInstr(ifccParser::DeclarationInstrContext *context){
	visitDeclaration(context->declaration());
	return 0;
}

/*
*	Visiteur de l'instruction affectation d'une variable 
*/
antlrcpp::Any CodeGenVisitor::visitAffectationInstr(ifccParser::AffectationInstrContext *context){
	visitAffectation(context->affectation());
	return 0;
}

/*
*	Visiteur de l'instruction return en fin de fonction 
*/
antlrcpp::Any CodeGenVisitor::visitReturn_stmtInstr(ifccParser::Return_stmtInstrContext *context){
	visitReturn_stmt(context->return_stmt());
	return 0;
}


/*
*	Visite la déclaration de variables, les ajoute à la table des symboles mais ne génère pas de code assembleur
*/
antlrcpp::Any CodeGenVisitor::visitDeclaration(ifccParser::DeclarationContext *context)
{
	
	for(int i=0 ; i<context->variables().size(); i++){
		string var =visitVariables(context->variables().at(i));
		addSymbol(var);	
	}

	string var =context->VAR()->getText();
	addSymbol(var);	
	
	return 0;
}


/*
*	Visite d'une variable, retourne son nom 
*/
antlrcpp::Any CodeGenVisitor::visitVariables(ifccParser::VariablesContext *context){
	return context->VAR()->getText();
}


/*
*	Visite de l'affectation d'une variable.
*	Si la variable a bien été déclarée au préalable, on lui affecte la valeur produite par la visite de l'expression et on 
*	indique qu'elle a été utilisée. 
*/
antlrcpp::Any CodeGenVisitor::visitAffectation(ifccParser::AffectationContext *context)
{

	std::string var =context->VAR()->getText();

	erreurVariableNonDeclare(var);

	string local = visit(context->expression());
	std::cout<<"	 movl   -"<<symboltable->getOffset(local)<<"(%rbp), %eax\n";
	std::cout<<"	 movl   %eax, -"<<symboltable->getOffset(var)<<"(%rbp)\n";
	
	symboltable->setUsed(var,true);

	return 0;
}


/*
*	Visite de l'expression plus ou de l'expression moins. 
* 	Génère le code assembleur correspondant à l'addition ou à la soustraction de deux variables var et var2 obtenues par la 
*	visite de l'expression à droite du (+/-) et de celle à gauche.
*	Stocke le résultat dans une nouvelle variable temporaire et retourne son nom
*/
antlrcpp::Any CodeGenVisitor::visitPlusminus(ifccParser::PlusminusContext *context) 
{

	//Indique si l'expression est une addition ou une soustraction
	bool op = (context->PLUS())? true : false;


	//récuparation du nom de la première variable
	std::string var= visit(context->expression(0));
	
	//récuparation du nom de la deuxieme variable
	std:: string var2=visit(context->expression(1));


	//Element neutre
	if(context->expression(0)->getTokens(ifccParser::CONST).size()!=0){
		if(context->expression(0)->getStart()->getType()==ifccParser::CONST &&  context->expression(0)->getStart()->getText()=="0"){
			return var2;
		}
	}else if(context->expression(1)->getTokens(ifccParser::CONST).size()!=0){
		if(context->expression(1)->getStart()->getType()==ifccParser::CONST &&  context->expression(1)->getStart()->getText()=="0"){
			return var;
		}
	}

	std::cout<<" 	 movl  -"<<symboltable->getOffset(var)<<"(%rbp), %eax\n";

	if(op){
		std::cout<<" 	 addl	-"<<symboltable->getOffset(var2)<<"(%rbp), %eax\n";
	}else {
		std::cout<<" 	 subl	-"<<symboltable->getOffset(var2)<<"(%rbp), %eax\n";
	}

	//Creation d'une nouvelle variable résultat
	std:: string vartmp = creationSymboleTemp();


	return vartmp;
}

/*
*	Visite de l'expression multiply ou de l'expression divide. 
* 	Génère le code assembleur correspondant à la multiplication ou à la division de deux variables var et var2 obtenues par la 
*	visite de l'expression à droite du (*,/) et de celle à gauche.
*	Stock le résultat dans une nouvelle variable temporaire et retourne son nom.
*/
antlrcpp::Any CodeGenVisitor::visitMultdiv(ifccParser::MultdivContext *context) 
{
	//Indique si l'expression est une multiplication ou une division
	bool op = (context->MULTIPLY())? true : false;

	//récuparation du nom de la première variable
	std::string var= visit(context->expression(0));

	//récuparation du nom de la deuxieme variable
	std:: string var2=visit(context->expression(1));

	//Element neutre
	if(context->expression(0)->getTokens(ifccParser::CONST).size()!=0){
		if(context->expression(0)->getStart()->getType()==ifccParser::CONST &&  context->expression(0)->getStart()->getText()=="1"){
			return var2;
		}
	}else if(context->expression(1)->getTokens(ifccParser::CONST).size()!=0){
		if(context->expression(1)->getStart()->getType()==ifccParser::CONST &&  context->expression(1)->getStart()->getText()=="1"){
			return var;
		}
	}
	

	if(op){
		std::cout<<" 	 movl  -"<<symboltable->getOffset(var2)<<"(%rbp), %eax\n";

		std::cout<<" 	 imul	-"<<symboltable->getOffset(var)<<"(%rbp), %eax\n";
	}else{
		std::cout<<" 	 movl  -"<<symboltable->getOffset(var)<<"(%rbp), %eax\n";

		std::cout<<" 	 cltd\n 	 idivl	-"<<symboltable->getOffset(var2)<<"(%rbp)\n";
	}
	

	//Creation d'une nouvelle variable résultat
	std:: string vartmp = creationSymboleTemp();


	return vartmp;
}

/*
*	Visite de l'expression entre parenthèses et retourne le nom de la variable obtenue
*/
antlrcpp::Any CodeGenVisitor::visitPar(ifccParser::ParContext *context) 
{
	string var = visit(context->expression());
	return var;	
}


/*
*	Visite d'une variable. Si elle a été déclarée, retourne son nom
*/
antlrcpp::Any CodeGenVisitor::visitVar(ifccParser::VarContext *context) 
{
	std::string var =context->VAR()->getText();

	erreurVariableNonDeclare(var);

	return var;
	
}

/*
*	Visite d'un moins unaire.
*	Génère le code assembleur associé au moins unaire soit la négation de la variable var obtenue par la visite de l'expression suivant le -.
*	Stock et retourne le nom du résultat dans une nouvelle variable temporaire
*/
antlrcpp::Any CodeGenVisitor::visitOppose(ifccParser::OpposeContext *context){

	std::string var =visit(context->expression());

	std::cout<<" 	 movl	-"<<symboltable->getOffset(var)<<"(%rbp),		%eax\n";
	std::cout<<" 	 negl	%eax\n";

	//Creation d'une nouvelle variable résultat
	std:: string vartmp = creationSymboleTemp();

	return vartmp;
}


/*
*	Visite d'une constante. 
*	Récupère sa valeur et stock la constante dans une nouvelle variable temporaire.
*	Génère le code assembleur associé.
*	Retourne le nom de la nouvelle variable.
*/
antlrcpp::Any CodeGenVisitor::visitConst(ifccParser::ConstContext *context)
{
	
	int val = stoi(context->CONST()->getText());

	countTmp++;
	std::string var = "tmp"+std::to_string(countTmp);
	addSymbol(var);
	symboltable->setUsed(var,true);
	
	std::cout<<" 	 movl	$"<<val<<", -"<<symboltable->getOffset(var)<<"(%rbp)\n";

	return var;
}


/*
*	Visite du return. Génère le code assembleur associé en utilisant le 
*	nom de la variable obtenue par la visite de l'expression dans le return.
*/
antlrcpp::Any CodeGenVisitor::visitReturn_stmt(ifccParser::Return_stmtContext *context) 
{
	
	std:string ret = visit(context->expression());
	std::cout<<" 	 movl	-"<<symboltable->getOffset(ret)<<"(%rbp), %eax\n";
	
	return 0;
}




//private methods


/*
*	Ajoute un symbol à la table des symboles. Génère une erreur si la variable est déjè déclarée
*/
void CodeGenVisitor::addSymbol(string var){
	
	if(symboltable->contains(var)){  
		std::cerr << "<source>:"<<linectr<<": error: redeclaration of '"<<symboltable->getType(var)<<" "<<var<<"'" << endl;
		std::cerr << "<source>:"<<symboltable->getLine(var)<<": error: '"<<symboltable->getType(var)<<" "<<var<<"' previously declared here" << endl;
		exit(1);
	}

	symboltable->add(var,"int",linectr);
}

/*
*	Génère une erreur si la variable n'a pas été déclarée
*/
void CodeGenVisitor::erreurVariableNonDeclare(string var){
	if(!symboltable->contains(var)){
		std::cerr << "<source>:"<<linectr<<": error: '"<<var<<"' was not declared in this scope" << endl;
		exit(1);
	}
}


/*
*	Ajoute un symbol temporaire à la table des symboles. Génère le code assembleur associé et retourne son nom.
*/
std::string CodeGenVisitor::creationSymboleTemp(){

	//Creation d'une nouvelle variable résultat
	countTmp++;
	std:: string vartmp = "tmp"+std::to_string(countTmp);
	addSymbol(vartmp);
	symboltable->setUsed(vartmp,true);
	
	std::cout<<" 	 movl	%eax, -"<<symboltable->getOffset(vartmp)<<"(%rbp)\n";

	return vartmp;
}






