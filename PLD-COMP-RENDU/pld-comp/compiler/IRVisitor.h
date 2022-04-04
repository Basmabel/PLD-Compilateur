/*************************************************************************
                           IRVisitor  -  description
                             -------------------
    début                : 27/03/2022
    copyright            : (C) 2022 par GUILLEVIC Marie, BELAHCEN Basma, ALAMI Meryem, PREVOT Jade, CHELLAOUI Adam, M BARECK Aichetou, 
							AL ZAHABI Hanaa, WAQIF Salma, GREVAUD Paul
*************************************************************************/

#pragma once

#if ! defined ( IRVISITOR_H )
#define IRVISITOR_H

//--------------------------------------------------- Interfaces utilisées

#include "antlr4-runtime.h"
#include "generated/ifccBaseVisitor.h"
#include "IR.h"
#include <map> 

using namespace std;


/* Rôle de la classe <IRVisitor>
*  Pour chaque symbole non terminal de la grammaire, le visieur va l'explorer et générer le CFG correspondant
*/


class  IRVisitor : public ifccBaseVisitor {
	public:
		virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override ;

		virtual antlrcpp::Any visitDeclarationInstr(ifccParser::DeclarationInstrContext *context) override;

		virtual antlrcpp::Any visitAffectationInstr(ifccParser::AffectationInstrContext *context) override;

		virtual antlrcpp::Any visitReturn_stmtInstr(ifccParser::Return_stmtInstrContext *context) override;

		virtual antlrcpp::Any visitIf_then_elseInstr(ifccParser::If_then_elseInstrContext *context) override;

		virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *context) override;

		virtual antlrcpp::Any visitVariables(ifccParser::VariablesContext *context) override;

		virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *context) override;

		virtual antlrcpp::Any visitPlusminus(ifccParser::PlusminusContext *context) override;

		virtual antlrcpp::Any visitMultdiv(ifccParser::MultdivContext *context) override;

		virtual antlrcpp::Any visitPar(ifccParser::ParContext *context) override;

		virtual antlrcpp::Any visitExprAffecttion(ifccParser::ExprAffecttionContext *context) override;

		virtual antlrcpp::Any visitVar(ifccParser::VarContext *context) override;

		virtual antlrcpp::Any visitOppose(ifccParser::OpposeContext *context) override;

		virtual antlrcpp::Any visitConst(ifccParser::ConstContext *context) override;

		virtual antlrcpp::Any visitEquality(ifccParser::EqualityContext *context) override;

		virtual antlrcpp::Any visitInequality(ifccParser::InequalityContext *context) override ;

		virtual antlrcpp::Any visitIf_then_else(ifccParser::If_then_elseContext *context) override;

		virtual antlrcpp::Any visitWhileloop(ifccParser::WhileloopContext *context) override;

		virtual antlrcpp::Any visitBlock(ifccParser::BlockContext *context) override;

		virtual antlrcpp::Any visitCondition_affectation(ifccParser::Condition_affectationContext *context) override;

		virtual antlrcpp::Any visitCondition_expression(ifccParser::Condition_expressionContext *context) override;

		virtual antlrcpp::Any visitCondition_comparison(ifccParser::Condition_comparisonContext *context) override;

		virtual antlrcpp::Any visitComparison_equal(ifccParser::Comparison_equalContext *context) override;

		virtual antlrcpp::Any visitComparison_different(ifccParser::Comparison_differentContext *context) override;

		virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *context) override ;

	private:
		
		int linectr =0; //Ligne de l'instruction courante

        CFG* cfg;
};

#endif //IRVISITOR_H