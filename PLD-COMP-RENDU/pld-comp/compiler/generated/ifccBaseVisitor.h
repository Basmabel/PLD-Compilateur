
// Generated from ifcc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ifccVisitor.h"


/**
 * This class provides an empty implementation of ifccVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ifccBaseVisitor : public ifccVisitor {
public:

  virtual antlrcpp::Any visitAxiom(ifccParser::AxiomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarationInstr(ifccParser::DeclarationInstrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCallInstr(ifccParser::FunctionCallInstrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_then_elseInstr(ifccParser::If_then_elseInstrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileloopInstr(ifccParser::WhileloopInstrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectationInstr(ifccParser::AffectationInstrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_stmtInstr(ifccParser::Return_stmtInstrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclaration(ifccParser::DeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt(ifccParser::IntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChar(ifccParser::CharContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCall(ifccParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarsimpledecl(ifccParser::VarsimpledeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVaraffectdecl(ifccParser::VaraffectdeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnddeclvar(ifccParser::EnddeclvarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEnddeclaffect(ifccParser::EnddeclaffectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectation(ifccParser::AffectationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLvalVar(ifccParser::LvalVarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLvaltableau(ifccParser::LvaltableauContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPar(ifccParser::ParContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlusminus(ifccParser::PlusminusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNegation(ifccParser::NegationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst(ifccParser::ConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprAffectation(ifccParser::ExprAffectationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar(ifccParser::VarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrlogiq(ifccParser::OrlogiqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValTableau(ifccParser::ValTableauContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInequality(ifccParser::InequalityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharacter(ifccParser::CharacterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultdiv(ifccParser::MultdivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOppose(ifccParser::OpposeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncCall(ifccParser::FuncCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEquality(ifccParser::EqualityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXorlogiq(ifccParser::XorlogiqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAndlogiq(ifccParser::AndlogiqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_then_else(ifccParser::If_then_elseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileloop(ifccParser::WhileloopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(ifccParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockConditionWhile(ifccParser::BlockConditionWhileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *ctx) override {
    return visitChildren(ctx);
  }


};

