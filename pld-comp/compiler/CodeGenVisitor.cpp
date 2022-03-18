#include "CodeGenVisitor.h"



antlrcpp::Any CodeGenVisitor::visitProg(ifccParser::ProgContext *ctx) 
{
	symboltable = new symbolTable();
	linectr++;
	#ifdef __APPLE__
	std::cout<<".globl    _main\n"
        " _main: \n"
	#else 
	std::cout<<".globl	main\n"
		" main: \n"
	#endif
        "    # prologue\n"
        "    pushq %rbp\n"
        "    movq %rsp, %rbp\n"
        "\n";
		std::cout<<"    #body\n";
		for(int i=0 ; i<ctx->instr().size(); i++){
			linectr++;
			visitInstr(ctx->instr().at(i));
		}

		std::cout<<"    #epilogue\n"
        "    popq %rbp\n"
        "    ret\n";

		for(auto i : symboltable->checkIfSymbolsUsed()){
			std::cout<<"warning : variable '"<<i.first<<"' was declared but never referenced"<<endl;
		}

	return 0;
}

antlrcpp::Any CodeGenVisitor::visitInstr(ifccParser::InstrContext *context)
{
	
	if(context->declaration()){
		visitDeclaration(context->declaration());
	} else if(context->affectation()){
		visitAffectation(context->affectation());
	} else if(context->return_stmt()){
		visitReturn_stmt(context->return_stmt());
	}
	

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

	std::cout<<" 	 movl	";
	visitValue(context->value());

	if(context->value()->VAR()){
		std::cout<<", %eax\n"
				   " 	 movl	%eax";		
	}
	
	affichageOffsetVariable(var);
	std::cout<<"\n";
	
	symboltable->setUsed(var,true);

	return 0;
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


	if(context->VAR()){
		std::string var =context->VAR()->getText();
		erreurVariableNonDeclare(var);
		affichageOffsetVariable(var);
	}else if(context->CONST()){
		int val = stoi(context->CONST()->getText());
		std::cout<<"$"<<val;
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


