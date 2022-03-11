#pragma once


#include "antlr4-runtime.h"
#include "generated/ifccBaseVisitor.h"


class  CodeGenVisitor : public ifccBaseVisitor {
	public:
		virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override ;

		virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *context) override ;

		virtual antlrcpp::Any visitValue(ifccParser::ValueContext *context) override ;

};

