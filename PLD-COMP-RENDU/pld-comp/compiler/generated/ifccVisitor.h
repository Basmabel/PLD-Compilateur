
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

    virtual antlrcpp::Any visitReturn_stmtInstr(ifccParser::Return_stmtInstrContext *context) = 0;

    virtual antlrcpp::Any visitIf_then_elseInstr(ifccParser::If_then_elseInstrContext *context) = 0;

    virtual antlrcpp::Any visitWhileInstr(ifccParser::WhileInstrContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitVariables(ifccParser::VariablesContext *context) = 0;

    virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *context) = 0;

    virtual antlrcpp::Any visitPar(ifccParser::ParContext *context) = 0;

    virtual antlrcpp::Any visitPlusminus(ifccParser::PlusminusContext *context) = 0;

    virtual antlrcpp::Any visitConst(ifccParser::ConstContext *context) = 0;

    virtual antlrcpp::Any visitVar(ifccParser::VarContext *context) = 0;

    virtual antlrcpp::Any visitMultdiv(ifccParser::MultdivContext *context) = 0;

    virtual antlrcpp::Any visitOppose(ifccParser::OpposeContext *context) = 0;

    virtual antlrcpp::Any visitIsequal(ifccParser::IsequalContext *context) = 0;

    virtual antlrcpp::Any visitIf_then_else(ifccParser::If_then_elseContext *context) = 0;

    virtual antlrcpp::Any visitWhileloop(ifccParser::WhileloopContext *context) = 0;

    virtual antlrcpp::Any visitBlock(ifccParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitCondition_affectation(ifccParser::Condition_affectationContext *context) = 0;

    virtual antlrcpp::Any visitCondition_expression(ifccParser::Condition_expressionContext *context) = 0;

    virtual antlrcpp::Any visitCondition_comparison(ifccParser::Condition_comparisonContext *context) = 0;

    virtual antlrcpp::Any visitComparison_equal(ifccParser::Comparison_equalContext *context) = 0;

    virtual antlrcpp::Any visitComparison_different(ifccParser::Comparison_differentContext *context) = 0;

    virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *context) = 0;


};

