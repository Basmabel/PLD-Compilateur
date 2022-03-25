
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
    setState(18);
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
    setState(20);
    match(ifccParser::INT);
    setState(21);
    match(ifccParser::T__0);
    setState(22);
    match(ifccParser::OPENPAR);
    setState(23);
    match(ifccParser::CLOSEPAR);
    setState(24);
    match(ifccParser::OPENBRACKET);
    setState(28);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ifccParser::INT)
      | (1ULL << ifccParser::RETURN)
      | (1ULL << ifccParser::VAR))) != 0)) {
      setState(25);
      instr();
      setState(30);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(31);
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
    setState(36);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::INT: {
        _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ifccParser::DeclarationInstrContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(33);
        declaration();
        break;
      }

      case ifccParser::VAR: {
        _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ifccParser::AffectationInstrContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(34);
        affectation();
        break;
      }

      case ifccParser::RETURN: {
        _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ifccParser::Return_stmtInstrContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(35);
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

tree::TerminalNode* ifccParser::DeclarationContext::INT() {
  return getToken(ifccParser::INT, 0);
}

tree::TerminalNode* ifccParser::DeclarationContext::VAR() {
  return getToken(ifccParser::VAR, 0);
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
    setState(38);
    match(ifccParser::INT);
    setState(42);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(39);
        variables(); 
      }
      setState(44);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
    setState(45);
    match(ifccParser::VAR);
    setState(46);
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

tree::TerminalNode* ifccParser::VariablesContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

tree::TerminalNode* ifccParser::VariablesContext::COMMA() {
  return getToken(ifccParser::COMMA, 0);
}


size_t ifccParser::VariablesContext::getRuleIndex() const {
  return ifccParser::RuleVariables;
}

antlrcpp::Any ifccParser::VariablesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitVariables(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::VariablesContext* ifccParser::variables() {
  VariablesContext *_localctx = _tracker.createInstance<VariablesContext>(_ctx, getState());
  enterRule(_localctx, 8, ifccParser::RuleVariables);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(48);
    match(ifccParser::VAR);
    setState(49);
    match(ifccParser::COMMA);
   
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

tree::TerminalNode* ifccParser::AffectationContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

tree::TerminalNode* ifccParser::AffectationContext::EQUAL() {
  return getToken(ifccParser::EQUAL, 0);
}

ifccParser::ExpressionContext* ifccParser::AffectationContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
}

tree::TerminalNode* ifccParser::AffectationContext::SEMICOLON() {
  return getToken(ifccParser::SEMICOLON, 0);
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
  enterRule(_localctx, 10, ifccParser::RuleAffectation);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(ifccParser::VAR);
    setState(52);
    match(ifccParser::EQUAL);
    setState(53);
    expression(0);
    setState(54);
    match(ifccParser::SEMICOLON);
   
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

ifccParser::ExpressionContext* ifccParser::OpposeContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
}

tree::TerminalNode* ifccParser::OpposeContext::MINUS() {
  return getToken(ifccParser::MINUS, 0);
}

ifccParser::OpposeContext::OpposeContext(ExpressionContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::OpposeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitOppose(this);
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
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, ifccParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(65);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::OPENPAR: {
        _localctx = _tracker.createInstance<ParContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(57);
        match(ifccParser::OPENPAR);
        setState(58);
        expression(0);
        setState(59);
        match(ifccParser::CLOSEPAR);
        break;
      }

      case ifccParser::VAR: {
        _localctx = _tracker.createInstance<VarContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(61);
        match(ifccParser::VAR);
        break;
      }

      case ifccParser::MINUS: {
        _localctx = _tracker.createInstance<OpposeContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(62);
        match(ifccParser::MINUS);
        setState(63);
        expression(2);
        break;
      }

      case ifccParser::CONST: {
        _localctx = _tracker.createInstance<ConstContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(64);
        match(ifccParser::CONST);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(75);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(73);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultdivContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(67);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(68);
          _la = _input->LA(1);
          if (!(_la == ifccParser::MULTIPLY

          || _la == ifccParser::DIVIDE)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(69);
          expression(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<PlusminusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(70);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(71);
          _la = _input->LA(1);
          if (!(_la == ifccParser::PLUS

          || _la == ifccParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(72);
          expression(5);
          break;
        }

        } 
      }
      setState(77);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
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
  enterRule(_localctx, 14, ifccParser::RuleReturn_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    match(ifccParser::RETURN);
    setState(79);
    expression(0);
    setState(80);
    match(ifccParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

ifccParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::ValueContext::CONST() {
  return getToken(ifccParser::CONST, 0);
}

ifccParser::ExpressionContext* ifccParser::ValueContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
}


size_t ifccParser::ValueContext::getRuleIndex() const {
  return ifccParser::RuleValue;
}

antlrcpp::Any ifccParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ValueContext* ifccParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 16, ifccParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(84);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(82);
      match(ifccParser::CONST);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(83);
      expression(0);
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

bool ifccParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 6: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ifccParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);

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
  "axiom", "prog", "instr", "declaration", "variables", "affectation", "expression", 
  "return_stmt", "value"
};

std::vector<std::string> ifccParser::_literalNames = {
  "", "'main'", "'int'", "'char'", "'('", "')'", "';'", "'{'", "'}'", "'='", 
  "'+'", "'-'", "'*'", "'/'", "", "", "'return'", "", "", "','"
};

std::vector<std::string> ifccParser::_symbolicNames = {
  "", "", "INT", "CHAR", "OPENPAR", "CLOSEPAR", "SEMICOLON", "OPENBRACKET", 
  "CLOSEBRACKET", "EQUAL", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "OPM", 
  "OPA", "RETURN", "CONST", "VAR", "COMMA", "COMMENT", "DIRECTIVE", "WS"
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
    0x3, 0x18, 0x59, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 
    0x3, 0x1d, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x20, 0xb, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x27, 0xa, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x7, 0x5, 0x2b, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x2e, 0xb, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0x44, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x7, 0x8, 0x4c, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x4f, 0xb, 0x8, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x57, 
    0xa, 0xa, 0x3, 0xa, 0x2, 0x3, 0xe, 0xb, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x2, 0x4, 0x3, 0x2, 0xe, 0xf, 0x3, 0x2, 0xc, 0xd, 0x2, 
    0x59, 0x2, 0x14, 0x3, 0x2, 0x2, 0x2, 0x4, 0x16, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x26, 0x3, 0x2, 0x2, 0x2, 0x8, 0x28, 0x3, 0x2, 0x2, 0x2, 0xa, 0x32, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x35, 0x3, 0x2, 0x2, 0x2, 0xe, 0x43, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x50, 0x3, 0x2, 0x2, 0x2, 0x12, 0x56, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x15, 0x5, 0x4, 0x3, 0x2, 0x15, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x17, 0x7, 0x4, 0x2, 0x2, 0x17, 0x18, 0x7, 0x3, 0x2, 0x2, 0x18, 
    0x19, 0x7, 0x6, 0x2, 0x2, 0x19, 0x1a, 0x7, 0x7, 0x2, 0x2, 0x1a, 0x1e, 
    0x7, 0x9, 0x2, 0x2, 0x1b, 0x1d, 0x5, 0x6, 0x4, 0x2, 0x1c, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x1d, 0x20, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1c, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x7, 0xa, 0x2, 0x2, 
    0x22, 0x5, 0x3, 0x2, 0x2, 0x2, 0x23, 0x27, 0x5, 0x8, 0x5, 0x2, 0x24, 
    0x27, 0x5, 0xc, 0x7, 0x2, 0x25, 0x27, 0x5, 0x10, 0x9, 0x2, 0x26, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0x26, 0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0x27, 0x7, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2c, 0x7, 0x4, 
    0x2, 0x2, 0x29, 0x2b, 0x5, 0xa, 0x6, 0x2, 0x2a, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0x2b, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 
    0x2c, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x2c, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x7, 0x14, 0x2, 0x2, 0x30, 0x31, 
    0x7, 0x8, 0x2, 0x2, 0x31, 0x9, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x7, 
    0x14, 0x2, 0x2, 0x33, 0x34, 0x7, 0x15, 0x2, 0x2, 0x34, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x35, 0x36, 0x7, 0x14, 0x2, 0x2, 0x36, 0x37, 0x7, 0xb, 0x2, 
    0x2, 0x37, 0x38, 0x5, 0xe, 0x8, 0x2, 0x38, 0x39, 0x7, 0x8, 0x2, 0x2, 
    0x39, 0xd, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x8, 0x8, 0x1, 0x2, 0x3b, 
    0x3c, 0x7, 0x6, 0x2, 0x2, 0x3c, 0x3d, 0x5, 0xe, 0x8, 0x2, 0x3d, 0x3e, 
    0x7, 0x7, 0x2, 0x2, 0x3e, 0x44, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x44, 0x7, 
    0x14, 0x2, 0x2, 0x40, 0x41, 0x7, 0xd, 0x2, 0x2, 0x41, 0x44, 0x5, 0xe, 
    0x8, 0x4, 0x42, 0x44, 0x7, 0x13, 0x2, 0x2, 0x43, 0x3a, 0x3, 0x2, 0x2, 
    0x2, 0x43, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x43, 0x40, 0x3, 0x2, 0x2, 0x2, 
    0x43, 0x42, 0x3, 0x2, 0x2, 0x2, 0x44, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x45, 
    0x46, 0xc, 0x7, 0x2, 0x2, 0x46, 0x47, 0x9, 0x2, 0x2, 0x2, 0x47, 0x4c, 
    0x5, 0xe, 0x8, 0x8, 0x48, 0x49, 0xc, 0x6, 0x2, 0x2, 0x49, 0x4a, 0x9, 
    0x3, 0x2, 0x2, 0x4a, 0x4c, 0x5, 0xe, 0x8, 0x7, 0x4b, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0x4b, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4f, 0x3, 0x2, 0x2, 
    0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x3, 0x2, 0x2, 0x2, 
    0x4e, 0xf, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x50, 
    0x51, 0x7, 0x12, 0x2, 0x2, 0x51, 0x52, 0x5, 0xe, 0x8, 0x2, 0x52, 0x53, 
    0x7, 0x8, 0x2, 0x2, 0x53, 0x11, 0x3, 0x2, 0x2, 0x2, 0x54, 0x57, 0x7, 
    0x13, 0x2, 0x2, 0x55, 0x57, 0x5, 0xe, 0x8, 0x2, 0x56, 0x54, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x9, 0x1e, 0x26, 0x2c, 0x43, 0x4b, 0x4d, 0x56, 
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
