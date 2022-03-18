#pragma once


#include "antlr4-runtime.h"
#include "generated/ifccBaseVisitor.h"
#include "symbolTable.h"
#include <map> 


class  CodeGenVisitor : public ifccBaseVisitor {
	public:
		virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override ;

		virtual antlrcpp::Any visitInstr(ifccParser::InstrContext *context) override;

		virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *context) override;

		virtual antlrcpp::Any visitVariables(ifccParser::VariablesContext *context) override;

		virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *context) override;

		virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *context) override ;

		virtual antlrcpp::Any visitValue(ifccParser::ValueContext *context) override ;

	private:

		void addSymbol(string var);
		void affichageOffsetVariable(string var);
		//void setVariableUsed(string var);
		void erreurVariableNonDeclare(string var);

		symbolTable *symboltable;
		int linectr =0;

};

