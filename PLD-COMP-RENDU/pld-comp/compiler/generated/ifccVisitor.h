
// Generated from ifcc.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "ifccParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ifccParser.
 */
class  ifccVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ifccParser.
   */
    virtual antlrcpp::Any visitAxiom(ifccParser::AxiomContext *context) = 0;

    virtual antlrcpp::Any visitProg(ifccParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitDeclarationInstr(ifccParser::DeclarationInstrContext *context) = 0;

    virtual antlrcpp::Any visitAffectationInstr(ifccParser::AffectationInstrContext *context) = 0;

    virtual antlrcpp::Any visitIf_then_elseInstr(ifccParser::If_then_elseInstrContext *context) = 0;

    virtual antlrcpp::Any visitReturn_stmtInstr(ifccParser::Return_stmtInstrContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitInt(ifccParser::IntContext *context) = 0;

    virtual antlrcpp::Any visitChar(ifccParser::CharContext *context) = 0;

    virtual antlrcpp::Any visitVarsimpledecl(ifccParser::VarsimpledeclContext *context) = 0;

    virtual antlrcpp::Any visitVaraffectdecl(ifccParser::VaraffectdeclContext *context) = 0;

    virtual antlrcpp::Any visitEnddeclvar(ifccParser::EnddeclvarContext *context) = 0;

    virtual antlrcpp::Any visitEnddeclaffect(ifccParser::EnddeclaffectContext *context) = 0;

    virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *context) = 0;

    virtual antlrcpp::Any visitLvalVar(ifccParser::LvalVarContext *context) = 0;

    virtual antlrcpp::Any visitLvaltableau(ifccParser::LvaltableauContext *context) = 0;

    virtual antlrcpp::Any visitPar(ifccParser::ParContext *context) = 0;

    virtual antlrcpp::Any visitPlusminus(ifccParser::PlusminusContext *context) = 0;

    virtual antlrcpp::Any visitNegation(ifccParser::NegationContext *context) = 0;

    virtual antlrcpp::Any visitConst(ifccParser::ConstContext *context) = 0;

    virtual antlrcpp::Any visitExprAffectation(ifccParser::ExprAffectationContext *context) = 0;

    virtual antlrcpp::Any visitVar(ifccParser::VarContext *context) = 0;

    virtual antlrcpp::Any visitOrlogiq(ifccParser::OrlogiqContext *context) = 0;

    virtual antlrcpp::Any visitValTableau(ifccParser::ValTableauContext *context) = 0;

    virtual antlrcpp::Any visitInequality(ifccParser::InequalityContext *context) = 0;

    virtual antlrcpp::Any visitCharacter(ifccParser::CharacterContext *context) = 0;

    virtual antlrcpp::Any visitMultdiv(ifccParser::MultdivContext *context) = 0;

    virtual antlrcpp::Any visitOppose(ifccParser::OpposeContext *context) = 0;

    virtual antlrcpp::Any visitEquality(ifccParser::EqualityContext *context) = 0;

    virtual antlrcpp::Any visitXorlogiq(ifccParser::XorlogiqContext *context) = 0;

    virtual antlrcpp::Any visitAndlogiq(ifccParser::AndlogiqContext *context) = 0;

    virtual antlrcpp::Any visitIf_then_else(ifccParser::If_then_elseContext *context) = 0;

    virtual antlrcpp::Any visitWhileloop(ifccParser::WhileloopContext *context) = 0;

    virtual antlrcpp::Any visitBlock(ifccParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *context) = 0;


};

