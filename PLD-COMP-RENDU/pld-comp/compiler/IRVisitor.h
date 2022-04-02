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
#include "ValeurVisitor.h"
#include <map> 

using namespace std;


/* Rôle de la classe <IRVisitor>
*  Pour chaque symbole non terminal de la grammaire, le visieur va l'explorer et générer le CFG correspondant
*/


class  IRVisitor : public ifccBaseVisitor {
	public:

		IRVisitor(ValeurVisitor v);

		virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override ;

		virtual antlrcpp::Any visitDeclarationInstr(ifccParser::DeclarationInstrContext *context) override;

		virtual antlrcpp::Any visitAffectationInstr(ifccParser::AffectationInstrContext *context) override;

		virtual antlrcpp::Any visitReturn_stmtInstr(ifccParser::Return_stmtInstrContext *context) override;

		virtual antlrcpp::Any visitLvalVar(ifccParser::LvalVarContext *context) override;

		virtual antlrcpp::Any visitLvaltableau(ifccParser::LvaltableauContext *context) override;

		virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *context) override;
		
		virtual antlrcpp::Any visitInt(ifccParser::IntContext *context) override;

		virtual antlrcpp::Any visitChar(ifccParser::CharContext *context) override;

		virtual antlrcpp::Any visitEnddeclvar(ifccParser::EnddeclvarContext *context) override;

    	virtual antlrcpp::Any visitEnddeclaffect(ifccParser::EnddeclaffectContext *context) override;

    	virtual antlrcpp::Any visitVarsimpledecl(ifccParser::VarsimpledeclContext *context) override;

    	virtual antlrcpp::Any visitVaraffectdecl(ifccParser::VaraffectdeclContext *context) override;

		virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *context) override;

		virtual antlrcpp::Any visitPlusminus(ifccParser::PlusminusContext *context) override;

		virtual antlrcpp::Any visitCharacter(ifccParser::CharacterContext *context) override;

		virtual antlrcpp::Any visitMultdiv(ifccParser::MultdivContext *context) override;

		virtual antlrcpp::Any visitPar(ifccParser::ParContext *context) override;

		virtual antlrcpp::Any visitVar(ifccParser::VarContext *context) override;

		virtual antlrcpp::Any visitValTableau(ifccParser::ValTableauContext *context) override;

		virtual antlrcpp::Any visitOppose(ifccParser::OpposeContext *context) override;

		virtual antlrcpp::Any visitNegation(ifccParser::NegationContext *context) override;

		virtual antlrcpp::Any visitAndlogiq(ifccParser::AndlogiqContext *context) override;

		virtual antlrcpp::Any visitXorlogiq(ifccParser::XorlogiqContext *context) override;

		virtual antlrcpp::Any visitOrlogiq(ifccParser::OrlogiqContext *context) override;

		virtual antlrcpp::Any visitConst(ifccParser::ConstContext *context) override;

		virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *context) override ;

	private:

		void addSymbolToTable(string var,Type type, int nbAlloc=1);
		void addValToTab(string var, int size);
		string gestionTableau(string var, string index);

		int linectr =0; //Ligne de l'instruction courante
		bool declaration = false;

        CFG* cfg;

		ValeurVisitor v;
		Type typeVardecl;
};

#endif //IRVISITOR_H