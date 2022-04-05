
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

std::vector<ifccParser::ProgContext *> ifccParser::AxiomContext::prog() {
  return getRuleContexts<ifccParser::ProgContext>();
}

ifccParser::ProgContext* ifccParser::AxiomContext::prog(size_t i) {
  return getRuleContext<ifccParser::ProgContext>(i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(33);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ifccParser::INT) {
      setState(30);
      prog();
      setState(35);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
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

std::vector<tree::TerminalNode *> ifccParser::ProgContext::INT() {
  return getTokens(ifccParser::INT);
}

tree::TerminalNode* ifccParser::ProgContext::INT(size_t i) {
  return getToken(ifccParser::INT, i);
}

std::vector<tree::TerminalNode *> ifccParser::ProgContext::VAR() {
  return getTokens(ifccParser::VAR);
}

tree::TerminalNode* ifccParser::ProgContext::VAR(size_t i) {
  return getToken(ifccParser::VAR, i);
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

std::vector<tree::TerminalNode *> ifccParser::ProgContext::COMMA() {
  return getTokens(ifccParser::COMMA);
}

tree::TerminalNode* ifccParser::ProgContext::COMMA(size_t i) {
  return getToken(ifccParser::COMMA, i);
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
    setState(70);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(36);
      match(ifccParser::INT);
      setState(37);
      match(ifccParser::VAR);
      setState(38);
      match(ifccParser::OPENPAR);
      setState(39);
      match(ifccParser::CLOSEPAR);
      setState(40);
      match(ifccParser::OPENBRACKET);
      setState(44);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ifccParser::INT)
        | (1ULL << ifccParser::CHAR)
        | (1ULL << ifccParser::IF)
        | (1ULL << ifccParser::RETURN)
        | (1ULL << ifccParser::VAR))) != 0)) {
        setState(41);
        instr();
        setState(46);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(47);
      match(ifccParser::CLOSEBRACKET);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(48);
      match(ifccParser::INT);
      setState(49);
      match(ifccParser::VAR);
      setState(50);
      match(ifccParser::OPENPAR);
      setState(51);
      match(ifccParser::INT);
      setState(52);
      match(ifccParser::VAR);
      setState(58);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == ifccParser::COMMA) {
        setState(53);
        match(ifccParser::COMMA);
        setState(54);
        match(ifccParser::INT);
        setState(55);
        match(ifccParser::VAR);
        setState(60);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(61);
      match(ifccParser::CLOSEPAR);
      setState(62);
      match(ifccParser::OPENBRACKET);
      setState(66);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ifccParser::INT)
        | (1ULL << ifccParser::CHAR)
        | (1ULL << ifccParser::IF)
        | (1ULL << ifccParser::RETURN)
        | (1ULL << ifccParser::VAR))) != 0)) {
        setState(63);
        instr();
        setState(68);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(69);
      match(ifccParser::CLOSEBRACKET);
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
//----------------- If_then_elseInstrContext ------------------------------------------------------------------

ifccParser::If_then_elseContext* ifccParser::If_then_elseInstrContext::if_then_else() {
  return getRuleContext<ifccParser::If_then_elseContext>(0);
}

ifccParser::If_then_elseInstrContext::If_then_elseInstrContext(InstrContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::If_then_elseInstrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitIf_then_elseInstr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionCallInstrContext ------------------------------------------------------------------

ifccParser::FunctionCallContext* ifccParser::FunctionCallInstrContext::functionCall() {
  return getRuleContext<ifccParser::FunctionCallContext>(0);
}

ifccParser::FunctionCallInstrContext::FunctionCallInstrContext(InstrContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::FunctionCallInstrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitFunctionCallInstr(this);
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
    setState(79);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ifccParser::DeclarationInstrContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(72);
      declaration();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ifccParser::FunctionCallInstrContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(73);
      functionCall();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ifccParser::If_then_elseInstrContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(74);
      if_then_else();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ifccParser::AffectationInstrContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(75);
      affectation();
      setState(76);
      match(ifccParser::SEMICOLON);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ifccParser::Return_stmtInstrContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(78);
      return_stmt();
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
    setState(81);
    type();
    setState(85);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(82);
        variables(); 
      }
      setState(87);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
    setState(88);
    enddeclaration();
    setState(89);
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
    setState(93);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::INT: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<ifccParser::IntContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(91);
        match(ifccParser::INT);
        break;
      }

      case ifccParser::CHAR: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<ifccParser::CharContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(92);
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

//----------------- FunctionCallContext ------------------------------------------------------------------

ifccParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::FunctionCallContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

tree::TerminalNode* ifccParser::FunctionCallContext::OPENPAR() {
  return getToken(ifccParser::OPENPAR, 0);
}

std::vector<ifccParser::ExpressionContext *> ifccParser::FunctionCallContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::FunctionCallContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

tree::TerminalNode* ifccParser::FunctionCallContext::CLOSEPAR() {
  return getToken(ifccParser::CLOSEPAR, 0);
}

tree::TerminalNode* ifccParser::FunctionCallContext::SEMICOLON() {
  return getToken(ifccParser::SEMICOLON, 0);
}

std::vector<tree::TerminalNode *> ifccParser::FunctionCallContext::COMMA() {
  return getTokens(ifccParser::COMMA);
}

tree::TerminalNode* ifccParser::FunctionCallContext::COMMA(size_t i) {
  return getToken(ifccParser::COMMA, i);
}


size_t ifccParser::FunctionCallContext::getRuleIndex() const {
  return ifccParser::RuleFunctionCall;
}

antlrcpp::Any ifccParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::FunctionCallContext* ifccParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 10, ifccParser::RuleFunctionCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(95);
    match(ifccParser::VAR);
    setState(96);
    match(ifccParser::OPENPAR);
    setState(102);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(97);
        expression(0);
        setState(98);
        match(ifccParser::COMMA); 
      }
      setState(104);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
    setState(105);
    expression(0);
    setState(106);
    match(ifccParser::CLOSEPAR);
    setState(107);
    match(ifccParser::SEMICOLON);
   
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
  enterRule(_localctx, 12, ifccParser::RuleVariables);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(115);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<VariablesContext *>(_tracker.createInstance<ifccParser::VarsimpledeclContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(109);
      lvalue();
      setState(110);
      match(ifccParser::COMMA);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<VariablesContext *>(_tracker.createInstance<ifccParser::VaraffectdeclContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(112);
      affectation();
      setState(113);
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
  enterRule(_localctx, 14, ifccParser::RuleEnddeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(119);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<EnddeclarationContext *>(_tracker.createInstance<ifccParser::EnddeclvarContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(117);
      lvalue();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<EnddeclarationContext *>(_tracker.createInstance<ifccParser::EnddeclaffectContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(118);
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
  enterRule(_localctx, 16, ifccParser::RuleAffectation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    lvalue();
    setState(122);
    match(ifccParser::EQUAL);
    setState(123);
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
  enterRule(_localctx, 18, ifccParser::RuleLvalue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(131);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<LvalueContext *>(_tracker.createInstance<ifccParser::LvalVarContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(125);
      match(ifccParser::VAR);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<LvalueContext *>(_tracker.createInstance<ifccParser::LvaltableauContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(126);
      match(ifccParser::VAR);
      setState(127);
      match(ifccParser::OPENSQBRACKETS);
      setState(128);
      expression(0);
      setState(129);
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
//----------------- ExprAffectationContext ------------------------------------------------------------------

ifccParser::AffectationContext* ifccParser::ExprAffectationContext::affectation() {
  return getRuleContext<ifccParser::AffectationContext>(0);
}

ifccParser::ExprAffectationContext::ExprAffectationContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::ExprAffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitExprAffectation(this);
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
//----------------- InequalityContext ------------------------------------------------------------------

std::vector<ifccParser::ExpressionContext *> ifccParser::InequalityContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::InequalityContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

tree::TerminalNode* ifccParser::InequalityContext::GREATER() {
  return getToken(ifccParser::GREATER, 0);
}

tree::TerminalNode* ifccParser::InequalityContext::SMALLER() {
  return getToken(ifccParser::SMALLER, 0);
}

ifccParser::InequalityContext::InequalityContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::InequalityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitInequality(this);
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
//----------------- FuncCallContext ------------------------------------------------------------------

tree::TerminalNode* ifccParser::FuncCallContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

tree::TerminalNode* ifccParser::FuncCallContext::OPENPAR() {
  return getToken(ifccParser::OPENPAR, 0);
}

std::vector<ifccParser::ExpressionContext *> ifccParser::FuncCallContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::FuncCallContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

tree::TerminalNode* ifccParser::FuncCallContext::CLOSEPAR() {
  return getToken(ifccParser::CLOSEPAR, 0);
}

std::vector<tree::TerminalNode *> ifccParser::FuncCallContext::COMMA() {
  return getTokens(ifccParser::COMMA);
}

tree::TerminalNode* ifccParser::FuncCallContext::COMMA(size_t i) {
  return getToken(ifccParser::COMMA, i);
}

ifccParser::FuncCallContext::FuncCallContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::FuncCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitFuncCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualityContext ------------------------------------------------------------------

std::vector<ifccParser::ExpressionContext *> ifccParser::EqualityContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::EqualityContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

tree::TerminalNode* ifccParser::EqualityContext::ISEQUAL() {
  return getToken(ifccParser::ISEQUAL, 0);
}

tree::TerminalNode* ifccParser::EqualityContext::ISDIFFERENT() {
  return getToken(ifccParser::ISDIFFERENT, 0);
}

ifccParser::EqualityContext::EqualityContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::EqualityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitEquality(this);
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
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, ifccParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(164);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(134);
      match(ifccParser::OPENPAR);
      setState(135);
      expression(0);
      setState(136);
      match(ifccParser::CLOSEPAR);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<OpposeContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(138);
      match(ifccParser::MINUS);
      setState(139);
      expression(15);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NegationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(140);
      match(ifccParser::EXCLA);
      setState(141);
      expression(14);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<FuncCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(142);
      match(ifccParser::VAR);
      setState(143);
      match(ifccParser::OPENPAR);
      setState(149);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(144);
          expression(0);
          setState(145);
          match(ifccParser::COMMA); 
        }
        setState(151);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
      }
      setState(152);
      expression(0);
      setState(153);
      match(ifccParser::CLOSEPAR);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ValTableauContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(155);
      match(ifccParser::VAR);
      setState(156);
      match(ifccParser::OPENSQBRACKETS);
      setState(157);
      expression(0);
      setState(158);
      match(ifccParser::CLOSESQBRACKETS);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ExprAffectationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(160);
      affectation();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<VarContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(161);
      match(ifccParser::VAR);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<CharacterContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(162);
      match(ifccParser::CHARACTER);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<ConstContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(163);
      match(ifccParser::CONST);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(189);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(187);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultdivContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(166);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(167);
          _la = _input->LA(1);
          if (!(_la == ifccParser::MULTIPLY

          || _la == ifccParser::DIVIDE)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(168);
          expression(14);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<PlusminusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(169);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(170);
          _la = _input->LA(1);
          if (!(_la == ifccParser::PLUS

          || _la == ifccParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(171);
          expression(13);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AndlogiqContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(172);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(173);
          match(ifccParser::AND);
          setState(174);
          expression(11);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<XorlogiqContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(175);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(176);
          match(ifccParser::XOR);
          setState(177);
          expression(10);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<OrlogiqContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(178);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(179);
          match(ifccParser::OR);
          setState(180);
          expression(9);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<InequalityContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(181);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(182);
          _la = _input->LA(1);
          if (!(_la == ifccParser::GREATER

          || _la == ifccParser::SMALLER)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(183);
          expression(8);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<EqualityContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(184);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(185);
          _la = _input->LA(1);
          if (!(_la == ifccParser::ISEQUAL

          || _la == ifccParser::ISDIFFERENT)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(186);
          expression(7);
          break;
        }

        } 
      }
      setState(191);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- If_then_elseContext ------------------------------------------------------------------

ifccParser::If_then_elseContext::If_then_elseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::If_then_elseContext::IF() {
  return getToken(ifccParser::IF, 0);
}

tree::TerminalNode* ifccParser::If_then_elseContext::OPENPAR() {
  return getToken(ifccParser::OPENPAR, 0);
}

ifccParser::ExpressionContext* ifccParser::If_then_elseContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
}

tree::TerminalNode* ifccParser::If_then_elseContext::CLOSEPAR() {
  return getToken(ifccParser::CLOSEPAR, 0);
}

std::vector<tree::TerminalNode *> ifccParser::If_then_elseContext::OPENBRACKET() {
  return getTokens(ifccParser::OPENBRACKET);
}

tree::TerminalNode* ifccParser::If_then_elseContext::OPENBRACKET(size_t i) {
  return getToken(ifccParser::OPENBRACKET, i);
}

std::vector<tree::TerminalNode *> ifccParser::If_then_elseContext::CLOSEBRACKET() {
  return getTokens(ifccParser::CLOSEBRACKET);
}

tree::TerminalNode* ifccParser::If_then_elseContext::CLOSEBRACKET(size_t i) {
  return getToken(ifccParser::CLOSEBRACKET, i);
}

tree::TerminalNode* ifccParser::If_then_elseContext::ELSE() {
  return getToken(ifccParser::ELSE, 0);
}

std::vector<ifccParser::BlockContext *> ifccParser::If_then_elseContext::block() {
  return getRuleContexts<ifccParser::BlockContext>();
}

ifccParser::BlockContext* ifccParser::If_then_elseContext::block(size_t i) {
  return getRuleContext<ifccParser::BlockContext>(i);
}


size_t ifccParser::If_then_elseContext::getRuleIndex() const {
  return ifccParser::RuleIf_then_else;
}

antlrcpp::Any ifccParser::If_then_elseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitIf_then_else(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::If_then_elseContext* ifccParser::if_then_else() {
  If_then_elseContext *_localctx = _tracker.createInstance<If_then_elseContext>(_ctx, getState());
  enterRule(_localctx, 22, ifccParser::RuleIf_then_else);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    match(ifccParser::IF);
    setState(193);
    match(ifccParser::OPENPAR);
    setState(194);
    expression(0);
    setState(195);
    match(ifccParser::CLOSEPAR);
    setState(196);
    match(ifccParser::OPENBRACKET);
    setState(197);
    dynamic_cast<If_then_elseContext *>(_localctx)->blockthen = block();
    setState(198);
    match(ifccParser::CLOSEBRACKET);
    setState(199);
    match(ifccParser::ELSE);
    setState(200);
    match(ifccParser::OPENBRACKET);
    setState(201);
    dynamic_cast<If_then_elseContext *>(_localctx)->blockelse = block();
    setState(202);
    match(ifccParser::CLOSEBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileloopContext ------------------------------------------------------------------

ifccParser::WhileloopContext::WhileloopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::WhileloopContext::WHILE() {
  return getToken(ifccParser::WHILE, 0);
}

tree::TerminalNode* ifccParser::WhileloopContext::OPENPAR() {
  return getToken(ifccParser::OPENPAR, 0);
}

ifccParser::ExpressionContext* ifccParser::WhileloopContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
}

tree::TerminalNode* ifccParser::WhileloopContext::CLOSEPAR() {
  return getToken(ifccParser::CLOSEPAR, 0);
}

tree::TerminalNode* ifccParser::WhileloopContext::OPENBRACKET() {
  return getToken(ifccParser::OPENBRACKET, 0);
}

tree::TerminalNode* ifccParser::WhileloopContext::CLOSEBRACKET() {
  return getToken(ifccParser::CLOSEBRACKET, 0);
}

ifccParser::BlockContext* ifccParser::WhileloopContext::block() {
  return getRuleContext<ifccParser::BlockContext>(0);
}


size_t ifccParser::WhileloopContext::getRuleIndex() const {
  return ifccParser::RuleWhileloop;
}

antlrcpp::Any ifccParser::WhileloopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitWhileloop(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::WhileloopContext* ifccParser::whileloop() {
  WhileloopContext *_localctx = _tracker.createInstance<WhileloopContext>(_ctx, getState());
  enterRule(_localctx, 24, ifccParser::RuleWhileloop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(ifccParser::WHILE);
    setState(205);
    match(ifccParser::OPENPAR);
    setState(206);
    expression(0);
    setState(207);
    match(ifccParser::CLOSEPAR);
    setState(208);
    match(ifccParser::OPENBRACKET);
    setState(209);
    dynamic_cast<WhileloopContext *>(_localctx)->blockwhile = block();
    setState(210);
    match(ifccParser::CLOSEBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

ifccParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ifccParser::InstrContext *> ifccParser::BlockContext::instr() {
  return getRuleContexts<ifccParser::InstrContext>();
}

ifccParser::InstrContext* ifccParser::BlockContext::instr(size_t i) {
  return getRuleContext<ifccParser::InstrContext>(i);
}


size_t ifccParser::BlockContext::getRuleIndex() const {
  return ifccParser::RuleBlock;
}

antlrcpp::Any ifccParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::BlockContext* ifccParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 26, ifccParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(215);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ifccParser::INT)
      | (1ULL << ifccParser::CHAR)
      | (1ULL << ifccParser::IF)
      | (1ULL << ifccParser::RETURN)
      | (1ULL << ifccParser::VAR))) != 0)) {
      setState(212);
      instr();
      setState(217);
      _errHandler->sync(this);
      _la = _input->LA(1);
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
  enterRule(_localctx, 28, ifccParser::RuleReturn_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
    match(ifccParser::RETURN);
    setState(219);
    expression(0);
    setState(220);
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
    case 10: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ifccParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 13);
    case 1: return precpred(_ctx, 12);
    case 2: return precpred(_ctx, 10);
    case 3: return precpred(_ctx, 9);
    case 4: return precpred(_ctx, 8);
    case 5: return precpred(_ctx, 7);
    case 6: return precpred(_ctx, 6);

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
  "axiom", "prog", "instr", "declaration", "type", "functionCall", "variables", 
  "enddeclaration", "affectation", "lvalue", "expression", "if_then_else", 
  "whileloop", "block", "return_stmt"
};

std::vector<std::string> ifccParser::_literalNames = {
  "", "'int'", "'char'", "'('", "')'", "';'", "'{'", "'}'", "'['", "']'", 
  "'=='", "'!='", "'='", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'if'", 
  "'else'", "'while'", "", "", "'!'", "'&'", "'|'", "'^'", "'return'", "", 
  "", "", "','"
};

std::vector<std::string> ifccParser::_symbolicNames = {
  "", "INT", "CHAR", "OPENPAR", "CLOSEPAR", "SEMICOLON", "OPENBRACKET", 
  "CLOSEBRACKET", "OPENSQBRACKETS", "CLOSESQBRACKETS", "ISEQUAL", "ISDIFFERENT", 
  "EQUAL", "GREATER", "SMALLER", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", 
  "IF", "ELSE", "WHILE", "OPM", "OPA", "EXCLA", "AND", "OR", "XOR", "RETURN", 
  "CONST", "VAR", "CHARACTER", "COMMA", "COMMENT", "DIRECTIVE", "WS"
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
    0x3, 0x25, 0xe1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x3, 0x2, 0x7, 0x2, 0x22, 0xa, 
    0x2, 0xc, 0x2, 0xe, 0x2, 0x25, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x2d, 0xa, 0x3, 0xc, 0x3, 0xe, 
    0x3, 0x30, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x3b, 0xa, 0x3, 0xc, 
    0x3, 0xe, 0x3, 0x3e, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 
    0x43, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x46, 0xb, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0x49, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x5, 0x4, 0x52, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 
    0x56, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x59, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x60, 0xa, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x67, 0xa, 0x7, 0xc, 0x7, 
    0xe, 0x7, 0x6a, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x76, 
    0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x7a, 0xa, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x5, 0xb, 0x86, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x96, 0xa, 0xc, 0xc, 
    0xc, 0xe, 0xc, 0x99, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x5, 0xc, 0xa7, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0xbe, 0xa, 0xc, 0xc, 0xc, 
    0xe, 0xc, 0xc1, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xf, 0x7, 0xf, 0xd8, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 
    0xdb, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x2, 0x3, 0x16, 0x11, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x2, 0x6, 0x3, 0x2, 0x13, 0x14, 
    0x3, 0x2, 0x11, 0x12, 0x3, 0x2, 0xf, 0x10, 0x3, 0x2, 0xc, 0xd, 0x2, 
    0xf1, 0x2, 0x23, 0x3, 0x2, 0x2, 0x2, 0x4, 0x48, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x51, 0x3, 0x2, 0x2, 0x2, 0x8, 0x53, 0x3, 0x2, 0x2, 0x2, 0xa, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x61, 0x3, 0x2, 0x2, 0x2, 0xe, 0x75, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x79, 0x3, 0x2, 0x2, 0x2, 0x12, 0x7b, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x85, 0x3, 0x2, 0x2, 0x2, 0x16, 0xa6, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0xc2, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xce, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0xd9, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xdc, 0x3, 0x2, 0x2, 0x2, 0x20, 0x22, 
    0x5, 0x4, 0x3, 0x2, 0x21, 0x20, 0x3, 0x2, 0x2, 0x2, 0x22, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0x23, 0x21, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x3, 0x2, 
    0x2, 0x2, 0x24, 0x3, 0x3, 0x2, 0x2, 0x2, 0x25, 0x23, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x27, 0x7, 0x3, 0x2, 0x2, 0x27, 0x28, 0x7, 0x20, 0x2, 0x2, 
    0x28, 0x29, 0x7, 0x5, 0x2, 0x2, 0x29, 0x2a, 0x7, 0x6, 0x2, 0x2, 0x2a, 
    0x2e, 0x7, 0x8, 0x2, 0x2, 0x2b, 0x2d, 0x5, 0x6, 0x4, 0x2, 0x2c, 0x2b, 
    0x3, 0x2, 0x2, 0x2, 0x2d, 0x30, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2c, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x31, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x31, 0x49, 0x7, 0x9, 0x2, 
    0x2, 0x32, 0x33, 0x7, 0x3, 0x2, 0x2, 0x33, 0x34, 0x7, 0x20, 0x2, 0x2, 
    0x34, 0x35, 0x7, 0x5, 0x2, 0x2, 0x35, 0x36, 0x7, 0x3, 0x2, 0x2, 0x36, 
    0x3c, 0x7, 0x20, 0x2, 0x2, 0x37, 0x38, 0x7, 0x22, 0x2, 0x2, 0x38, 0x39, 
    0x7, 0x3, 0x2, 0x2, 0x39, 0x3b, 0x7, 0x20, 0x2, 0x2, 0x3a, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x3b, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3a, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3f, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x7, 0x6, 0x2, 0x2, 
    0x40, 0x44, 0x7, 0x8, 0x2, 0x2, 0x41, 0x43, 0x5, 0x6, 0x4, 0x2, 0x42, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x46, 0x3, 0x2, 0x2, 0x2, 0x44, 0x42, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x47, 0x49, 0x7, 0x9, 
    0x2, 0x2, 0x48, 0x26, 0x3, 0x2, 0x2, 0x2, 0x48, 0x32, 0x3, 0x2, 0x2, 
    0x2, 0x49, 0x5, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x52, 0x5, 0x8, 0x5, 0x2, 
    0x4b, 0x52, 0x5, 0xc, 0x7, 0x2, 0x4c, 0x52, 0x5, 0x18, 0xd, 0x2, 0x4d, 
    0x4e, 0x5, 0x12, 0xa, 0x2, 0x4e, 0x4f, 0x7, 0x7, 0x2, 0x2, 0x4f, 0x52, 
    0x3, 0x2, 0x2, 0x2, 0x50, 0x52, 0x5, 0x1e, 0x10, 0x2, 0x51, 0x4a, 0x3, 
    0x2, 0x2, 0x2, 0x51, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4c, 0x3, 0x2, 
    0x2, 0x2, 0x51, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x51, 0x50, 0x3, 0x2, 0x2, 
    0x2, 0x52, 0x7, 0x3, 0x2, 0x2, 0x2, 0x53, 0x57, 0x5, 0xa, 0x6, 0x2, 
    0x54, 0x56, 0x5, 0xe, 0x8, 0x2, 0x55, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0x57, 0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 
    0x3, 0x2, 0x2, 0x2, 0x58, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x59, 0x57, 0x3, 
    0x2, 0x2, 0x2, 0x5a, 0x5b, 0x5, 0x10, 0x9, 0x2, 0x5b, 0x5c, 0x7, 0x7, 
    0x2, 0x2, 0x5c, 0x9, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x60, 0x7, 0x3, 0x2, 
    0x2, 0x5e, 0x60, 0x7, 0x4, 0x2, 0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x5f, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 0xb, 0x3, 0x2, 0x2, 0x2, 0x61, 
    0x62, 0x7, 0x20, 0x2, 0x2, 0x62, 0x68, 0x7, 0x5, 0x2, 0x2, 0x63, 0x64, 
    0x5, 0x16, 0xc, 0x2, 0x64, 0x65, 0x7, 0x22, 0x2, 0x2, 0x65, 0x67, 0x3, 
    0x2, 0x2, 0x2, 0x66, 0x63, 0x3, 0x2, 0x2, 0x2, 0x67, 0x6a, 0x3, 0x2, 
    0x2, 0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 
    0x2, 0x69, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x68, 0x3, 0x2, 0x2, 0x2, 
    0x6b, 0x6c, 0x5, 0x16, 0xc, 0x2, 0x6c, 0x6d, 0x7, 0x6, 0x2, 0x2, 0x6d, 
    0x6e, 0x7, 0x7, 0x2, 0x2, 0x6e, 0xd, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 
    0x5, 0x14, 0xb, 0x2, 0x70, 0x71, 0x7, 0x22, 0x2, 0x2, 0x71, 0x76, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x73, 0x5, 0x12, 0xa, 0x2, 0x73, 0x74, 0x7, 0x22, 
    0x2, 0x2, 0x74, 0x76, 0x3, 0x2, 0x2, 0x2, 0x75, 0x6f, 0x3, 0x2, 0x2, 
    0x2, 0x75, 0x72, 0x3, 0x2, 0x2, 0x2, 0x76, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x77, 0x7a, 0x5, 0x14, 0xb, 0x2, 0x78, 0x7a, 0x5, 0x12, 0xa, 0x2, 0x79, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x5, 0x14, 0xb, 0x2, 0x7c, 0x7d, 0x7, 
    0xe, 0x2, 0x2, 0x7d, 0x7e, 0x5, 0x16, 0xc, 0x2, 0x7e, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x7f, 0x86, 0x7, 0x20, 0x2, 0x2, 0x80, 0x81, 0x7, 0x20, 0x2, 
    0x2, 0x81, 0x82, 0x7, 0xa, 0x2, 0x2, 0x82, 0x83, 0x5, 0x16, 0xc, 0x2, 
    0x83, 0x84, 0x7, 0xb, 0x2, 0x2, 0x84, 0x86, 0x3, 0x2, 0x2, 0x2, 0x85, 
    0x7f, 0x3, 0x2, 0x2, 0x2, 0x85, 0x80, 0x3, 0x2, 0x2, 0x2, 0x86, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x8, 0xc, 0x1, 0x2, 0x88, 0x89, 0x7, 
    0x5, 0x2, 0x2, 0x89, 0x8a, 0x5, 0x16, 0xc, 0x2, 0x8a, 0x8b, 0x7, 0x6, 
    0x2, 0x2, 0x8b, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0x12, 0x2, 
    0x2, 0x8d, 0xa7, 0x5, 0x16, 0xc, 0x11, 0x8e, 0x8f, 0x7, 0x1a, 0x2, 0x2, 
    0x8f, 0xa7, 0x5, 0x16, 0xc, 0x10, 0x90, 0x91, 0x7, 0x20, 0x2, 0x2, 0x91, 
    0x97, 0x7, 0x5, 0x2, 0x2, 0x92, 0x93, 0x5, 0x16, 0xc, 0x2, 0x93, 0x94, 
    0x7, 0x22, 0x2, 0x2, 0x94, 0x96, 0x3, 0x2, 0x2, 0x2, 0x95, 0x92, 0x3, 
    0x2, 0x2, 0x2, 0x96, 0x99, 0x3, 0x2, 0x2, 0x2, 0x97, 0x95, 0x3, 0x2, 
    0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 0x2, 0x98, 0x9a, 0x3, 0x2, 0x2, 
    0x2, 0x99, 0x97, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x5, 0x16, 0xc, 0x2, 
    0x9b, 0x9c, 0x7, 0x6, 0x2, 0x2, 0x9c, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x9d, 
    0x9e, 0x7, 0x20, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0xa, 0x2, 0x2, 0x9f, 0xa0, 
    0x5, 0x16, 0xc, 0x2, 0xa0, 0xa1, 0x7, 0xb, 0x2, 0x2, 0xa1, 0xa7, 0x3, 
    0x2, 0x2, 0x2, 0xa2, 0xa7, 0x5, 0x12, 0xa, 0x2, 0xa3, 0xa7, 0x7, 0x20, 
    0x2, 0x2, 0xa4, 0xa7, 0x7, 0x21, 0x2, 0x2, 0xa5, 0xa7, 0x7, 0x1f, 0x2, 
    0x2, 0xa6, 0x87, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x8c, 0x3, 0x2, 0x2, 0x2, 
    0xa6, 0x8e, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x90, 0x3, 0x2, 0x2, 0x2, 0xa6, 
    0x9d, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa3, 
    0x3, 0x2, 0x2, 0x2, 0xa6, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa5, 0x3, 
    0x2, 0x2, 0x2, 0xa7, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0xc, 0xf, 
    0x2, 0x2, 0xa9, 0xaa, 0x9, 0x2, 0x2, 0x2, 0xaa, 0xbe, 0x5, 0x16, 0xc, 
    0x10, 0xab, 0xac, 0xc, 0xe, 0x2, 0x2, 0xac, 0xad, 0x9, 0x3, 0x2, 0x2, 
    0xad, 0xbe, 0x5, 0x16, 0xc, 0xf, 0xae, 0xaf, 0xc, 0xc, 0x2, 0x2, 0xaf, 
    0xb0, 0x7, 0x1b, 0x2, 0x2, 0xb0, 0xbe, 0x5, 0x16, 0xc, 0xd, 0xb1, 0xb2, 
    0xc, 0xb, 0x2, 0x2, 0xb2, 0xb3, 0x7, 0x1d, 0x2, 0x2, 0xb3, 0xbe, 0x5, 
    0x16, 0xc, 0xc, 0xb4, 0xb5, 0xc, 0xa, 0x2, 0x2, 0xb5, 0xb6, 0x7, 0x1c, 
    0x2, 0x2, 0xb6, 0xbe, 0x5, 0x16, 0xc, 0xb, 0xb7, 0xb8, 0xc, 0x9, 0x2, 
    0x2, 0xb8, 0xb9, 0x9, 0x4, 0x2, 0x2, 0xb9, 0xbe, 0x5, 0x16, 0xc, 0xa, 
    0xba, 0xbb, 0xc, 0x8, 0x2, 0x2, 0xbb, 0xbc, 0x9, 0x5, 0x2, 0x2, 0xbc, 
    0xbe, 0x5, 0x16, 0xc, 0x9, 0xbd, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xab, 
    0x3, 0x2, 0x2, 0x2, 0xbd, 0xae, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xb1, 0x3, 
    0x2, 0x2, 0x2, 0xbd, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xb7, 0x3, 0x2, 
    0x2, 0x2, 0xbd, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xc1, 0x3, 0x2, 0x2, 
    0x2, 0xbf, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 
    0xc0, 0x17, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc2, 
    0xc3, 0x7, 0x15, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0x5, 0x2, 0x2, 0xc4, 0xc5, 
    0x5, 0x16, 0xc, 0x2, 0xc5, 0xc6, 0x7, 0x6, 0x2, 0x2, 0xc6, 0xc7, 0x7, 
    0x8, 0x2, 0x2, 0xc7, 0xc8, 0x5, 0x1c, 0xf, 0x2, 0xc8, 0xc9, 0x7, 0x9, 
    0x2, 0x2, 0xc9, 0xca, 0x7, 0x16, 0x2, 0x2, 0xca, 0xcb, 0x7, 0x8, 0x2, 
    0x2, 0xcb, 0xcc, 0x5, 0x1c, 0xf, 0x2, 0xcc, 0xcd, 0x7, 0x9, 0x2, 0x2, 
    0xcd, 0x19, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x17, 0x2, 0x2, 0xcf, 
    0xd0, 0x7, 0x5, 0x2, 0x2, 0xd0, 0xd1, 0x5, 0x16, 0xc, 0x2, 0xd1, 0xd2, 
    0x7, 0x6, 0x2, 0x2, 0xd2, 0xd3, 0x7, 0x8, 0x2, 0x2, 0xd3, 0xd4, 0x5, 
    0x1c, 0xf, 0x2, 0xd4, 0xd5, 0x7, 0x9, 0x2, 0x2, 0xd5, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0xd6, 0xd8, 0x5, 0x6, 0x4, 0x2, 0xd7, 0xd6, 0x3, 0x2, 0x2, 
    0x2, 0xd8, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xd7, 0x3, 0x2, 0x2, 0x2, 
    0xd9, 0xda, 0x3, 0x2, 0x2, 0x2, 0xda, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xdb, 
    0xd9, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x7, 0x1e, 0x2, 0x2, 0xdd, 0xde, 
    0x5, 0x16, 0xc, 0x2, 0xde, 0xdf, 0x7, 0x7, 0x2, 0x2, 0xdf, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0x13, 0x23, 0x2e, 0x3c, 0x44, 0x48, 0x51, 0x57, 0x5f, 
    0x68, 0x75, 0x79, 0x85, 0x97, 0xa6, 0xbd, 0xbf, 0xd9, 
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
