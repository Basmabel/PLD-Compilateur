
// Generated from ifcc.g4 by ANTLR 4.7.2


#include "ifccVisitor.h"

#include "ifccParser.h"


using namespace antlrcpp;
using namespace antlr4;

ifccParser::ifccParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ifccParser::~ifccParser() {
  delete _interpreter;
}

std::string ifccParser::getGrammarFileName() const {
  return "ifcc.g4";
}

const std::vector<std::string>& ifccParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ifccParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- AxiomContext ------------------------------------------------------------------

ifccParser::AxiomContext::AxiomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::ProgContext* ifccParser::AxiomContext::prog() {
  return getRuleContext<ifccParser::ProgContext>(0);
}


size_t ifccParser::AxiomContext::getRuleIndex() const {
  return ifccParser::RuleAxiom;
}

antlrcpp::Any ifccParser::AxiomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAxiom(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::AxiomContext* ifccParser::axiom() {
  AxiomContext *_localctx = _tracker.createInstance<AxiomContext>(_ctx, getState());
  enterRule(_localctx, 0, ifccParser::RuleAxiom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(22);
    prog();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgContext ------------------------------------------------------------------

ifccParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::ProgContext::INT() {
  return getToken(ifccParser::INT, 0);
}

tree::TerminalNode* ifccParser::ProgContext::OPENPAR() {
  return getToken(ifccParser::OPENPAR, 0);
}

tree::TerminalNode* ifccParser::ProgContext::CLOSEPAR() {
  return getToken(ifccParser::CLOSEPAR, 0);
}

tree::TerminalNode* ifccParser::ProgContext::OPENBRACKET() {
  return getToken(ifccParser::OPENBRACKET, 0);
}

tree::TerminalNode* ifccParser::ProgContext::CLOSEBRACKET() {
  return getToken(ifccParser::CLOSEBRACKET, 0);
}

std::vector<ifccParser::InstrContext *> ifccParser::ProgContext::instr() {
  return getRuleContexts<ifccParser::InstrContext>();
}

ifccParser::InstrContext* ifccParser::ProgContext::instr(size_t i) {
  return getRuleContext<ifccParser::InstrContext>(i);
}


size_t ifccParser::ProgContext::getRuleIndex() const {
  return ifccParser::RuleProg;
}

antlrcpp::Any ifccParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ProgContext* ifccParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 2, ifccParser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
    match(ifccParser::INT);
    setState(25);
    match(ifccParser::T__0);
    setState(26);
    match(ifccParser::OPENPAR);
    setState(27);
    match(ifccParser::CLOSEPAR);
    setState(28);
    match(ifccParser::OPENBRACKET);
    setState(32);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ifccParser::INT)
      | (1ULL << ifccParser::CHAR)
      | (1ULL << ifccParser::RETURN)
      | (1ULL << ifccParser::VAR))) != 0)) {
      setState(29);
      instr();
      setState(34);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(35);
    match(ifccParser::CLOSEBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstrContext ------------------------------------------------------------------

ifccParser::InstrContext::InstrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::InstrContext::getRuleIndex() const {
  return ifccParser::RuleInstr;
}

void ifccParser::InstrContext::copyFrom(InstrContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DeclarationInstrContext ------------------------------------------------------------------

ifccParser::DeclarationContext* ifccParser::DeclarationInstrContext::declaration() {
  return getRuleContext<ifccParser::DeclarationContext>(0);
}

ifccParser::DeclarationInstrContext::DeclarationInstrContext(InstrContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::DeclarationInstrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitDeclarationInstr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffectationInstrContext ------------------------------------------------------------------

ifccParser::AffectationContext* ifccParser::AffectationInstrContext::affectation() {
  return getRuleContext<ifccParser::AffectationContext>(0);
}

tree::TerminalNode* ifccParser::AffectationInstrContext::SEMICOLON() {
  return getToken(ifccParser::SEMICOLON, 0);
}

ifccParser::AffectationInstrContext::AffectationInstrContext(InstrContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::AffectationInstrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAffectationInstr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Return_stmtInstrContext ------------------------------------------------------------------

ifccParser::Return_stmtContext* ifccParser::Return_stmtInstrContext::return_stmt() {
  return getRuleContext<ifccParser::Return_stmtContext>(0);
}

ifccParser::Return_stmtInstrContext::Return_stmtInstrContext(InstrContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::Return_stmtInstrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitReturn_stmtInstr(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::InstrContext* ifccParser::instr() {
  InstrContext *_localctx = _tracker.createInstance<InstrContext>(_ctx, getState());
  enterRule(_localctx, 4, ifccParser::RuleInstr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(42);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::INT:
      case ifccParser::CHAR: {
        _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ifccParser::DeclarationInstrContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(37);
        declaration();
        break;
      }

      case ifccParser::VAR: {
        _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ifccParser::AffectationInstrContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(38);
        affectation();
        setState(39);
        match(ifccParser::SEMICOLON);
        break;
      }

      case ifccParser::RETURN: {
        _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ifccParser::Return_stmtInstrContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(41);
        return_stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

ifccParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::TypeContext* ifccParser::DeclarationContext::type() {
  return getRuleContext<ifccParser::TypeContext>(0);
}

ifccParser::EnddeclarationContext* ifccParser::DeclarationContext::enddeclaration() {
  return getRuleContext<ifccParser::EnddeclarationContext>(0);
}

tree::TerminalNode* ifccParser::DeclarationContext::SEMICOLON() {
  return getToken(ifccParser::SEMICOLON, 0);
}

std::vector<ifccParser::VariablesContext *> ifccParser::DeclarationContext::variables() {
  return getRuleContexts<ifccParser::VariablesContext>();
}

ifccParser::VariablesContext* ifccParser::DeclarationContext::variables(size_t i) {
  return getRuleContext<ifccParser::VariablesContext>(i);
}


size_t ifccParser::DeclarationContext::getRuleIndex() const {
  return ifccParser::RuleDeclaration;
}

antlrcpp::Any ifccParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::DeclarationContext* ifccParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, ifccParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(44);
    type();
    setState(48);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(45);
        variables(); 
      }
      setState(50);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
    setState(51);
    enddeclaration();
    setState(52);
    match(ifccParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

ifccParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::TypeContext::getRuleIndex() const {
  return ifccParser::RuleType;
}

void ifccParser::TypeContext::copyFrom(TypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CharContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::CharContext::CHAR() {
  return getToken(ifccParser::CHAR, 0);
}

ifccParser::CharContext::CharContext(TypeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::CharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitChar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::IntContext::INT() {
  return getToken(ifccParser::INT, 0);
}

ifccParser::IntContext::IntContext(TypeContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::IntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitInt(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::TypeContext* ifccParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 8, ifccParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(56);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::INT: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<ifccParser::IntContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(54);
        match(ifccParser::INT);
        break;
      }

      case ifccParser::CHAR: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<ifccParser::CharContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(55);
        match(ifccParser::CHAR);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariablesContext ------------------------------------------------------------------

ifccParser::VariablesContext::VariablesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::VariablesContext::getRuleIndex() const {
  return ifccParser::RuleVariables;
}

void ifccParser::VariablesContext::copyFrom(VariablesContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VaraffectdeclContext ------------------------------------------------------------------

ifccParser::AffectationContext* ifccParser::VaraffectdeclContext::affectation() {
  return getRuleContext<ifccParser::AffectationContext>(0);
}

tree::TerminalNode* ifccParser::VaraffectdeclContext::COMMA() {
  return getToken(ifccParser::COMMA, 0);
}

ifccParser::VaraffectdeclContext::VaraffectdeclContext(VariablesContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::VaraffectdeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitVaraffectdecl(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarsimpledeclContext ------------------------------------------------------------------

ifccParser::LvalueContext* ifccParser::VarsimpledeclContext::lvalue() {
  return getRuleContext<ifccParser::LvalueContext>(0);
}

tree::TerminalNode* ifccParser::VarsimpledeclContext::COMMA() {
  return getToken(ifccParser::COMMA, 0);
}

ifccParser::VarsimpledeclContext::VarsimpledeclContext(VariablesContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::VarsimpledeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitVarsimpledecl(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::VariablesContext* ifccParser::variables() {
  VariablesContext *_localctx = _tracker.createInstance<VariablesContext>(_ctx, getState());
  enterRule(_localctx, 10, ifccParser::RuleVariables);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(64);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VariablesContext *>(_tracker.createInstance<ifccParser::VarsimpledeclContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(58);
      lvalue();
      setState(59);
      match(ifccParser::COMMA);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VariablesContext *>(_tracker.createInstance<ifccParser::VaraffectdeclContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(61);
      affectation();
      setState(62);
      match(ifccParser::COMMA);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EnddeclarationContext ------------------------------------------------------------------

ifccParser::EnddeclarationContext::EnddeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::EnddeclarationContext::getRuleIndex() const {
  return ifccParser::RuleEnddeclaration;
}

void ifccParser::EnddeclarationContext::copyFrom(EnddeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- EnddeclvarContext ------------------------------------------------------------------

ifccParser::LvalueContext* ifccParser::EnddeclvarContext::lvalue() {
  return getRuleContext<ifccParser::LvalueContext>(0);
}

ifccParser::EnddeclvarContext::EnddeclvarContext(EnddeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::EnddeclvarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitEnddeclvar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EnddeclaffectContext ------------------------------------------------------------------

ifccParser::AffectationContext* ifccParser::EnddeclaffectContext::affectation() {
  return getRuleContext<ifccParser::AffectationContext>(0);
}

ifccParser::EnddeclaffectContext::EnddeclaffectContext(EnddeclarationContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::EnddeclaffectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitEnddeclaffect(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::EnddeclarationContext* ifccParser::enddeclaration() {
  EnddeclarationContext *_localctx = _tracker.createInstance<EnddeclarationContext>(_ctx, getState());
  enterRule(_localctx, 12, ifccParser::RuleEnddeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(68);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<EnddeclarationContext *>(_tracker.createInstance<ifccParser::EnddeclvarContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(66);
      lvalue();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<EnddeclarationContext *>(_tracker.createInstance<ifccParser::EnddeclaffectContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(67);
      affectation();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AffectationContext ------------------------------------------------------------------

ifccParser::AffectationContext::AffectationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::LvalueContext* ifccParser::AffectationContext::lvalue() {
  return getRuleContext<ifccParser::LvalueContext>(0);
}

tree::TerminalNode* ifccParser::AffectationContext::EQUAL() {
  return getToken(ifccParser::EQUAL, 0);
}

ifccParser::ExpressionContext* ifccParser::AffectationContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
}


size_t ifccParser::AffectationContext::getRuleIndex() const {
  return ifccParser::RuleAffectation;
}

antlrcpp::Any ifccParser::AffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAffectation(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::AffectationContext* ifccParser::affectation() {
  AffectationContext *_localctx = _tracker.createInstance<AffectationContext>(_ctx, getState());
  enterRule(_localctx, 14, ifccParser::RuleAffectation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    lvalue();
    setState(71);
    match(ifccParser::EQUAL);
    setState(72);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LvalueContext ------------------------------------------------------------------

ifccParser::LvalueContext::LvalueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::LvalueContext::getRuleIndex() const {
  return ifccParser::RuleLvalue;
}

void ifccParser::LvalueContext::copyFrom(LvalueContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LvalVarContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::LvalVarContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::LvalVarContext::LvalVarContext(LvalueContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::LvalVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitLvalVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LvaltableauContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::LvaltableauContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

tree::TerminalNode* ifccParser::LvaltableauContext::OPENSQBRACKETS() {
  return getToken(ifccParser::OPENSQBRACKETS, 0);
}

ifccParser::ExpressionContext* ifccParser::LvaltableauContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
}

tree::TerminalNode* ifccParser::LvaltableauContext::CLOSESQBRACKETS() {
  return getToken(ifccParser::CLOSESQBRACKETS, 0);
}

ifccParser::LvaltableauContext::LvaltableauContext(LvalueContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::LvaltableauContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitLvaltableau(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::LvalueContext* ifccParser::lvalue() {
  LvalueContext *_localctx = _tracker.createInstance<LvalueContext>(_ctx, getState());
  enterRule(_localctx, 16, ifccParser::RuleLvalue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(80);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<LvalueContext *>(_tracker.createInstance<ifccParser::LvalVarContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(74);
      match(ifccParser::VAR);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<LvalueContext *>(_tracker.createInstance<ifccParser::LvaltableauContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(75);
      match(ifccParser::VAR);
      setState(76);
      match(ifccParser::OPENSQBRACKETS);
      setState(77);
      expression(0);
      setState(78);
      match(ifccParser::CLOSESQBRACKETS);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

ifccParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::ExpressionContext::getRuleIndex() const {
  return ifccParser::RuleExpression;
}

void ifccParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::ParContext::OPENPAR() {
  return getToken(ifccParser::OPENPAR, 0);
}

ifccParser::ExpressionContext* ifccParser::ParContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
}

tree::TerminalNode* ifccParser::ParContext::CLOSEPAR() {
  return getToken(ifccParser::CLOSEPAR, 0);
}

ifccParser::ParContext::ParContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::ParContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitPar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ValTableauContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::ValTableauContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

tree::TerminalNode* ifccParser::ValTableauContext::OPENSQBRACKETS() {
  return getToken(ifccParser::OPENSQBRACKETS, 0);
}

ifccParser::ExpressionContext* ifccParser::ValTableauContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
}

tree::TerminalNode* ifccParser::ValTableauContext::CLOSESQBRACKETS() {
  return getToken(ifccParser::CLOSESQBRACKETS, 0);
}

ifccParser::ValTableauContext::ValTableauContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::ValTableauContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitValTableau(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusminusContext ------------------------------------------------------------------

std::vector<ifccParser::ExpressionContext *> ifccParser::PlusminusContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::PlusminusContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

tree::TerminalNode* ifccParser::PlusminusContext::PLUS() {
  return getToken(ifccParser::PLUS, 0);
}

tree::TerminalNode* ifccParser::PlusminusContext::MINUS() {
  return getToken(ifccParser::MINUS, 0);
}

ifccParser::PlusminusContext::PlusminusContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::PlusminusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitPlusminus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegationContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::NegationContext::EXCLA() {
  return getToken(ifccParser::EXCLA, 0);
}

ifccParser::ExpressionContext* ifccParser::NegationContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
}

ifccParser::NegationContext::NegationContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::NegationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitNegation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CharacterContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::CharacterContext::CHARACTER() {
  return getToken(ifccParser::CHARACTER, 0);
}

ifccParser::CharacterContext::CharacterContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::CharacterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitCharacter(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::ConstContext::CONST() {
  return getToken(ifccParser::CONST, 0);
}

ifccParser::ConstContext::ConstContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::ConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::VarContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::VarContext::VarContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::VarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultdivContext ------------------------------------------------------------------

std::vector<ifccParser::ExpressionContext *> ifccParser::MultdivContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::MultdivContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

tree::TerminalNode* ifccParser::MultdivContext::MULTIPLY() {
  return getToken(ifccParser::MULTIPLY, 0);
}

tree::TerminalNode* ifccParser::MultdivContext::DIVIDE() {
  return getToken(ifccParser::DIVIDE, 0);
}

ifccParser::MultdivContext::MultdivContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::MultdivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitMultdiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpposeContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::OpposeContext::MINUS() {
  return getToken(ifccParser::MINUS, 0);
}

ifccParser::ExpressionContext* ifccParser::OpposeContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
}

ifccParser::OpposeContext::OpposeContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::OpposeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitOppose(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrlogiqContext ------------------------------------------------------------------

std::vector<ifccParser::ExpressionContext *> ifccParser::OrlogiqContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::OrlogiqContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

tree::TerminalNode* ifccParser::OrlogiqContext::OR() {
  return getToken(ifccParser::OR, 0);
}

ifccParser::OrlogiqContext::OrlogiqContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::OrlogiqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitOrlogiq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- XorlogiqContext ------------------------------------------------------------------

std::vector<ifccParser::ExpressionContext *> ifccParser::XorlogiqContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::XorlogiqContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

tree::TerminalNode* ifccParser::XorlogiqContext::XOR() {
  return getToken(ifccParser::XOR, 0);
}

ifccParser::XorlogiqContext::XorlogiqContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::XorlogiqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitXorlogiq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndlogiqContext ------------------------------------------------------------------

std::vector<ifccParser::ExpressionContext *> ifccParser::AndlogiqContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::AndlogiqContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

tree::TerminalNode* ifccParser::AndlogiqContext::AND() {
  return getToken(ifccParser::AND, 0);
}

ifccParser::AndlogiqContext::AndlogiqContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::AndlogiqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAndlogiq(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ExpressionContext* ifccParser::expression() {
   return expression(0);
}

ifccParser::ExpressionContext* ifccParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ifccParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  ifccParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, ifccParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(99);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(83);
      match(ifccParser::OPENPAR);
      setState(84);
      expression(0);
      setState(85);
      match(ifccParser::CLOSEPAR);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<OpposeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(87);
      match(ifccParser::MINUS);
      setState(88);
      expression(11);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NegationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(89);
      match(ifccParser::EXCLA);
      setState(90);
      expression(10);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ValTableauContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(91);
      match(ifccParser::VAR);
      setState(92);
      match(ifccParser::OPENSQBRACKETS);
      setState(93);
      expression(0);
      setState(94);
      match(ifccParser::CLOSESQBRACKETS);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<VarContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(96);
      match(ifccParser::VAR);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<CharacterContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(97);
      match(ifccParser::CHARACTER);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ConstContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(98);
      match(ifccParser::CONST);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(118);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(116);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultdivContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(101);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(102);
          _la = _input->LA(1);
          if (!(_la == ifccParser::MULTIPLY

          || _la == ifccParser::DIVIDE)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(103);
          expression(10);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<PlusminusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(104);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(105);
          _la = _input->LA(1);
          if (!(_la == ifccParser::PLUS

          || _la == ifccParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(106);
          expression(9);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AndlogiqContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(107);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(108);
          match(ifccParser::AND);
          setState(109);
          expression(8);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<XorlogiqContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(110);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(111);
          match(ifccParser::XOR);
          setState(112);
          expression(7);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<OrlogiqContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(113);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(114);
          match(ifccParser::OR);
          setState(115);
          expression(6);
          break;
        }

        } 
      }
      setState(120);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Return_stmtContext ------------------------------------------------------------------

ifccParser::Return_stmtContext::Return_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::Return_stmtContext::RETURN() {
  return getToken(ifccParser::RETURN, 0);
}

ifccParser::ExpressionContext* ifccParser::Return_stmtContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
}

tree::TerminalNode* ifccParser::Return_stmtContext::SEMICOLON() {
  return getToken(ifccParser::SEMICOLON, 0);
}


size_t ifccParser::Return_stmtContext::getRuleIndex() const {
  return ifccParser::RuleReturn_stmt;
}

antlrcpp::Any ifccParser::Return_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitReturn_stmt(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::Return_stmtContext* ifccParser::return_stmt() {
  Return_stmtContext *_localctx = _tracker.createInstance<Return_stmtContext>(_ctx, getState());
  enterRule(_localctx, 20, ifccParser::RuleReturn_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(ifccParser::RETURN);
    setState(122);
    expression(0);
    setState(123);
    match(ifccParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ifccParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 9: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ifccParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 9);
    case 1: return precpred(_ctx, 8);
    case 2: return precpred(_ctx, 7);
    case 3: return precpred(_ctx, 6);
    case 4: return precpred(_ctx, 5);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ifccParser::_decisionToDFA;
atn::PredictionContextCache ifccParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ifccParser::_atn;
std::vector<uint16_t> ifccParser::_serializedATN;

std::vector<std::string> ifccParser::_ruleNames = {
  "axiom", "prog", "instr", "declaration", "type", "variables", "enddeclaration", 
  "affectation", "lvalue", "expression", "return_stmt"
};

std::vector<std::string> ifccParser::_literalNames = {
  "", "'main'", "'int'", "'char'", "'('", "')'", "';'", "'{'", "'}'", "'['", 
  "']'", "'='", "'+'", "'-'", "'*'", "'/'", "", "", "'!'", "'&'", "'|'", 
  "'^'", "'return'", "", "", "", "','"
};

std::vector<std::string> ifccParser::_symbolicNames = {
  "", "", "INT", "CHAR", "OPENPAR", "CLOSEPAR", "SEMICOLON", "OPENBRACKET", 
  "CLOSEBRACKET", "OPENSQBRACKETS", "CLOSESQBRACKETS", "EQUAL", "PLUS", 
  "MINUS", "MULTIPLY", "DIVIDE", "OPM", "OPA", "EXCLA", "AND", "OR", "XOR", 
  "RETURN", "CONST", "VAR", "CHARACTER", "COMMA", "COMMENT", "DIRECTIVE", 
  "WS"
};

dfa::Vocabulary ifccParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ifccParser::_tokenNames;

ifccParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x1f, 0x80, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x21, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x24, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x2d, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x7, 0x5, 0x31, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x34, 0xb, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x3b, 0xa, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x43, 
    0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x47, 0xa, 0x8, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x5, 0xa, 0x53, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x5, 0xb, 0x66, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x77, 0xa, 0xb, 0xc, 0xb, 
    0xe, 0xb, 0x7a, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x2, 0x3, 0x14, 0xd, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x2, 0x4, 0x3, 0x2, 0x10, 0x11, 0x3, 0x2, 0xe, 0xf, 0x2, 
    0x87, 0x2, 0x18, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1a, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2e, 0x3, 0x2, 0x2, 0x2, 0xa, 0x3a, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x42, 0x3, 0x2, 0x2, 0x2, 0xe, 0x46, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x48, 0x3, 0x2, 0x2, 0x2, 0x12, 0x52, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x65, 0x3, 0x2, 0x2, 0x2, 0x16, 0x7b, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x19, 0x5, 0x4, 0x3, 0x2, 0x19, 0x3, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x1b, 0x7, 0x4, 0x2, 0x2, 0x1b, 0x1c, 0x7, 0x3, 0x2, 0x2, 0x1c, 0x1d, 
    0x7, 0x6, 0x2, 0x2, 0x1d, 0x1e, 0x7, 0x7, 0x2, 0x2, 0x1e, 0x22, 0x7, 
    0x9, 0x2, 0x2, 0x1f, 0x21, 0x5, 0x6, 0x4, 0x2, 0x20, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x21, 0x24, 0x3, 0x2, 0x2, 0x2, 0x22, 0x20, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x23, 0x3, 0x2, 0x2, 0x2, 0x23, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0x22, 0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x7, 0xa, 0x2, 0x2, 0x26, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x27, 0x2d, 0x5, 0x8, 0x5, 0x2, 0x28, 0x29, 
    0x5, 0x10, 0x9, 0x2, 0x29, 0x2a, 0x7, 0x8, 0x2, 0x2, 0x2a, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0x2b, 0x2d, 0x5, 0x16, 0xc, 0x2, 0x2c, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x2c, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2b, 0x3, 0x2, 0x2, 
    0x2, 0x2d, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x32, 0x5, 0xa, 0x6, 0x2, 
    0x2f, 0x31, 0x5, 0xc, 0x7, 0x2, 0x30, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x31, 
    0x34, 0x3, 0x2, 0x2, 0x2, 0x32, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0x33, 0x35, 0x3, 0x2, 0x2, 0x2, 0x34, 0x32, 0x3, 
    0x2, 0x2, 0x2, 0x35, 0x36, 0x5, 0xe, 0x8, 0x2, 0x36, 0x37, 0x7, 0x8, 
    0x2, 0x2, 0x37, 0x9, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3b, 0x7, 0x4, 0x2, 
    0x2, 0x39, 0x3b, 0x7, 0x5, 0x2, 0x2, 0x3a, 0x38, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3b, 0xb, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x3d, 0x5, 0x12, 0xa, 0x2, 0x3d, 0x3e, 0x7, 0x1c, 0x2, 0x2, 0x3e, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x5, 0x10, 0x9, 0x2, 0x40, 0x41, 0x7, 
    0x1c, 0x2, 0x2, 0x41, 0x43, 0x3, 0x2, 0x2, 0x2, 0x42, 0x3c, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x43, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x44, 0x47, 0x5, 0x12, 0xa, 0x2, 0x45, 0x47, 0x5, 0x10, 0x9, 0x2, 
    0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 0x45, 0x3, 0x2, 0x2, 0x2, 0x47, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x5, 0x12, 0xa, 0x2, 0x49, 0x4a, 
    0x7, 0xd, 0x2, 0x2, 0x4a, 0x4b, 0x5, 0x14, 0xb, 0x2, 0x4b, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0x4c, 0x53, 0x7, 0x1a, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0x1a, 
    0x2, 0x2, 0x4e, 0x4f, 0x7, 0xb, 0x2, 0x2, 0x4f, 0x50, 0x5, 0x14, 0xb, 
    0x2, 0x50, 0x51, 0x7, 0xc, 0x2, 0x2, 0x51, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x52, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x53, 
    0x13, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x8, 0xb, 0x1, 0x2, 0x55, 0x56, 
    0x7, 0x6, 0x2, 0x2, 0x56, 0x57, 0x5, 0x14, 0xb, 0x2, 0x57, 0x58, 0x7, 
    0x7, 0x2, 0x2, 0x58, 0x66, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x7, 0xf, 
    0x2, 0x2, 0x5a, 0x66, 0x5, 0x14, 0xb, 0xd, 0x5b, 0x5c, 0x7, 0x14, 0x2, 
    0x2, 0x5c, 0x66, 0x5, 0x14, 0xb, 0xc, 0x5d, 0x5e, 0x7, 0x1a, 0x2, 0x2, 
    0x5e, 0x5f, 0x7, 0xb, 0x2, 0x2, 0x5f, 0x60, 0x5, 0x14, 0xb, 0x2, 0x60, 
    0x61, 0x7, 0xc, 0x2, 0x2, 0x61, 0x66, 0x3, 0x2, 0x2, 0x2, 0x62, 0x66, 
    0x7, 0x1a, 0x2, 0x2, 0x63, 0x66, 0x7, 0x1b, 0x2, 0x2, 0x64, 0x66, 0x7, 
    0x19, 0x2, 0x2, 0x65, 0x54, 0x3, 0x2, 0x2, 0x2, 0x65, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x65, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x65, 0x5d, 0x3, 0x2, 0x2, 
    0x2, 0x65, 0x62, 0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x65, 0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x78, 0x3, 0x2, 0x2, 0x2, 0x67, 
    0x68, 0xc, 0xb, 0x2, 0x2, 0x68, 0x69, 0x9, 0x2, 0x2, 0x2, 0x69, 0x77, 
    0x5, 0x14, 0xb, 0xc, 0x6a, 0x6b, 0xc, 0xa, 0x2, 0x2, 0x6b, 0x6c, 0x9, 
    0x3, 0x2, 0x2, 0x6c, 0x77, 0x5, 0x14, 0xb, 0xb, 0x6d, 0x6e, 0xc, 0x9, 
    0x2, 0x2, 0x6e, 0x6f, 0x7, 0x15, 0x2, 0x2, 0x6f, 0x77, 0x5, 0x14, 0xb, 
    0xa, 0x70, 0x71, 0xc, 0x8, 0x2, 0x2, 0x71, 0x72, 0x7, 0x17, 0x2, 0x2, 
    0x72, 0x77, 0x5, 0x14, 0xb, 0x9, 0x73, 0x74, 0xc, 0x7, 0x2, 0x2, 0x74, 
    0x75, 0x7, 0x16, 0x2, 0x2, 0x75, 0x77, 0x5, 0x14, 0xb, 0x8, 0x76, 0x67, 
    0x3, 0x2, 0x2, 0x2, 0x76, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x76, 0x6d, 0x3, 
    0x2, 0x2, 0x2, 0x76, 0x70, 0x3, 0x2, 0x2, 0x2, 0x76, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x77, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x78, 0x76, 0x3, 0x2, 0x2, 
    0x2, 0x78, 0x79, 0x3, 0x2, 0x2, 0x2, 0x79, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x7a, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0x18, 0x2, 0x2, 0x7c, 
    0x7d, 0x5, 0x14, 0xb, 0x2, 0x7d, 0x7e, 0x7, 0x8, 0x2, 0x2, 0x7e, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x22, 0x2c, 0x32, 0x3a, 0x42, 0x46, 0x52, 0x65, 
    0x76, 0x78, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ifccParser::Initializer ifccParser::_init;
