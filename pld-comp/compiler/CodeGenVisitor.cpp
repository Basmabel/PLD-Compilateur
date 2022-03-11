#include "CodeGenVisitor.h"

antlrcpp::Any CodeGenVisitor::visitProg(ifccParser::ProgContext *ctx) 
{
	std::cout<<".globl    main\n"
        " main: \n"
        "    # prologue\n"
        "    pushq %rbp\n"
        "    movq %rsp, %rbp\n"
        "\n";
		visitReturn_stmt(ctx->return_stmt());

		std::cout<<"    #epilogue\n"
        "    popq %rbp\n"
        "    ret\n";

	return 0;
}

antlrcpp::Any CodeGenVisitor::visitReturn_stmt(ifccParser::Return_stmtContext *context) 
{
	std::cout<<"    #body\n";
	visitValue(context->value());

	return 0;
}

antlrcpp::Any CodeGenVisitor::visitValue(ifccParser::ValueContext *context)
{
	int retval = stoi(context->CONST()->getText());
	std::cout<<" 	 movl	$"<<retval<<", %eax\n"
			   "    popq %rbp\n";

	return 0;
}

