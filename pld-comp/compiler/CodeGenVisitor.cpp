#include "CodeGenVisitor.h"



antlrcpp::Any CodeGenVisitor::visitProg(ifccParser::ProgContext *ctx) 
{
	symboltable = new symbolTable();
	linectr++;
	std::cout<<".globl    main\n"
        " main: \n"
        "    # prologue\n"
        "    pushq %rbp\n"
        "    movq %rsp, %rbp\n"
        "\n";
		std::cout<<"    #body\n";
		for(int i=0 ; i<ctx->instr().size(); i++){
			linectr++;
			visitInstr(ctx->instr().at(i));
		}
		//visitReturn_stmt(ctx->return_stmt());
		//visitinstr(ctx->return_stmt());

		std::cout<<"    #epilogue\n"
        "    popq %rbp\n"
        "    ret\n";

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
			linectr++;
			visitVariables(context->variables().at(i));
	}

	std::string var =context->VAR()->getText();

	symboltable->add(var,"int",linectr);	
	
	return 0;
}


antlrcpp::Any CodeGenVisitor::visitVariables(ifccParser::VariablesContext *context){
	
	std::string var =context->VAR()->getText();

	symboltable->add(var,"int",linectr);	

	return 0;
}

antlrcpp::Any CodeGenVisitor::visitAffectation(ifccParser::AffectationContext *context)
{
	std::string var =context->VAR()->getText();
	//symboltable->setValue(var, context->value);
	std::cout<<" 	 movl	";
	visitValue(context->value());
	std::cout<<", -"<<symboltable->getOffset(var)<<"(%rbp)";
	std::cout<<"\n";
	

	return 0;
}


antlrcpp::Any CodeGenVisitor::visitReturn_stmt(ifccParser::Return_stmtContext *context) 
{
	std::cout<<" 	 movl	";
	if(context->value()->VAR()!= nullptr){
		std::string var =context->value()->VAR()->getText();
		std::cout<<"-"<<symboltable->getOffset(var)<<"(%rbp)";
	}else{
		visitValue(context->value());
	}
	
	std::cout<<", %eax\n";
	return 0;
}

antlrcpp::Any CodeGenVisitor::visitValue(ifccParser::ValueContext *context)
{

	if(context->VAR()!=nullptr){
		std::string var =context->VAR()->getText();
		std::cout <<var;
	}else if(context->CONST()!=nullptr){
		int val = stoi(context->CONST()->getText());
		std::cout<<"$"<<val;
	}
	

	return 0;
}

