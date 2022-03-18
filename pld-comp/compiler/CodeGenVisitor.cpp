#include "CodeGenVisitor.h"



antlrcpp::Any CodeGenVisitor::visitProg(ifccParser::ProgContext *ctx) 
{
	symboltable = new symbolTable();
	linectr++;
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
			linectr++;
			visit(ctx->instr().at(i));
		}

		std::cout<<"    #epilogue\n"
        "    popq %rbp\n"
        "    ret\n";

		for(auto i : symboltable->checkIfSymbolsUsed()){
			std::cout<<"warning : variable '"<<i.first<<"' was declared but never referenced"<<endl;
		}

	return 0;
}

/*antlrcpp::Any CodeGenVisitor::visitInstr(ifccParser::InstrContext *context)
{
	
	if(context->declaration()){
		visitDeclaration(context->declaration());
	} else if(context->affectation()){
		visitAffectation(context->affectation());
	} else if(context->return_stmt()){
		visitReturn_stmt(context->return_stmt());
	}
	

	return 0;
}*/

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

	//std::cout<<" 	 movl	";
	

	if(context->value()->CONST()){
		std::cout<<" 	 movl	";
		int val = (int) visitValue(context->value());
		std::cout<<"$"<<val;
	}else{
		visit(context->value());
		std::cout<<" 	 movl	%eax,		-"<<symboltable->getOffset(var)<<"(%rbp)\n";
	}

	/*if(context->value()->VAR()){
		std::cout<<", %eax\n"
				   " 	 movl	%eax";		
	}*/
	
	
	std::cout<<"\n";
	
	symboltable->setUsed(var,true);

	return 0;
}

/*antlrcpp::Any CodeGenVisitor::visitExpression(ifccParser::ExpressionContext *context)
{
	return 0;
}*/

antlrcpp::Any CodeGenVisitor::visitPlus(ifccParser::PlusContext *context) 
{
	std::string var= visit(context->expression(0));
	
	//récuparation du nom de la deuxieme variable
	std:: string var2=visit(context->expression(1));
	std::cout<<" 	 movl %eax,		-"<<symboltable->getOffset(var2)<<"(%rbp)\n";
	std::cout<<" 	 addl	-"<<symboltable->getOffset(var)<<"(%rbp),		%eax\n";
	//Creation d'une nouvelle variable résultat
	countTmp++;
	std:: string vartmp = "tmp"+countTmp;
	addSymbol(vartmp);
	
	std::cout<<" 	 movl	%eax,		-"<<symboltable->getOffset(vartmp)<<"(%rbp)\n";


	return vartmp;
}

antlrcpp::Any CodeGenVisitor::visitMinus(ifccParser::MinusContext *context) 
{
	return 0;
}

antlrcpp::Any CodeGenVisitor::visitMult(ifccParser::MultContext *context) 
{
	return 0;
}

antlrcpp::Any CodeGenVisitor::visitDivide(ifccParser::DivideContext *context) 
{
	return 0;
}

antlrcpp::Any CodeGenVisitor::visitPar(ifccParser::ParContext *context) 
{
	return 0;
}

antlrcpp::Any CodeGenVisitor::visitVar(ifccParser::VarContext *context) 
{
	std::string var =context->VAR()->getText();
	std::cout<<" 	 movl	-"<<symboltable->getOffset(var)<<"(%rbp),		%eax\n";
	return var;
	
}

antlrcpp::Any CodeGenVisitor::visitConst(ifccParser::ConstContext *context)
{
	int val = stoi(context->CONST()->getText());
	countTmp++;
	std:: string var = "tmp"+countTmp;
	addSymbol(var);
	
	std::cout<<" 	 movl	$"<<val<<",		-"<<symboltable->getOffset(var)<<"(%rbp)\n";
	return var;
}


antlrcpp::Any CodeGenVisitor::visitReturn_stmt(ifccParser::Return_stmtContext *context) 
{
	std::cout<<" 	 movl	";
	visitValue(context->value());	
	std::cout<<", %eax\n";
	return 0;
}

antlrcpp::Any CodeGenVisitor::visitValue(ifccParser::ValueContext *context)
{
	/*if(context->VAR()){
		std::string var =context->VAR()->getText();
		erreurVariableNonDeclare(var);
		affichageOffsetVariable(var);
	}else if(context->CONST()){
		int val = stoi(context->CONST()->getText());
		std::cout<<"$"<<val;
	}*/

	
	if(context->expression()){
		std::string var=visit(context->expression());
		return var;
	}else if(context->CONST()){
		//int val = stoi(context->CONST()->getText());
		//countTmp++;
		//addSymbol("tmp"+countTmp);
		//return val;

		int val = stoi(context->CONST()->getText());
		//std::cout<<"$"<<val;
		return val;
	}
	

	return 0;
}




//private methods

void CodeGenVisitor::addSymbol(string var){
	
	if(symboltable->contains(var)){
		std::cerr << "error: redeclaration of '"<<symboltable->getType(var)<<" "<<var<<"'" << endl;
		exit(1);
	}

	symboltable->add(var,"int",linectr);
}

void CodeGenVisitor::affichageOffsetVariable(string var){
	std::cout<<"-"<<symboltable->getOffset(var)<<"(%rbp)";
}

void CodeGenVisitor::erreurVariableNonDeclare(string var){
	if(!symboltable->contains(var)){
		std::cerr << "error: '"<<var<<"' was not declared in this scope" << endl;
		exit(1);
	}
}


