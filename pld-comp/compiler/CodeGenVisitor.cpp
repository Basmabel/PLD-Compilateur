#include "CodeGenVisitor.h"
using namespace std;


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

antlrcpp::Any CodeGenVisitor::visitDeclarationInstr(ifccParser::DeclarationInstrContext *context){
	visitDeclaration(context->declaration());
	return 0;
}

antlrcpp::Any CodeGenVisitor::visitAffectationInstr(ifccParser::AffectationInstrContext *context){
	visitAffectation(context->affectation());
	return 0;
}

antlrcpp::Any CodeGenVisitor::visitReturn_stmtInstr(ifccParser::Return_stmtInstrContext *context){
	visitReturn_stmt(context->return_stmt());
	return 0;
}

antlrcpp::Any CodeGenVisitor::visitDeclaration(ifccParser::DeclarationContext *context)
{
	
	for(int i=0 ; i<context->variables().size(); i++){
			visitVariables(context->variables().at(i));
	}

	std::string var =context->VAR()->getText();
	addSymbol(var);	
	
	return 0;
}

antlrcpp::Any CodeGenVisitor::visitVariables(ifccParser::VariablesContext *context){
	std::string var =context->VAR()->getText();
	addSymbol(var);
	return 0;
}

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



antlrcpp::Any CodeGenVisitor::visitPlusminus(ifccParser::PlusminusContext *context) 

{
	bool op = (context->PLUS())? true : false;

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

antlrcpp::Any CodeGenVisitor::visitMultdiv(ifccParser::MultdivContext *context) 
{
	bool op = (context->MULTIPLY())? true : false;

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

antlrcpp::Any CodeGenVisitor::visitPar(ifccParser::ParContext *context) 
{

	string var = visit(context->expression());
	return var;	

}

antlrcpp::Any CodeGenVisitor::visitVar(ifccParser::VarContext *context) 
{
	std::string var =context->VAR()->getText();


	erreurVariableNonDeclare(var);

	return var;
	
}


antlrcpp::Any CodeGenVisitor::visitOppose(ifccParser::OpposeContext *context){
	std::string var =visit(context->expression());
	std::cout<<" 	 movl	-"<<symboltable->getOffset(var)<<"(%rbp),		%eax\n";

	std::cout<<" 	 negl	%eax\n";

	//Creation d'une nouvelle variable résultat
	std:: string vartmp = creationSymboleTemp();


	return vartmp;
}

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


antlrcpp::Any CodeGenVisitor::visitReturn_stmt(ifccParser::Return_stmtContext *context) 
{

	
	std:string ret = visit(context->expression());
	std::cout<<" 	 movl	-"<<symboltable->getOffset(ret)<<"(%rbp), %eax\n";
	
	

	return 0;
}

antlrcpp::Any CodeGenVisitor::visitValue(ifccParser::ValueContext *context)
{

	
	if(context->expression()){
		std::string var=visit(context->expression());
		//std::cout<<" 	 movl	-"<<symboltable->getOffset(var)<<"(%rbp), %eax\n";
		return var;
	}else if(context->CONST()){
		int val = stoi(context->CONST()->getText());

		return val;
	}
	

	return 0;
}




//private methods

void CodeGenVisitor::addSymbol(string var){
	
	if(symboltable->contains(var)){  
		std::cerr << "<source>:"<<linectr<<": error: redeclaration of '"<<symboltable->getType(var)<<" "<<var<<"'" << endl;
		std::cerr << "<source>:"<<symboltable->getLine(var)<<": error: '"<<symboltable->getType(var)<<" "<<var<<"' previously declared here" << endl;
		exit(1);
	}

	symboltable->add(var,"int",linectr);
}


void CodeGenVisitor::erreurVariableNonDeclare(string var){
	if(!symboltable->contains(var)){
		std::cerr << "<source>:"<<linectr<<": error: '"<<var<<"' was not declared in this scope" << endl;
		exit(1);
	}
}


std::string CodeGenVisitor::creationSymboleTemp(){

	//Creation d'une nouvelle variable résultat
	countTmp++;
	std:: string vartmp = "tmp"+std::to_string(countTmp);
	addSymbol(vartmp);
	symboltable->setUsed(vartmp,true);
	
	std::cout<<" 	 movl	%eax, -"<<symboltable->getOffset(vartmp)<<"(%rbp)\n";

	return vartmp;
}


