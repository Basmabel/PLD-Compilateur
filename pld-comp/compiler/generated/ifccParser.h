
// Generated from ifcc.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  ifccParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, INT = 2, CHAR = 3, OPENPAR = 4, CLOSEPAR = 5, SEMICOLON = 6, 
    OPENBRACKET = 7, CLOSEBRACKET = 8, EQUAL = 9, PLUS = 10, MINUS = 11, 
    MULTIPLY = 12, DIVIDE = 13, OPM = 14, OPA = 15, RETURN = 16, CONST = 17, 
    VAR = 18, COMMA = 19, COMMENT = 20, DIRECTIVE = 21, WS = 22
  };

  enum {
    RuleAxiom = 0, RuleProg = 1, RuleInstr = 2, RuleDeclaration = 3, RuleVariables = 4, 
    RuleAffectation = 5, RuleExpression = 6, RuleReturn_stmt = 7, RuleValue = 8
  };

  explicit ifccParser(antlr4::TokenStream *input);
  ~ifccParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class AxiomContext;
  class ProgContext;
  class InstrContext;
  class DeclarationContext;
  class VariablesContext;
  class AffectationContext;
  class ExpressionContext;
  class Return_stmtContext;
  class ValueContext; 

  class  AxiomContext : public antlr4::ParserRuleContext {
  public:
    AxiomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgContext *prog();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AxiomContext* axiom();

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *OPENPAR();
    antlr4::tree::TerminalNode *CLOSEPAR();
    antlr4::tree::TerminalNode *OPENBRACKET();
    antlr4::tree::TerminalNode *CLOSEBRACKET();
    std::vector<InstrContext *> instr();
    InstrContext* instr(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  InstrContext : public antlr4::ParserRuleContext {
  public:
    InstrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    InstrContext() = default;
    void copyFrom(InstrContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DeclarationInstrContext : public InstrContext {
  public:
    DeclarationInstrContext(InstrContext *ctx);

    DeclarationContext *declaration();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AffectationInstrContext : public InstrContext {
  public:
    AffectationInstrContext(InstrContext *ctx);

    AffectationContext *affectation();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Return_stmtInstrContext : public InstrContext {
  public:
    Return_stmtInstrContext(InstrContext *ctx);

    Return_stmtContext *return_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InstrContext* instr();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<VariablesContext *> variables();
    VariablesContext* variables(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  VariablesContext : public antlr4::ParserRuleContext {
  public:
    VariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *COMMA();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariablesContext* variables();

  class  AffectationContext : public antlr4::ParserRuleContext {
  public:
    AffectationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *EQUAL();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AffectationContext* affectation();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExpressionContext() = default;
    void copyFrom(ExpressionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ParContext : public ExpressionContext {
  public:
    ParContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *OPENPAR();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSEPAR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlusminusContext : public ExpressionContext {
  public:
    PlusminusContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MINUS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ConstContext : public ExpressionContext {
  public:
    ConstContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *CONST();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarContext : public ExpressionContext {
  public:
    VarContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *VAR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MultdivContext : public ExpressionContext {
  public:
    MultdivContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *MULTIPLY();
    antlr4::tree::TerminalNode *DIVIDE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OpposeContext : public ExpressionContext {
  public:
    OpposeContext(ExpressionContext *ctx);

    ExpressionContext *expression();
    antlr4::tree::TerminalNode *MINUS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  Return_stmtContext : public antlr4::ParserRuleContext {
  public:
    Return_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_stmtContext* return_stmt();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONST();
    ExpressionContext *expression();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

