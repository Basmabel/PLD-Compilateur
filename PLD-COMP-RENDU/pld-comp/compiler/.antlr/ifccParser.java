// Generated from /mnt/c/Users/salma/Documents/GitHub/PLD-Compilateur/PLD-COMP-RENDU/pld-comp/compiler/ifcc.g4 by ANTLR 4.8
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
	static { RuntimeMetaData.checkVersion("4.8", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, INT=2, CHAR=3, OPENPAR=4, CLOSEPAR=5, SEMICOLON=6, OPENBRACKET=7, 
		CLOSEBRACKET=8, EQUAL=9, PLUS=10, MINUS=11, MULTIPLY=12, DIVIDE=13, OPM=14, 
		OPA=15, RETURN=16, CONST=17, VAR=18, CHARACTER=19, COMMA=20, COMMENT=21, 
		DIRECTIVE=22, WS=23;
	public static final int
		RULE_axiom = 0, RULE_prog = 1, RULE_instr = 2, RULE_declaration = 3, RULE_type = 4, 
		RULE_variables = 5, RULE_affectation = 6, RULE_expression = 7, RULE_return_stmt = 8;
	private static String[] makeRuleNames() {
		return new String[] {
			"axiom", "prog", "instr", "declaration", "type", "variables", "affectation", 
			"expression", "return_stmt"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'main'", "'int'", "'char'", "'('", "')'", "';'", "'{'", "'}'", 
			"'='", "'+'", "'-'", "'*'", "'/'", null, null, "'return'", null, null, 
			null, "','"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, "INT", "CHAR", "OPENPAR", "CLOSEPAR", "SEMICOLON", "OPENBRACKET", 
			"CLOSEBRACKET", "EQUAL", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "OPM", 
			"OPA", "RETURN", "CONST", "VAR", "CHARACTER", "COMMA", "COMMENT", "DIRECTIVE", 
			"WS"
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
	}

	public final AxiomContext axiom() throws RecognitionException {
		AxiomContext _localctx = new AxiomContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_axiom);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(18);
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
	}

	public final ProgContext prog() throws RecognitionException {
		ProgContext _localctx = new ProgContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_prog);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(20);
			match(INT);
			setState(21);
			match(T__0);
			setState(22);
			match(OPENPAR);
			setState(23);
			match(CLOSEPAR);
			setState(24);
			match(OPENBRACKET);
			setState(28);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << INT) | (1L << CHAR) | (1L << RETURN) | (1L << VAR))) != 0)) {
				{
				{
				setState(25);
				instr();
				}
				}
				setState(30);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(31);
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
	}
	public static class AffectationInstrContext extends InstrContext {
		public AffectationContext affectation() {
			return getRuleContext(AffectationContext.class,0);
		}
		public AffectationInstrContext(InstrContext ctx) { copyFrom(ctx); }
	}
	public static class Return_stmtInstrContext extends InstrContext {
		public Return_stmtContext return_stmt() {
			return getRuleContext(Return_stmtContext.class,0);
		}
		public Return_stmtInstrContext(InstrContext ctx) { copyFrom(ctx); }
	}

	public final InstrContext instr() throws RecognitionException {
		InstrContext _localctx = new InstrContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_instr);
		try {
			setState(36);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
			case CHAR:
				_localctx = new DeclarationInstrContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(33);
				declaration();
				}
				break;
			case VAR:
				_localctx = new AffectationInstrContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(34);
				affectation();
				}
				break;
			case RETURN:
				_localctx = new Return_stmtInstrContext(_localctx);
				enterOuterAlt(_localctx, 3);
				{
				setState(35);
				return_stmt();
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
		public TypeContext type() {
			return getRuleContext(TypeContext.class,0);
		}
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
	}

	public final DeclarationContext declaration() throws RecognitionException {
		DeclarationContext _localctx = new DeclarationContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_declaration);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(38);
			type();
			setState(42);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(39);
					variables();
					}
					} 
				}
				setState(44);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,2,_ctx);
			}
			setState(45);
			match(VAR);
			setState(46);
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

	public static class TypeContext extends ParserRuleContext {
		public TypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_type; }
	 
		public TypeContext() { }
		public void copyFrom(TypeContext ctx) {
			super.copyFrom(ctx);
		}
	}
	public static class CharContext extends TypeContext {
		public TerminalNode CHAR() { return getToken(ifccParser.CHAR, 0); }
		public CharContext(TypeContext ctx) { copyFrom(ctx); }
	}
	public static class IntContext extends TypeContext {
		public TerminalNode INT() { return getToken(ifccParser.INT, 0); }
		public IntContext(TypeContext ctx) { copyFrom(ctx); }
	}

	public final TypeContext type() throws RecognitionException {
		TypeContext _localctx = new TypeContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_type);
		try {
			setState(50);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INT:
				_localctx = new IntContext(_localctx);
				enterOuterAlt(_localctx, 1);
				{
				setState(48);
				match(INT);
				}
				break;
			case CHAR:
				_localctx = new CharContext(_localctx);
				enterOuterAlt(_localctx, 2);
				{
				setState(49);
				match(CHAR);
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

	public static class VariablesContext extends ParserRuleContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public TerminalNode COMMA() { return getToken(ifccParser.COMMA, 0); }
		public VariablesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_variables; }
	}

	public final VariablesContext variables() throws RecognitionException {
		VariablesContext _localctx = new VariablesContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_variables);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(52);
			match(VAR);
			setState(53);
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
		public TerminalNode SEMICOLON() { return getToken(ifccParser.SEMICOLON, 0); }
		public AffectationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_affectation; }
	}

	public final AffectationContext affectation() throws RecognitionException {
		AffectationContext _localctx = new AffectationContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_affectation);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(55);
			match(VAR);
			setState(56);
			match(EQUAL);
			setState(57);
			expression(0);
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
	}
	public static class CharacterContext extends ExpressionContext {
		public TerminalNode CHARACTER() { return getToken(ifccParser.CHARACTER, 0); }
		public CharacterContext(ExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class ConstContext extends ExpressionContext {
		public TerminalNode CONST() { return getToken(ifccParser.CONST, 0); }
		public ConstContext(ExpressionContext ctx) { copyFrom(ctx); }
	}
	public static class VarContext extends ExpressionContext {
		public TerminalNode VAR() { return getToken(ifccParser.VAR, 0); }
		public VarContext(ExpressionContext ctx) { copyFrom(ctx); }
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
	}
	public static class OpposeContext extends ExpressionContext {
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public TerminalNode MINUS() { return getToken(ifccParser.MINUS, 0); }
		public OpposeContext(ExpressionContext ctx) { copyFrom(ctx); }
	}

	public final ExpressionContext expression() throws RecognitionException {
		return expression(0);
	}

	private ExpressionContext expression(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ExpressionContext _localctx = new ExpressionContext(_ctx, _parentState);
		ExpressionContext _prevctx = _localctx;
		int _startState = 14;
		enterRecursionRule(_localctx, 14, RULE_expression, _p);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(70);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OPENPAR:
				{
				_localctx = new ParContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;

				setState(61);
				match(OPENPAR);
				setState(62);
				expression(0);
				setState(63);
				match(CLOSEPAR);
				}
				break;
			case MINUS:
				{
				_localctx = new OpposeContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				{
				setState(65);
				match(MINUS);
				}
				setState(66);
				expression(6);
				}
				break;
			case VAR:
				{
				_localctx = new VarContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(67);
				match(VAR);
				}
				break;
			case CHARACTER:
				{
				_localctx = new CharacterContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(68);
				match(CHARACTER);
				}
				break;
			case CONST:
				{
				_localctx = new ConstContext(_localctx);
				_ctx = _localctx;
				_prevctx = _localctx;
				setState(69);
				match(CONST);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(80);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(78);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
					case 1:
						{
						_localctx = new MultdivContext(new ExpressionContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(72);
						if (!(precpred(_ctx, 5))) throw new FailedPredicateException(this, "precpred(_ctx, 5)");
						setState(73);
						_la = _input.LA(1);
						if ( !(_la==MULTIPLY || _la==DIVIDE) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(74);
						expression(6);
						}
						break;
					case 2:
						{
						_localctx = new PlusminusContext(new ExpressionContext(_parentctx, _parentState));
						pushNewRecursionContext(_localctx, _startState, RULE_expression);
						setState(75);
						if (!(precpred(_ctx, 4))) throw new FailedPredicateException(this, "precpred(_ctx, 4)");
						setState(76);
						_la = _input.LA(1);
						if ( !(_la==PLUS || _la==MINUS) ) {
						_errHandler.recoverInline(this);
						}
						else {
							if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
							_errHandler.reportMatch(this);
							consume();
						}
						setState(77);
						expression(5);
						}
						break;
					}
					} 
				}
				setState(82);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,6,_ctx);
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
	}

	public final Return_stmtContext return_stmt() throws RecognitionException {
		Return_stmtContext _localctx = new Return_stmtContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_return_stmt);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(83);
			match(RETURN);
			setState(84);
			expression(0);
			setState(85);
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
		case 7:
			return expression_sempred((ExpressionContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean expression_sempred(ExpressionContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 5);
		case 1:
			return precpred(_ctx, 4);
		}
		return true;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\31Z\4\2\t\2\4\3\t"+
		"\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\3\2\3\2\3\3"+
		"\3\3\3\3\3\3\3\3\3\3\7\3\35\n\3\f\3\16\3 \13\3\3\3\3\3\3\4\3\4\3\4\5\4"+
		"\'\n\4\3\5\3\5\7\5+\n\5\f\5\16\5.\13\5\3\5\3\5\3\5\3\6\3\6\5\6\65\n\6"+
		"\3\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3"+
		"\t\5\tI\n\t\3\t\3\t\3\t\3\t\3\t\3\t\7\tQ\n\t\f\t\16\tT\13\t\3\n\3\n\3"+
		"\n\3\n\3\n\2\3\20\13\2\4\6\b\n\f\16\20\22\2\4\3\2\16\17\3\2\f\r\2[\2\24"+
		"\3\2\2\2\4\26\3\2\2\2\6&\3\2\2\2\b(\3\2\2\2\n\64\3\2\2\2\f\66\3\2\2\2"+
		"\169\3\2\2\2\20H\3\2\2\2\22U\3\2\2\2\24\25\5\4\3\2\25\3\3\2\2\2\26\27"+
		"\7\4\2\2\27\30\7\3\2\2\30\31\7\6\2\2\31\32\7\7\2\2\32\36\7\t\2\2\33\35"+
		"\5\6\4\2\34\33\3\2\2\2\35 \3\2\2\2\36\34\3\2\2\2\36\37\3\2\2\2\37!\3\2"+
		"\2\2 \36\3\2\2\2!\"\7\n\2\2\"\5\3\2\2\2#\'\5\b\5\2$\'\5\16\b\2%\'\5\22"+
		"\n\2&#\3\2\2\2&$\3\2\2\2&%\3\2\2\2\'\7\3\2\2\2(,\5\n\6\2)+\5\f\7\2*)\3"+
		"\2\2\2+.\3\2\2\2,*\3\2\2\2,-\3\2\2\2-/\3\2\2\2.,\3\2\2\2/\60\7\24\2\2"+
		"\60\61\7\b\2\2\61\t\3\2\2\2\62\65\7\4\2\2\63\65\7\5\2\2\64\62\3\2\2\2"+
		"\64\63\3\2\2\2\65\13\3\2\2\2\66\67\7\24\2\2\678\7\26\2\28\r\3\2\2\29:"+
		"\7\24\2\2:;\7\13\2\2;<\5\20\t\2<=\7\b\2\2=\17\3\2\2\2>?\b\t\1\2?@\7\6"+
		"\2\2@A\5\20\t\2AB\7\7\2\2BI\3\2\2\2CD\7\r\2\2DI\5\20\t\bEI\7\24\2\2FI"+
		"\7\25\2\2GI\7\23\2\2H>\3\2\2\2HC\3\2\2\2HE\3\2\2\2HF\3\2\2\2HG\3\2\2\2"+
		"IR\3\2\2\2JK\f\7\2\2KL\t\2\2\2LQ\5\20\t\bMN\f\6\2\2NO\t\3\2\2OQ\5\20\t"+
		"\7PJ\3\2\2\2PM\3\2\2\2QT\3\2\2\2RP\3\2\2\2RS\3\2\2\2S\21\3\2\2\2TR\3\2"+
		"\2\2UV\7\22\2\2VW\5\20\t\2WX\7\b\2\2X\23\3\2\2\2\t\36&,\64HPR";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}