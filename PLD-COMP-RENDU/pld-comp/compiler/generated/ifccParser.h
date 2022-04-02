
// Generated from ifcc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  ifccParser : public antlr4::Parser {
public:
  enum {
    INT = 1, CHAR = 2, OPENPAR = 3, CLOSEPAR = 4, SEMICOLON = 5, OPENBRACKET = 6, 
    CLOSEBRACKET = 7, OPENSQBRACKETS = 8, CLOSESQBRACKETS = 9, EQUAL = 10, 
    PLUS = 11, MINUS = 12, MULTIPLY = 13, DIVIDE = 14, OPM = 15, OPA = 16, 
    EXCLA = 17, AND = 18, OR = 19, XOR = 20, RETURN = 21, CONST = 22, VAR = 23, 
    COMMA = 24, COMMENT = 25, DIRECTIVE = 26, WS = 27
  };

  enum {
    RuleAxiom = 0, RuleProg = 1, RuleInstr = 2, RuleDeclaration = 3, RuleFunctionCall = 4, 
    RuleVariables = 5, RuleEnddeclaration = 6, RuleAffectation = 7, RuleLvalue = 8, 
    RuleExpression = 9, RuleReturn_stmt = 10
  };

  ifccParser(antlr4::TokenStream *input);
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
  class FunctionCallContext;
  class VariablesContext;
  class EnddeclarationContext;
  class AffectationContext;
  class LvalueContext;
  class ExpressionContext;
  class Return_stmtContext; 

  class  AxiomContext : public antlr4::ParserRuleContext {
  public:
    AxiomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ProgContext *> prog();
    ProgContext* prog(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AxiomContext* axiom();

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> VAR();
    antlr4::tree::TerminalNode* VAR(size_t i);
    antlr4::tree::TerminalNode *OPENPAR();
    antlr4::tree::TerminalNode *CLOSEPAR();
    antlr4::tree::TerminalNode *OPENBRACKET();
    antlr4::tree::TerminalNode *CLOSEBRACKET();
    std::vector<InstrContext *> instr();
    InstrContext* instr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

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
    antlr4::tree::TerminalNode *SEMICOLON();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Return_stmtInstrContext : public InstrContext {
  public:
    Return_stmtInstrContext(InstrContext *ctx);

    Return_stmtContext *return_stmt();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionCallInstrContext : public InstrContext {
  public:
    FunctionCallInstrContext(InstrContext *ctx);

    FunctionCallContext *functionCall();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  InstrContext* instr();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    EnddeclarationContext *enddeclaration();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<VariablesContext *> variables();
    VariablesContext* variables(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *OPENPAR();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *CLOSEPAR();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallContext* functionCall();

  class  VariablesContext : public antlr4::ParserRuleContext {
  public:
    VariablesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    VariablesContext() = default;
    void copyFrom(VariablesContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VaraffectdeclContext : public VariablesContext {
  public:
    VaraffectdeclContext(VariablesContext *ctx);

    AffectationContext *affectation();
    antlr4::tree::TerminalNode *COMMA();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  VarsimpledeclContext : public VariablesContext {
  public:
    VarsimpledeclContext(VariablesContext *ctx);

    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *COMMA();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  VariablesContext* variables();

  class  EnddeclarationContext : public antlr4::ParserRuleContext {
  public:
    EnddeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    EnddeclarationContext() = default;
    void copyFrom(EnddeclarationContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  EnddeclvarContext : public EnddeclarationContext {
  public:
    EnddeclvarContext(EnddeclarationContext *ctx);

    LvalueContext *lvalue();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EnddeclaffectContext : public EnddeclarationContext {
  public:
    EnddeclaffectContext(EnddeclarationContext *ctx);

    AffectationContext *affectation();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  EnddeclarationContext* enddeclaration();

  class  AffectationContext : public antlr4::ParserRuleContext {
  public:
    AffectationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LvalueContext *lvalue();
    antlr4::tree::TerminalNode *EQUAL();
    ExpressionContext *expression();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AffectationContext* affectation();

  class  LvalueContext : public antlr4::ParserRuleContext {
  public:
    LvalueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LvalueContext() = default;
    void copyFrom(LvalueContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LvalVarContext : public LvalueContext {
  public:
    LvalVarContext(LvalueContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LvaltableauContext : public LvalueContext {
  public:
    LvaltableauContext(LvalueContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *OPENSQBRACKETS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSESQBRACKETS();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LvalueContext* lvalue();

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

  class  ValTableauContext : public ExpressionContext {
  public:
    ValTableauContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *OPENSQBRACKETS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSESQBRACKETS();
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

  class  NegationContext : public ExpressionContext {
  public:
    NegationContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *EXCLA();
    ExpressionContext *expression();
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

    antlr4::tree::TerminalNode *MINUS();
    ExpressionContext *expression();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FuncCallContext : public ExpressionContext {
  public:
    FuncCallContext(ExpressionContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *OPENPAR();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *CLOSEPAR();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OrlogiqContext : public ExpressionContext {
  public:
    OrlogiqContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *OR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  XorlogiqContext : public ExpressionContext {
  public:
    XorlogiqContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *XOR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AndlogiqContext : public ExpressionContext {
  public:
    AndlogiqContext(ExpressionContext *ctx);

    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *AND();
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

