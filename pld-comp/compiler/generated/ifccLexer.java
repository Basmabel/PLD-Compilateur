// Generated from ifcc.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class ifccLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.9.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, INT=2, CHAR=3, OPENPAR=4, CLOSEPAR=5, SEMICOLON=6, OPENBRACKET=7, 
		CLOSEBRACKET=8, EQUAL=9, RETURN=10, CONST=11, VAR=12, COMMA=13, COMMENT=14, 
		DIRECTIVE=15, WS=16;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "INT", "CHAR", "OPENPAR", "CLOSEPAR", "SEMICOLON", "OPENBRACKET", 
			"CLOSEBRACKET", "EQUAL", "RETURN", "CONST", "VAR", "COMMA", "COMMENT", 
			"DIRECTIVE", "WS"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'main'", "'int'", "'char'", "'('", "')'", "';'", "'{'", "'}'", 
			"'='", "'return'", null, null, "','"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, "INT", "CHAR", "OPENPAR", "CLOSEPAR", "SEMICOLON", "OPENBRACKET", 
			"CLOSEBRACKET", "EQUAL", "RETURN", "CONST", "VAR", "COMMA", "COMMENT", 
			"DIRECTIVE", "WS"
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


	public ifccLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "ifcc.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\22m\b\1\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\3\2\3\2\3"+
		"\2\3\2\3\2\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7"+
		"\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\13\3\13\3\f\6\fF\n"+
		"\f\r\f\16\fG\3\r\6\rK\n\r\r\r\16\rL\3\16\3\16\3\17\3\17\3\17\3\17\7\17"+
		"U\n\17\f\17\16\17X\13\17\3\17\3\17\3\17\3\17\3\17\3\20\3\20\7\20a\n\20"+
		"\f\20\16\20d\13\20\3\20\3\20\3\20\3\20\3\21\3\21\3\21\3\21\4Vb\2\22\3"+
		"\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37"+
		"\21!\22\3\2\5\3\2\62;\4\2C\\c|\5\2\13\f\17\17\"\"\2p\2\3\3\2\2\2\2\5\3"+
		"\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2"+
		"\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3"+
		"\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\3#\3\2\2\2\5(\3\2\2\2\7,\3"+
		"\2\2\2\t\61\3\2\2\2\13\63\3\2\2\2\r\65\3\2\2\2\17\67\3\2\2\2\219\3\2\2"+
		"\2\23;\3\2\2\2\25=\3\2\2\2\27E\3\2\2\2\31J\3\2\2\2\33N\3\2\2\2\35P\3\2"+
		"\2\2\37^\3\2\2\2!i\3\2\2\2#$\7o\2\2$%\7c\2\2%&\7k\2\2&\'\7p\2\2\'\4\3"+
		"\2\2\2()\7k\2\2)*\7p\2\2*+\7v\2\2+\6\3\2\2\2,-\7e\2\2-.\7j\2\2./\7c\2"+
		"\2/\60\7t\2\2\60\b\3\2\2\2\61\62\7*\2\2\62\n\3\2\2\2\63\64\7+\2\2\64\f"+
		"\3\2\2\2\65\66\7=\2\2\66\16\3\2\2\2\678\7}\2\28\20\3\2\2\29:\7\177\2\2"+
		":\22\3\2\2\2;<\7?\2\2<\24\3\2\2\2=>\7t\2\2>?\7g\2\2?@\7v\2\2@A\7w\2\2"+
		"AB\7t\2\2BC\7p\2\2C\26\3\2\2\2DF\t\2\2\2ED\3\2\2\2FG\3\2\2\2GE\3\2\2\2"+
		"GH\3\2\2\2H\30\3\2\2\2IK\t\3\2\2JI\3\2\2\2KL\3\2\2\2LJ\3\2\2\2LM\3\2\2"+
		"\2M\32\3\2\2\2NO\7.\2\2O\34\3\2\2\2PQ\7\61\2\2QR\7,\2\2RV\3\2\2\2SU\13"+
		"\2\2\2TS\3\2\2\2UX\3\2\2\2VW\3\2\2\2VT\3\2\2\2WY\3\2\2\2XV\3\2\2\2YZ\7"+
		",\2\2Z[\7\61\2\2[\\\3\2\2\2\\]\b\17\2\2]\36\3\2\2\2^b\7%\2\2_a\13\2\2"+
		"\2`_\3\2\2\2ad\3\2\2\2bc\3\2\2\2b`\3\2\2\2ce\3\2\2\2db\3\2\2\2ef\7\f\2"+
		"\2fg\3\2\2\2gh\b\20\2\2h \3\2\2\2ij\t\4\2\2jk\3\2\2\2kl\b\21\3\2l\"\3"+
		"\2\2\2\7\2GLVb\4\b\2\2\2\3\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}