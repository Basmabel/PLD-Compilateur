// Generated from ifcc.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class ifccParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.9.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, INT=2, CHAR=3, OPENPAR=4, CLOSEPAR=5, SEMICOLON=6, OPENBRACKET=7, 
		CLOSEBRACKET=8, ISEQUAL=9, ISDIFFERENT=10, GREATEREQUAL=11, SMALLEREQUAL=12, 
		EQUAL=13, DIFFERENT=14, GREATER=15, SMALLER=16, PLUS=17, MINUS=18, MULTIPLY=19, 
		DIVIDE=20, AND=21, OR=22, IF=23, ELSE=24, WHILE=25, OPM=26, OPA=27, RETURN=28, 
		CONST=29, VAR=30, COMMA=31, COMMENT=32, DIRECTIVE=33, WS=34;
	public static final int
		RULE_axiom = 0, RULE_prog = 1, RULE_instr = 2, RULE_declaration = 3, RULE_variables = 4, 
		RULE_affectation = 5, RULE_expression = 6, RULE_if_then_else = 7, RULE_whileloop = 8, 
		RULE_block = 9, RULE_condition = 10, RULE_comparison = 11, RULE_return_stmt = 12;
	private static String[] makeRuleNames() {
		return new String[] {
			"axiom", "prog", "instr", "declaration", "variables", "affectation", 
			"expression", "if_then_else", "whileloop", "block", "condition", "comparison", 
			"return_stmt"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'main'", "'int'", "'char'", "'('", "')'", "';'", "'{'", "'}'", 
			"'=='", "'!='", "'>='", "'<='", "'='", "'!'", "'>'", "'<'", "'+'", "'-'", 
			"'*'", "'/'", "'&'", "'|'", "'if'", "'else'", "'while'", null, null, 
			"'return'", null, null, "','"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, "INT", "CHAR", "OPENPAR", "CLOSEPAR", "SEMICOLON", "OPENBRACKET", 
			"CLOSEBRACKET", "ISEQUAL", "ISDIFFERENT", "GREATEREQUAL", "SMALLEREQUAL", 
			"EQUAL", "DIFFERENT", "GREATER", "SMALLER", "PLUS", "MINUS", "MULTIPLY", 
			"DIVIDE", "AND", "OR", "IF", "ELSE", "WHILE", "OPM", "OPA", "RETURN", 
			"CONST", "VAR", "COMMA", "COMMENT", "DIRECTIVE", "WS"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "ifcc.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public ifccParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class AxiomContext extends ParserRuleContext {
		public ProgContext prog() {
			return getRuleContext(ProgContext.class,0);
		}
		public AxiomContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_axiom; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterAxiom(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitAxiom(this);
		}
	}

	public final AxiomContext axiom() throws RecognitionException {
		AxiomContext _localctx = new AxiomContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_axiom);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(26);
			prog();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ProgContext extends ParserRuleContext {
		public TerminalNode INT() { return getToken(ifccParser.INT, 0); }
		public TerminalNode OPENPAR() { return getToken(ifccParser.OPENPAR, 0); }
		public TerminalNode CLOSEPAR() { return getToken(ifccParser.CLOSEPAR, 0); }
		public TerminalNode OPENBRACKET() { return getToken(ifccParser.OPENBRACKET, 0); }
		public TerminalNode CLOSEBRACKET() { return getToken(ifccParser.CLOSEBRACKET, 0); }
		public List<InstrContext> instr() {
			return getRuleContexts(InstrContext.class);
		}
		public InstrContext instr(int i) {
			return getRuleContext(InstrContext.class,i);
		}
		public ProgContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prog; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterProg(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitProg(this);
		}
	}

	public final ProgContext prog() throws RecognitionException {
		ProgContext _localctx = new ProgContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_prog);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(28);
			match(INT);
			setState(29);
			match(T__0);
			setState(30);
			match(OPENPAR);
			setState(31);
			match(CLOSEPAR);
			setState(32);
			match(OPENBRACKET);
			setState(36);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << INT) | (1L << IF) | (1L << WHILE) | (1L << RETURN) | (1L << VAR))) != 0)) {
				{
				{
				setState(33);
				instr();
				}
				}
				setState(38);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(39);
			match(CLOSEBRACKET);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class InstrContext extends ParserRuleContext {
		public InstrContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_instr; }
	 
		public InstrContext() { }
		public void copyFrom(InstrContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class DeclarationInstrContext extends InstrContext {
		public DeclarationContext declaration() {
			return getRuleContext(DeclarationContext.class,0);
		}
		public DeclarationInstrContext(InstrContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterDeclarationInstr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitDeclarationInstr(this);
		}
	}
	public static class AffectationInstrContext extends InstrContext {
		public AffectationContext affectation() {
			return getRuleContext(AffectationContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(ifccParser.SEMICOLON, 0); }
		public AffectationInstrContext(InstrContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterAffectationInstr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitAffectationInstr(this);
		}
	}
	public static class Return_stmtInstrContext extends InstrContext {
		public Return_stmtContext return_stmt() {
			return getRuleContext(Return_stmtContext.class,0);
		}
		public Return_stmtInstrContext(InstrContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterReturn_stmtInstr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitReturn_stmtInstr(this);
		}
	}
	public static class WhileInstrContext extends InstrContext {
		public WhileloopContext whileloop() {
			return getRuleContext(WhileloopContext.class,0);
		}
		public WhileInstrContext(InstrContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterWhileInstr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitWhileInstr(this);
		}
	}
	public static class If_then_elseInstrContext extends InstrContext {
		public If_then_elseContext if_then_else() {
			return getRuleContext(If_then_elseContext.class,0);
		}
		public If_then_elseInstrContext(InstrContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterIf_then_elseInstr(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitIf_then_elseInstr(this);
		}
	}

	public final InstrContext instr() throws RecognitionException {
		InstrContext _localctx = new InstrContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_instr);
		try {
			setState(48);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
				_localctx = new DeclarationInstrContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(41);
				declaration();
				}
				break;
			case VAR:
				_localctx = new AffectationInstrContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(42);
				affectation();
				setState(43);
				match(SEMICOLON);
				}
				break;
			case RETURN:
				_localctx = new Return_stmtInstrContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(45);
				return_stmt();
				}
				break;
			case IF:
				_localctx = new If_then_elseInstrContext(_localctx);
				enterOuterAlt(_localctx, 4);
				{
				setState(46);
				if_then_else();
				}
				break;
			case WHILE:
				_localctx = new WhileInstrContext(_localctx);
				enterOuterAlt(_localctx, 5);
				{
				setState(47);
				whileloop();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DeclarationContext extends ParserRuleContext {
		public TerminalNode INT() { return getToken(ifccParser.INT, 0); }
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public TerminalNode SEMICOLON() { return getToken(ifccParser.SEMICOLON, 0); }
		public List<VariablesContext> variables() {
			return getRuleContexts(VariablesContext.class);
		}
		public VariablesContext variables(int i) {
			return getRuleContext(VariablesContext.class,i);
		}
		public DeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_declaration; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterDeclaration(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitDeclaration(this);
		}
	}

	public final DeclarationContext declaration() throws RecognitionException {
		DeclarationContext _localctx = new DeclarationContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_declaration);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(50);
			match(INT);
			setState(54);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(51);
					variables();
					}
					} 
				}
				setState(56);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			}
			setState(57);
			match(VAR);
			setState(58);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VariablesContext extends ParserRuleContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public TerminalNode COMMA() { return getToken(ifccParser.COMMA, 0); }
		public VariablesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variables; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterVariables(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitVariables(this);
		}
	}

	public final VariablesContext variables() throws RecognitionException {
		VariablesContext _localctx = new VariablesContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_variables);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(60);
			match(VAR);
			setState(61);
			match(COMMA);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class AffectationContext extends ParserRuleContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public TerminalNode EQUAL() { return getToken(ifccParser.EQUAL, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public AffectationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_affectation; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterAffectation(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitAffectation(this);
		}
	}

	public final AffectationContext affectation() throws RecognitionException {
		AffectationContext _localctx = new AffectationContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_affectation);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(63);
			match(VAR);
			setState(64);
			match(EQUAL);
			setState(65);
			expression(0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionContext extends ParserRuleContext {
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	 
		public ExpressionContext() { }
		public void copyFrom(ExpressionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class ParContext extends ExpressionContext {
		public TerminalNode OPENPAR() { return getToken(ifccParser.OPENPAR, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode CLOSEPAR() { return getToken(ifccParser.CLOSEPAR, 0); }
		public ParContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterPar(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitPar(this);
		}
	}
	public static class PlusminusContext extends ExpressionContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode PLUS() { return getToken(ifccParser.PLUS, 0); }
		public TerminalNode MINUS() { return getToken(ifccParser.MINUS, 0); }
		public PlusminusContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterPlusminus(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitPlusminus(this);
		}
	}
	public static class ConstContext extends ExpressionContext {
		public TerminalNode CONST() { return getToken(ifccParser.CONST, 0); }
		public ConstContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterConst(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitConst(this);
		}
	}
	public static class VarContext extends ExpressionContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public VarContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterVar(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitVar(this);
		}
	}
	public static class MultdivContext extends ExpressionContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode MULTIPLY() { return getToken(ifccParser.MULTIPLY, 0); }
		public TerminalNode DIVIDE() { return getToken(ifccParser.DIVIDE, 0); }
		public MultdivContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterMultdiv(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitMultdiv(this);
		}
	}
	public static class OpposeContext extends ExpressionContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode MINUS() { return getToken(ifccParser.MINUS, 0); }
		public OpposeContext(ExpressionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterOppose(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitOppose(this);
		}
	}

	public final ExpressionContext expression() throws RecognitionException {
		return expression(0);
	}

	private ExpressionContext expression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExpressionContext _localctx = new ExpressionContext(_ctx, _parentState);
		ExpressionContext _prevctx = _localctx;
		int _startState = 12;
		enterRecursionRule(_localctx, 12, RULE_expression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(76);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OPENPAR:
				{
				_localctx = new ParContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(68);
				match(OPENPAR);
				setState(69);
				expression(0);
				setState(70);
				match(CLOSEPAR);
				}
				break;
			case MINUS:
				{
				_localctx = new OpposeContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				{
				setState(72);
				match(MINUS);
				}
				setState(73);
				expression(5);
				}
				break;
			case VAR:
				{
				_localctx = new VarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(74);
				match(VAR);
				}
				break;
			case CONST:
				{
				_localctx = new ConstContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(75);
				match(CONST);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(86);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(84);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
					case 1:
						{
						_localctx = new MultdivContext(new ExpressionContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(78);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(79);
						_la = _input.LA(1);
						if ( !(_la==MULTIPLY || _la==DIVIDE) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(80);
						expression(5);
						}
						break;
					case 2:
						{
						_localctx = new PlusminusContext(new ExpressionContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(81);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(82);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==MINUS) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(83);
						expression(4);
						}
						break;
					}
					} 
				}
				setState(88);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,5,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	public static class If_then_elseContext extends ParserRuleContext {
		public BlockContext blockthen;
		public BlockContext blockelse;
		public TerminalNode IF() { return getToken(ifccParser.IF, 0); }
		public TerminalNode OPENPAR() { return getToken(ifccParser.OPENPAR, 0); }
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public TerminalNode CLOSEPAR() { return getToken(ifccParser.CLOSEPAR, 0); }
		public List<TerminalNode> OPENBRACKET() { return getTokens(ifccParser.OPENBRACKET); }
		public TerminalNode OPENBRACKET(int i) {
			return getToken(ifccParser.OPENBRACKET, i);
		}
		public List<TerminalNode> CLOSEBRACKET() { return getTokens(ifccParser.CLOSEBRACKET); }
		public TerminalNode CLOSEBRACKET(int i) {
			return getToken(ifccParser.CLOSEBRACKET, i);
		}
		public TerminalNode ELSE() { return getToken(ifccParser.ELSE, 0); }
		public List<BlockContext> block() {
			return getRuleContexts(BlockContext.class);
		}
		public BlockContext block(int i) {
			return getRuleContext(BlockContext.class,i);
		}
		public If_then_elseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_if_then_else; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterIf_then_else(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitIf_then_else(this);
		}
	}

	public final If_then_elseContext if_then_else() throws RecognitionException {
		If_then_elseContext _localctx = new If_then_elseContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_if_then_else);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(89);
			match(IF);
			setState(90);
			match(OPENPAR);
			setState(91);
			condition();
			setState(92);
			match(CLOSEPAR);
			setState(93);
			match(OPENBRACKET);
			setState(94);
			((If_then_elseContext)_localctx).blockthen = block();
			setState(95);
			match(CLOSEBRACKET);
			setState(96);
			match(ELSE);
			setState(97);
			match(OPENBRACKET);
			setState(98);
			((If_then_elseContext)_localctx).blockelse = block();
			setState(99);
			match(CLOSEBRACKET);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class WhileloopContext extends ParserRuleContext {
		public BlockContext blockwhile;
		public TerminalNode WHILE() { return getToken(ifccParser.WHILE, 0); }
		public TerminalNode OPENPAR() { return getToken(ifccParser.OPENPAR, 0); }
		public ConditionContext condition() {
			return getRuleContext(ConditionContext.class,0);
		}
		public TerminalNode CLOSEPAR() { return getToken(ifccParser.CLOSEPAR, 0); }
		public TerminalNode OPENBRACKET() { return getToken(ifccParser.OPENBRACKET, 0); }
		public TerminalNode CLOSEBRACKET() { return getToken(ifccParser.CLOSEBRACKET, 0); }
		public BlockContext block() {
			return getRuleContext(BlockContext.class,0);
		}
		public WhileloopContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_whileloop; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterWhileloop(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitWhileloop(this);
		}
	}

	public final WhileloopContext whileloop() throws RecognitionException {
		WhileloopContext _localctx = new WhileloopContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_whileloop);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(101);
			match(WHILE);
			setState(102);
			match(OPENPAR);
			setState(103);
			condition();
			setState(104);
			match(CLOSEPAR);
			setState(105);
			match(OPENBRACKET);
			setState(106);
			((WhileloopContext)_localctx).blockwhile = block();
			setState(107);
			match(CLOSEBRACKET);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BlockContext extends ParserRuleContext {
		public List<InstrContext> instr() {
			return getRuleContexts(InstrContext.class);
		}
		public InstrContext instr(int i) {
			return getRuleContext(InstrContext.class,i);
		}
		public BlockContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_block; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterBlock(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitBlock(this);
		}
	}

	public final BlockContext block() throws RecognitionException {
		BlockContext _localctx = new BlockContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_block);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(112);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << INT) | (1L << IF) | (1L << WHILE) | (1L << RETURN) | (1L << VAR))) != 0)) {
				{
				{
				setState(109);
				instr();
				}
				}
				setState(114);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ConditionContext extends ParserRuleContext {
		public ConditionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_condition; }
	 
		public ConditionContext() { }
		public void copyFrom(ConditionContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Condition_affectationContext extends ConditionContext {
		public AffectationContext affectation() {
			return getRuleContext(AffectationContext.class,0);
		}
		public Condition_affectationContext(ConditionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterCondition_affectation(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitCondition_affectation(this);
		}
	}
	public static class Condition_expressionContext extends ConditionContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Condition_expressionContext(ConditionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterCondition_expression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitCondition_expression(this);
		}
	}
	public static class Condition_comparisonContext extends ConditionContext {
		public ComparisonContext comparison() {
			return getRuleContext(ComparisonContext.class,0);
		}
		public Condition_comparisonContext(ConditionContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterCondition_comparison(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitCondition_comparison(this);
		}
	}

	public final ConditionContext condition() throws RecognitionException {
		ConditionContext _localctx = new ConditionContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_condition);
		try {
			setState(118);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				_localctx = new Condition_affectationContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(115);
				affectation();
				}
				break;
			case 2:
				_localctx = new Condition_expressionContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(116);
				expression(0);
				}
				break;
			case 3:
				_localctx = new Condition_comparisonContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(117);
				comparison();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ComparisonContext extends ParserRuleContext {
		public ComparisonContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_comparison; }
	 
		public ComparisonContext() { }
		public void copyFrom(ComparisonContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class Comparison_differentContext extends ComparisonContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode ISDIFFERENT() { return getToken(ifccParser.ISDIFFERENT, 0); }
		public Comparison_differentContext(ComparisonContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterComparison_different(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitComparison_different(this);
		}
	}
	public static class Comparison_equalContext extends ComparisonContext {
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public TerminalNode ISEQUAL() { return getToken(ifccParser.ISEQUAL, 0); }
		public Comparison_equalContext(ComparisonContext ctx) { copyFrom(ctx); }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterComparison_equal(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitComparison_equal(this);
		}
	}

	public final ComparisonContext comparison() throws RecognitionException {
		ComparisonContext _localctx = new ComparisonContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_comparison);
		try {
			setState(128);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				_localctx = new Comparison_equalContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(120);
				expression(0);
				setState(121);
				match(ISEQUAL);
				setState(122);
				expression(0);
				}
				break;
			case 2:
				_localctx = new Comparison_differentContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(124);
				expression(0);
				setState(125);
				match(ISDIFFERENT);
				setState(126);
				expression(0);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Return_stmtContext extends ParserRuleContext {
		public TerminalNode RETURN() { return getToken(ifccParser.RETURN, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode SEMICOLON() { return getToken(ifccParser.SEMICOLON, 0); }
		public Return_stmtContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_return_stmt; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).enterReturn_stmt(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof ifccListener ) ((ifccListener)listener).exitReturn_stmt(this);
		}
	}

	public final Return_stmtContext return_stmt() throws RecognitionException {
		Return_stmtContext _localctx = new Return_stmtContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_return_stmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(130);
			match(RETURN);
			setState(131);
			expression(0);
			setState(132);
			match(SEMICOLON);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 6:
			return expression_sempred((ExpressionContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expression_sempred(ExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 4);
		case 1:
			return precpred(_ctx, 3);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3$\u0089\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\7\3%\n\3"+
		"\f\3\16\3(\13\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\4\3\4\5\4\63\n\4\3\5\3\5"+
		"\7\5\67\n\5\f\5\16\5:\13\5\3\5\3\5\3\5\3\6\3\6\3\6\3\7\3\7\3\7\3\7\3\b"+
		"\3\b\3\b\3\b\3\b\3\b\3\b\3\b\3\b\5\bO\n\b\3\b\3\b\3\b\3\b\3\b\3\b\7\b"+
		"W\n\b\f\b\16\bZ\13\b\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3"+
		"\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\13\7\13q\n\13\f\13\16\13t\13\13\3\f\3"+
		"\f\3\f\5\fy\n\f\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\r\5\r\u0083\n\r\3\16\3\16"+
		"\3\16\3\16\3\16\2\3\16\17\2\4\6\b\n\f\16\20\22\24\26\30\32\2\4\3\2\25"+
		"\26\3\2\23\24\2\u008a\2\34\3\2\2\2\4\36\3\2\2\2\6\62\3\2\2\2\b\64\3\2"+
		"\2\2\n>\3\2\2\2\fA\3\2\2\2\16N\3\2\2\2\20[\3\2\2\2\22g\3\2\2\2\24r\3\2"+
		"\2\2\26x\3\2\2\2\30\u0082\3\2\2\2\32\u0084\3\2\2\2\34\35\5\4\3\2\35\3"+
		"\3\2\2\2\36\37\7\4\2\2\37 \7\3\2\2 !\7\6\2\2!\"\7\7\2\2\"&\7\t\2\2#%\5"+
		"\6\4\2$#\3\2\2\2%(\3\2\2\2&$\3\2\2\2&\'\3\2\2\2\')\3\2\2\2(&\3\2\2\2)"+
		"*\7\n\2\2*\5\3\2\2\2+\63\5\b\5\2,-\5\f\7\2-.\7\b\2\2.\63\3\2\2\2/\63\5"+
		"\32\16\2\60\63\5\20\t\2\61\63\5\22\n\2\62+\3\2\2\2\62,\3\2\2\2\62/\3\2"+
		"\2\2\62\60\3\2\2\2\62\61\3\2\2\2\63\7\3\2\2\2\648\7\4\2\2\65\67\5\n\6"+
		"\2\66\65\3\2\2\2\67:\3\2\2\28\66\3\2\2\289\3\2\2\29;\3\2\2\2:8\3\2\2\2"+
		";<\7 \2\2<=\7\b\2\2=\t\3\2\2\2>?\7 \2\2?@\7!\2\2@\13\3\2\2\2AB\7 \2\2"+
		"BC\7\17\2\2CD\5\16\b\2D\r\3\2\2\2EF\b\b\1\2FG\7\6\2\2GH\5\16\b\2HI\7\7"+
		"\2\2IO\3\2\2\2JK\7\24\2\2KO\5\16\b\7LO\7 \2\2MO\7\37\2\2NE\3\2\2\2NJ\3"+
		"\2\2\2NL\3\2\2\2NM\3\2\2\2OX\3\2\2\2PQ\f\6\2\2QR\t\2\2\2RW\5\16\b\7ST"+
		"\f\5\2\2TU\t\3\2\2UW\5\16\b\6VP\3\2\2\2VS\3\2\2\2WZ\3\2\2\2XV\3\2\2\2"+
		"XY\3\2\2\2Y\17\3\2\2\2ZX\3\2\2\2[\\\7\31\2\2\\]\7\6\2\2]^\5\26\f\2^_\7"+
		"\7\2\2_`\7\t\2\2`a\5\24\13\2ab\7\n\2\2bc\7\32\2\2cd\7\t\2\2de\5\24\13"+
		"\2ef\7\n\2\2f\21\3\2\2\2gh\7\33\2\2hi\7\6\2\2ij\5\26\f\2jk\7\7\2\2kl\7"+
		"\t\2\2lm\5\24\13\2mn\7\n\2\2n\23\3\2\2\2oq\5\6\4\2po\3\2\2\2qt\3\2\2\2"+
		"rp\3\2\2\2rs\3\2\2\2s\25\3\2\2\2tr\3\2\2\2uy\5\f\7\2vy\5\16\b\2wy\5\30"+
		"\r\2xu\3\2\2\2xv\3\2\2\2xw\3\2\2\2y\27\3\2\2\2z{\5\16\b\2{|\7\13\2\2|"+
		"}\5\16\b\2}\u0083\3\2\2\2~\177\5\16\b\2\177\u0080\7\f\2\2\u0080\u0081"+
		"\5\16\b\2\u0081\u0083\3\2\2\2\u0082z\3\2\2\2\u0082~\3\2\2\2\u0083\31\3"+
		"\2\2\2\u0084\u0085\7\36\2\2\u0085\u0086\5\16\b\2\u0086\u0087\7\b\2\2\u0087"+
		"\33\3\2\2\2\13&\628NVXrx\u0082";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}