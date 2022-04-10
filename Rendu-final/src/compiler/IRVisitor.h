/*************************************************************************
                           IRVisitor  -  description
                             -------------------
    début                : 27/03/2022
    copyright            : (C) 2022 par GUILLEVIC Marie, BELAHCEN Basma, ALAMI Meryem, PREVOT Jade, CHELLAOUI Adam, M BARECK Aichetou, 
							AL ZAHABI Hanaa, WAQIF Salma, GREVAUD Paul
*************************************************************************/


#if ! defined ( IRVISITOR_H )
#define IRVISITOR_H

//--------------------------------------------------- Interfaces utilisées

#include "antlr4-runtime.h"
#include "generated/ifccBaseVisitor.h"
#include "IR.h"
#include "functionTable.h"
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

		virtual antlrcpp::Any visitFunctionCallInstr(ifccParser::FunctionCallInstrContext *context) override;

		virtual antlrcpp::Any visitAffectationInstr(ifccParser::AffectationInstrContext *context) override;

		virtual antlrcpp::Any visitIf_then_elseInstr(ifccParser::If_then_elseInstrContext *context) override;

		virtual antlrcpp::Any visitWhileloopInstr(ifccParser::WhileloopInstrContext *context) override;

		virtual antlrcpp::Any visitReturn_stmtInstr(ifccParser::Return_stmtInstrContext *context) override;

		virtual antlrcpp::Any visitLvalVar(ifccParser::LvalVarContext *context) override;

		virtual antlrcpp::Any visitLvaltableau(ifccParser::LvaltableauContext *context) override;

		virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *context) override;
		
		virtual antlrcpp::Any visitInt(ifccParser::IntContext *context) override;

		virtual antlrcpp::Any visitChar(ifccParser::CharContext *context) override;

		virtual antlrcpp::Any visitTypeFunc(ifccParser::TypeFuncContext *context) override;

    	virtual antlrcpp::Any visitVoid(ifccParser::VoidContext *context) override;

		virtual antlrcpp::Any visitFunctionCall(ifccParser::FunctionCallContext *context) override;
  
		virtual antlrcpp::Any visitEnddeclvar(ifccParser::EnddeclvarContext *context) override;

    	virtual antlrcpp::Any visitEnddeclaffect(ifccParser::EnddeclaffectContext *context) override;

    	virtual antlrcpp::Any visitVarsimpledecl(ifccParser::VarsimpledeclContext *context) override;

    	virtual antlrcpp::Any visitVaraffectdecl(ifccParser::VaraffectdeclContext *context) override;

		virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *context) override;

		virtual antlrcpp::Any visitPlusminus(ifccParser::PlusminusContext *context) override;

		virtual antlrcpp::Any visitCharacter(ifccParser::CharacterContext *context) override;

		virtual antlrcpp::Any visitMultdiv(ifccParser::MultdivContext *context) override;

		virtual antlrcpp::Any visitFuncCall(ifccParser::FuncCallContext *context) override;

		virtual antlrcpp::Any visitPar(ifccParser::ParContext *context) override;

		virtual antlrcpp::Any visitExprAffectation(ifccParser::ExprAffectationContext *context) override;

		virtual antlrcpp::Any visitVar(ifccParser::VarContext *context) override;

		virtual antlrcpp::Any visitValTableau(ifccParser::ValTableauContext *context) override;

		virtual antlrcpp::Any visitOppose(ifccParser::OpposeContext *context) override;

		virtual antlrcpp::Any visitNegation(ifccParser::NegationContext *context) override;

		virtual antlrcpp::Any visitAndlogiq(ifccParser::AndlogiqContext *context) override;

		virtual antlrcpp::Any visitXorlogiq(ifccParser::XorlogiqContext *context) override;

		virtual antlrcpp::Any visitOrlogiq(ifccParser::OrlogiqContext *context) override;

		virtual antlrcpp::Any visitConst(ifccParser::ConstContext *context) override;

		virtual antlrcpp::Any visitEquality(ifccParser::EqualityContext *context) override;

		virtual antlrcpp::Any visitInequality(ifccParser::InequalityContext *context) override ;

		virtual antlrcpp::Any visitIf_then_else(ifccParser::If_then_elseContext *context) override;

		virtual antlrcpp::Any visitWhileloop(ifccParser::WhileloopContext *context) override;

		virtual antlrcpp::Any visitBlock(ifccParser::BlockContext *context) override;

		virtual antlrcpp::Any visitBlockConditionWhile(ifccParser::BlockConditionWhileContext *context) override;

		virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *context) override ;

		

	private:

		//--------Methods
		void addSymbolToTable(string var,Type type, int nbAlloc=1);

		string gestionTableau(string var, string index);

		Type stringToType(string type);

		// function table methods
		fonction *add_to_function_table(string name, Type returnType, size_t line);
		void redeclarationFunctionError(size_t currentLine, string name, Type returnType, vector<pair<string,Type>> args);
		void erreurFunctionNonDeclaree(string name, size_t currentLine);
		Type get_func_returnType(string name);
		fonction* get_func(string name);

		void add_put_and_get_char();

		//---------Attributes
		Type typeVardecl;

		int currentLine =0; //Ligne de l'instruction courante
		int nextFreeSymbolIndex = 0;
		

		functionTable* fonctionTable= new functionTable();
		int nextFreeFunctionIndex=0; /**< to allocate new functions in the function table */
		CFG* cfg;
		

		//Works like states to handle exceptions for affectations or return statements
		bool declaration = false; 
		bool affectation = false; 
		bool nestedAffectation = false; //check if a= b=5
		bool exprGauche = false; //check if we are in the left part of expression ex: c = a+ b=5 => error
		bool condition = false;
		bool returnStmt = false;

		//To get the size of an array
		ValeurVisitor v;
		
};

#endif //IRVISITOR_H