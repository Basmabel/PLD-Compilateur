
// Generated from ifcc.g4 by ANTLR 4.9.2


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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(26);
    match(ifccParser::INT);
    setState(27);
    match(ifccParser::T__0);
    setState(28);
    match(ifccParser::OPENPAR);
    setState(29);
    match(ifccParser::CLOSEPAR);
    setState(30);
    match(ifccParser::OPENBRACKET);
    setState(34);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ifccParser::INT)
      | (1ULL << ifccParser::IF)
      | (1ULL << ifccParser::RETURN)
      | (1ULL << ifccParser::VAR))) != 0)) {
      setState(31);
      instr();
      setState(36);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(37);
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
ifccParser::InstrContext* ifccParser::instr() {
  InstrContext *_localctx = _tracker.createInstance<InstrContext>(_ctx, getState());
  enterRule(_localctx, 4, ifccParser::RuleInstr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(45);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::INT: {
        _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ifccParser::DeclarationInstrContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(39);
        declaration();
        break;
      }

      case ifccParser::VAR: {
        _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ifccParser::AffectationInstrContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(40);
        affectation();
        setState(41);
        match(ifccParser::SEMICOLON);
        break;
      }

      case ifccParser::RETURN: {
        _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ifccParser::Return_stmtInstrContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(43);
        return_stmt();
        break;
      }

      case ifccParser::IF: {
        _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ifccParser::If_then_elseInstrContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(44);
        if_then_else();
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(47);
    match(ifccParser::INT);
    setState(51);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(48);
        variables(); 
      }
      setState(53);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
    setState(54);
    match(ifccParser::VAR);
    setState(55);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(57);
    match(ifccParser::VAR);
    setState(58);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    match(ifccParser::VAR);
    setState(61);
    match(ifccParser::EQUAL);
    setState(62);
    expression(0);
   
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
//----------------- IsequalContext ------------------------------------------------------------------

std::vector<ifccParser::ExpressionContext *> ifccParser::IsequalContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::IsequalContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

tree::TerminalNode* ifccParser::IsequalContext::ISEQUAL() {
  return getToken(ifccParser::ISEQUAL, 0);
}

ifccParser::IsequalContext::IsequalContext(ExpressionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::IsequalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitIsequal(this);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(73);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::OPENPAR: {
        _localctx = _tracker.createInstance<ParContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(65);
        match(ifccParser::OPENPAR);
        setState(66);
        expression(0);
        setState(67);
        match(ifccParser::CLOSEPAR);
        break;
      }

      case ifccParser::MINUS: {
        _localctx = _tracker.createInstance<OpposeContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(69);
        match(ifccParser::MINUS);
        setState(70);
        expression(6);
        break;
      }

      case ifccParser::VAR: {
        _localctx = _tracker.createInstance<VarContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(71);
        match(ifccParser::VAR);
        break;
      }

      case ifccParser::CONST: {
        _localctx = _tracker.createInstance<ConstContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(72);
        match(ifccParser::CONST);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(86);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(84);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultdivContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(75);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(76);
          _la = _input->LA(1);
          if (!(_la == ifccParser::MULTIPLY

          || _la == ifccParser::DIVIDE)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(77);
          expression(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<PlusminusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(78);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(79);
          _la = _input->LA(1);
          if (!(_la == ifccParser::PLUS

          || _la == ifccParser::MINUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(80);
          expression(5);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<IsequalContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(81);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");

          setState(82);
          match(ifccParser::ISEQUAL);
          setState(83);
          expression(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(88);
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

ifccParser::ConditionContext* ifccParser::If_then_elseContext::condition() {
  return getRuleContext<ifccParser::ConditionContext>(0);
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

std::vector<ifccParser::BlockContext *> ifccParser::If_then_elseContext::block() {
  return getRuleContexts<ifccParser::BlockContext>();
}

ifccParser::BlockContext* ifccParser::If_then_elseContext::block(size_t i) {
  return getRuleContext<ifccParser::BlockContext>(i);
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
  enterRule(_localctx, 14, ifccParser::RuleIf_then_else);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(ifccParser::IF);
    setState(90);
    match(ifccParser::OPENPAR);
    setState(91);
    condition();
    setState(92);
    match(ifccParser::CLOSEPAR);
    setState(93);
    match(ifccParser::OPENBRACKET);
    setState(94);
    block();
    setState(95);
    match(ifccParser::CLOSEBRACKET);
    setState(96);
    match(ifccParser::ELSE);
    setState(97);
    match(ifccParser::OPENBRACKET);
    setState(98);
    block();
    setState(99);
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
  enterRule(_localctx, 16, ifccParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ifccParser::INT)
      | (1ULL << ifccParser::IF)
      | (1ULL << ifccParser::RETURN)
      | (1ULL << ifccParser::VAR))) != 0)) {
      setState(101);
      instr();
      setState(106);
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

//----------------- ConditionContext ------------------------------------------------------------------

ifccParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::ConditionContext::getRuleIndex() const {
  return ifccParser::RuleCondition;
}

void ifccParser::ConditionContext::copyFrom(ConditionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Condition_affectationContext ------------------------------------------------------------------

ifccParser::AffectationContext* ifccParser::Condition_affectationContext::affectation() {
  return getRuleContext<ifccParser::AffectationContext>(0);
}

ifccParser::Condition_affectationContext::Condition_affectationContext(ConditionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::Condition_affectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitCondition_affectation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Condition_expressionContext ------------------------------------------------------------------

ifccParser::ExpressionContext* ifccParser::Condition_expressionContext::expression() {
  return getRuleContext<ifccParser::ExpressionContext>(0);
}

ifccParser::Condition_expressionContext::Condition_expressionContext(ConditionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::Condition_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitCondition_expression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Condition_comparisonContext ------------------------------------------------------------------

ifccParser::ComparisonContext* ifccParser::Condition_comparisonContext::comparison() {
  return getRuleContext<ifccParser::ComparisonContext>(0);
}

ifccParser::Condition_comparisonContext::Condition_comparisonContext(ConditionContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::Condition_comparisonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitCondition_comparison(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::ConditionContext* ifccParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 18, ifccParser::RuleCondition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(110);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ConditionContext *>(_tracker.createInstance<ifccParser::Condition_affectationContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(107);
      affectation();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ConditionContext *>(_tracker.createInstance<ifccParser::Condition_expressionContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(108);
      expression(0);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<ConditionContext *>(_tracker.createInstance<ifccParser::Condition_comparisonContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(109);
      comparison();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonContext ------------------------------------------------------------------

ifccParser::ComparisonContext::ComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::ComparisonContext::getRuleIndex() const {
  return ifccParser::RuleComparison;
}

void ifccParser::ComparisonContext::copyFrom(ComparisonContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Comparison_differentContext ------------------------------------------------------------------

std::vector<ifccParser::ExpressionContext *> ifccParser::Comparison_differentContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::Comparison_differentContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

tree::TerminalNode* ifccParser::Comparison_differentContext::ISDIFFERENT() {
  return getToken(ifccParser::ISDIFFERENT, 0);
}

ifccParser::Comparison_differentContext::Comparison_differentContext(ComparisonContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::Comparison_differentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitComparison_different(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Comparison_equalContext ------------------------------------------------------------------

std::vector<ifccParser::ExpressionContext *> ifccParser::Comparison_equalContext::expression() {
  return getRuleContexts<ifccParser::ExpressionContext>();
}

ifccParser::ExpressionContext* ifccParser::Comparison_equalContext::expression(size_t i) {
  return getRuleContext<ifccParser::ExpressionContext>(i);
}

tree::TerminalNode* ifccParser::Comparison_equalContext::ISEQUAL() {
  return getToken(ifccParser::ISEQUAL, 0);
}

ifccParser::Comparison_equalContext::Comparison_equalContext(ComparisonContext *ctx) { copyFrom(ctx); }


antlrcpp::Any ifccParser::Comparison_equalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitComparison_equal(this);
  else
    return visitor->visitChildren(this);
}
ifccParser::ComparisonContext* ifccParser::comparison() {
  ComparisonContext *_localctx = _tracker.createInstance<ComparisonContext>(_ctx, getState());
  enterRule(_localctx, 20, ifccParser::RuleComparison);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(120);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<ComparisonContext *>(_tracker.createInstance<ifccParser::Comparison_equalContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(112);
      expression(0);
      setState(113);
      match(ifccParser::ISEQUAL);
      setState(114);
      expression(0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<ComparisonContext *>(_tracker.createInstance<ifccParser::Comparison_differentContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(116);
      expression(0);
      setState(117);
      match(ifccParser::ISDIFFERENT);
      setState(118);
      expression(0);
      break;
    }

    default:
      break;
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
  enterRule(_localctx, 22, ifccParser::RuleReturn_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    match(ifccParser::RETURN);
    setState(123);
    expression(0);
    setState(124);
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
    case 2: return precpred(_ctx, 3);

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
  "if_then_else", "block", "condition", "comparison", "return_stmt"
};

std::vector<std::string> ifccParser::_literalNames = {
  "", "'main'", "'int'", "'char'", "'('", "')'", "';'", "'{'", "'}'", "'=='", 
  "'!='", "'>='", "'<='", "'='", "'!'", "'>'", "'<'", "'+'", "'-'", "'*'", 
  "'/'", "'&'", "'|'", "'if'", "'else'", "", "", "'return'", "", "", "','"
};

std::vector<std::string> ifccParser::_symbolicNames = {
  "", "", "INT", "CHAR", "OPENPAR", "CLOSEPAR", "SEMICOLON", "OPENBRACKET", 
  "CLOSEBRACKET", "ISEQUAL", "ISDIFFERENT", "GREATEREQUAL", "SMALLEREQUAL", 
  "EQUAL", "DIFFERENT", "GREATER", "SMALLER", "PLUS", "MINUS", "MULTIPLY", 
  "DIVIDE", "AND", "OR", "IF", "ELSE", "OPM", "OPA", "RETURN", "CONST", 
  "VAR", "COMMA", "COMMENT", "DIRECTIVE", "WS"
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

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x23, 0x81, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x3, 
       0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x7, 0x3, 0x23, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x26, 0xb, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x30, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 
       0x7, 0x5, 0x34, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x37, 0xb, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
       0x4c, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x57, 0xa, 0x8, 
       0xc, 0x8, 0xe, 0x8, 0x5a, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x7, 0xa, 0x69, 0xa, 0xa, 0xc, 
       0xa, 0xe, 0xa, 0x6c, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 
       0xb, 0x71, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x7b, 0xa, 0xc, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x2, 0x3, 0xe, 0xe, 
       0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
       0x2, 0x4, 0x3, 0x2, 0x15, 0x16, 0x3, 0x2, 0x13, 0x14, 0x2, 0x83, 
       0x2, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x6, 
       0x2f, 0x3, 0x2, 0x2, 0x2, 0x8, 0x31, 0x3, 0x2, 0x2, 0x2, 0xa, 0x3b, 
       0x3, 0x2, 0x2, 0x2, 0xc, 0x3e, 0x3, 0x2, 0x2, 0x2, 0xe, 0x4b, 0x3, 
       0x2, 0x2, 0x2, 0x10, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x12, 0x6a, 0x3, 0x2, 
       0x2, 0x2, 0x14, 0x70, 0x3, 0x2, 0x2, 0x2, 0x16, 0x7a, 0x3, 0x2, 0x2, 
       0x2, 0x18, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x5, 0x4, 0x3, 0x2, 
       0x1b, 0x3, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 0x7, 0x4, 0x2, 0x2, 0x1d, 
       0x1e, 0x7, 0x3, 0x2, 0x2, 0x1e, 0x1f, 0x7, 0x6, 0x2, 0x2, 0x1f, 0x20, 
       0x7, 0x7, 0x2, 0x2, 0x20, 0x24, 0x7, 0x9, 0x2, 0x2, 0x21, 0x23, 0x5, 
       0x6, 0x4, 0x2, 0x22, 0x21, 0x3, 0x2, 0x2, 0x2, 0x23, 0x26, 0x3, 0x2, 
       0x2, 0x2, 0x24, 0x22, 0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x3, 0x2, 0x2, 
       0x2, 0x25, 0x27, 0x3, 0x2, 0x2, 0x2, 0x26, 0x24, 0x3, 0x2, 0x2, 0x2, 
       0x27, 0x28, 0x7, 0xa, 0x2, 0x2, 0x28, 0x5, 0x3, 0x2, 0x2, 0x2, 0x29, 
       0x30, 0x5, 0x8, 0x5, 0x2, 0x2a, 0x2b, 0x5, 0xc, 0x7, 0x2, 0x2b, 0x2c, 
       0x7, 0x8, 0x2, 0x2, 0x2c, 0x30, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x30, 0x5, 
       0x18, 0xd, 0x2, 0x2e, 0x30, 0x5, 0x10, 0x9, 0x2, 0x2f, 0x29, 0x3, 
       0x2, 0x2, 0x2, 0x2f, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x2d, 0x3, 0x2, 
       0x2, 0x2, 0x2f, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x30, 0x7, 0x3, 0x2, 0x2, 
       0x2, 0x31, 0x35, 0x7, 0x4, 0x2, 0x2, 0x32, 0x34, 0x5, 0xa, 0x6, 0x2, 
       0x33, 0x32, 0x3, 0x2, 0x2, 0x2, 0x34, 0x37, 0x3, 0x2, 0x2, 0x2, 0x35, 
       0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 0x2, 0x2, 0x2, 0x36, 0x38, 
       0x3, 0x2, 0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x7, 
       0x1f, 0x2, 0x2, 0x39, 0x3a, 0x7, 0x8, 0x2, 0x2, 0x3a, 0x9, 0x3, 0x2, 
       0x2, 0x2, 0x3b, 0x3c, 0x7, 0x1f, 0x2, 0x2, 0x3c, 0x3d, 0x7, 0x20, 
       0x2, 0x2, 0x3d, 0xb, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x7, 0x1f, 0x2, 
       0x2, 0x3f, 0x40, 0x7, 0xf, 0x2, 0x2, 0x40, 0x41, 0x5, 0xe, 0x8, 0x2, 
       0x41, 0xd, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x8, 0x8, 0x1, 0x2, 0x43, 
       0x44, 0x7, 0x6, 0x2, 0x2, 0x44, 0x45, 0x5, 0xe, 0x8, 0x2, 0x45, 0x46, 
       0x7, 0x7, 0x2, 0x2, 0x46, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x7, 
       0x14, 0x2, 0x2, 0x48, 0x4c, 0x5, 0xe, 0x8, 0x8, 0x49, 0x4c, 0x7, 
       0x1f, 0x2, 0x2, 0x4a, 0x4c, 0x7, 0x1e, 0x2, 0x2, 0x4b, 0x42, 0x3, 
       0x2, 0x2, 0x2, 0x4b, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x49, 0x3, 0x2, 
       0x2, 0x2, 0x4b, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x58, 0x3, 0x2, 0x2, 
       0x2, 0x4d, 0x4e, 0xc, 0x7, 0x2, 0x2, 0x4e, 0x4f, 0x9, 0x2, 0x2, 0x2, 
       0x4f, 0x57, 0x5, 0xe, 0x8, 0x8, 0x50, 0x51, 0xc, 0x6, 0x2, 0x2, 0x51, 
       0x52, 0x9, 0x3, 0x2, 0x2, 0x52, 0x57, 0x5, 0xe, 0x8, 0x7, 0x53, 0x54, 
       0xc, 0x5, 0x2, 0x2, 0x54, 0x55, 0x7, 0xb, 0x2, 0x2, 0x55, 0x57, 0x5, 
       0xe, 0x8, 0x6, 0x56, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x56, 0x50, 0x3, 0x2, 
       0x2, 0x2, 0x56, 0x53, 0x3, 0x2, 0x2, 0x2, 0x57, 0x5a, 0x3, 0x2, 0x2, 
       0x2, 0x58, 0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x3, 0x2, 0x2, 0x2, 
       0x59, 0xf, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5b, 
       0x5c, 0x7, 0x19, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x6, 0x2, 0x2, 0x5d, 
       0x5e, 0x5, 0x14, 0xb, 0x2, 0x5e, 0x5f, 0x7, 0x7, 0x2, 0x2, 0x5f, 
       0x60, 0x7, 0x9, 0x2, 0x2, 0x60, 0x61, 0x5, 0x12, 0xa, 0x2, 0x61, 
       0x62, 0x7, 0xa, 0x2, 0x2, 0x62, 0x63, 0x7, 0x1a, 0x2, 0x2, 0x63, 
       0x64, 0x7, 0x9, 0x2, 0x2, 0x64, 0x65, 0x5, 0x12, 0xa, 0x2, 0x65, 
       0x66, 0x7, 0xa, 0x2, 0x2, 0x66, 0x11, 0x3, 0x2, 0x2, 0x2, 0x67, 0x69, 
       0x5, 0x6, 0x4, 0x2, 0x68, 0x67, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6c, 0x3, 
       0x2, 0x2, 0x2, 0x6a, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x3, 0x2, 
       0x2, 0x2, 0x6b, 0x13, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6a, 0x3, 0x2, 0x2, 
       0x2, 0x6d, 0x71, 0x5, 0xc, 0x7, 0x2, 0x6e, 0x71, 0x5, 0xe, 0x8, 0x2, 
       0x6f, 0x71, 0x5, 0x16, 0xc, 0x2, 0x70, 0x6d, 0x3, 0x2, 0x2, 0x2, 
       0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x71, 
       0x15, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x5, 0xe, 0x8, 0x2, 0x73, 0x74, 
       0x7, 0xb, 0x2, 0x2, 0x74, 0x75, 0x5, 0xe, 0x8, 0x2, 0x75, 0x7b, 0x3, 
       0x2, 0x2, 0x2, 0x76, 0x77, 0x5, 0xe, 0x8, 0x2, 0x77, 0x78, 0x7, 0xc, 
       0x2, 0x2, 0x78, 0x79, 0x5, 0xe, 0x8, 0x2, 0x79, 0x7b, 0x3, 0x2, 0x2, 
       0x2, 0x7a, 0x72, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x76, 0x3, 0x2, 0x2, 0x2, 
       0x7b, 0x17, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0x1d, 0x2, 0x2, 
       0x7d, 0x7e, 0x5, 0xe, 0x8, 0x2, 0x7e, 0x7f, 0x7, 0x8, 0x2, 0x2, 0x7f, 
       0x19, 0x3, 0x2, 0x2, 0x2, 0xb, 0x24, 0x2f, 0x35, 0x4b, 0x56, 0x58, 
       0x6a, 0x70, 0x7a, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ifccParser::Initializer ifccParser::_init;
