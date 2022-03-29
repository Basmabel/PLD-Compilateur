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
		CLOSEBRACKET=8, ISEQUAL=9, ISDIFFERENT=10, GREATEREQUAL=11, SMALLEREQUAL=12, 
		EQUAL=13, DIFFERENT=14, GREATER=15, SMALLER=16, PLUS=17, MINUS=18, MULTIPLY=19, 
		DIVIDE=20, AND=21, OR=22, IF=23, ELSE=24, OPM=25, OPA=26, RETURN=27, CONST=28, 
		VAR=29, COMMA=30, COMMENT=31, DIRECTIVE=32, WS=33;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "INT", "CHAR", "OPENPAR", "CLOSEPAR", "SEMICOLON", "OPENBRACKET", 
			"CLOSEBRACKET", "ISEQUAL", "ISDIFFERENT", "GREATEREQUAL", "SMALLEREQUAL", 
			"EQUAL", "DIFFERENT", "GREATER", "SMALLER", "PLUS", "MINUS", "MULTIPLY", 
			"DIVIDE", "AND", "OR", "IF", "ELSE", "OPM", "OPA", "RETURN", "CONST", 
			"VAR", "COMMA", "COMMENT", "DIRECTIVE", "WS"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'main'", "'int'", "'char'", "'('", "')'", "';'", "'{'", "'}'", 
			"'=='", "'!='", "'>='", "'<='", "'='", "'!'", "'>'", "'<'", "'+'", "'-'", 
			"'*'", "'/'", "'&'", "'|'", "'if'", "'else'", null, null, "'return'", 
			null, null, "','"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, "INT", "CHAR", "OPENPAR", "CLOSEPAR", "SEMICOLON", "OPENBRACKET", 
			"CLOSEBRACKET", "ISEQUAL", "ISDIFFERENT", "GREATEREQUAL", "SMALLEREQUAL", 
			"EQUAL", "DIFFERENT", "GREATER", "SMALLER", "PLUS", "MINUS", "MULTIPLY", 
			"DIVIDE", "AND", "OR", "IF", "ELSE", "OPM", "OPA", "RETURN", "CONST", 
			"VAR", "COMMA", "COMMENT", "DIRECTIVE", "WS"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2#\u00bf\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\3\2\3\2\3\2\3\2\3\2\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3"+
		"\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\n\3\13\3\13\3\13\3\f"+
		"\3\f\3\f\3\r\3\r\3\r\3\16\3\16\3\17\3\17\3\20\3\20\3\21\3\21\3\22\3\22"+
		"\3\23\3\23\3\24\3\24\3\25\3\25\3\26\3\26\3\27\3\27\3\30\3\30\3\30\3\31"+
		"\3\31\3\31\3\31\3\31\3\32\3\32\5\32\u0088\n\32\3\33\3\33\5\33\u008c\n"+
		"\33\3\34\3\34\3\34\3\34\3\34\3\34\3\34\3\35\6\35\u0096\n\35\r\35\16\35"+
		"\u0097\3\36\3\36\7\36\u009c\n\36\f\36\16\36\u009f\13\36\3\37\3\37\3 \3"+
		" \3 \3 \7 \u00a7\n \f \16 \u00aa\13 \3 \3 \3 \3 \3 \3!\3!\7!\u00b3\n!"+
		"\f!\16!\u00b6\13!\3!\3!\3!\3!\3\"\3\"\3\"\3\"\4\u00a8\u00b4\2#\3\3\5\4"+
		"\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22"+
		"#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67\359\36;\37= ?!A\"C"+
		"#\3\2\6\3\2\62;\5\2C\\aac|\6\2\62;C\\aac|\5\2\13\f\17\17\"\"\2\u00c4\2"+
		"\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2"+
		"\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2"+
		"\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2"+
		"\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2"+
		"\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2"+
		"\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2C\3\2\2\2\3E\3\2\2\2\5J\3\2\2\2"+
		"\7N\3\2\2\2\tS\3\2\2\2\13U\3\2\2\2\rW\3\2\2\2\17Y\3\2\2\2\21[\3\2\2\2"+
		"\23]\3\2\2\2\25`\3\2\2\2\27c\3\2\2\2\31f\3\2\2\2\33i\3\2\2\2\35k\3\2\2"+
		"\2\37m\3\2\2\2!o\3\2\2\2#q\3\2\2\2%s\3\2\2\2\'u\3\2\2\2)w\3\2\2\2+y\3"+
		"\2\2\2-{\3\2\2\2/}\3\2\2\2\61\u0080\3\2\2\2\63\u0087\3\2\2\2\65\u008b"+
		"\3\2\2\2\67\u008d\3\2\2\29\u0095\3\2\2\2;\u0099\3\2\2\2=\u00a0\3\2\2\2"+
		"?\u00a2\3\2\2\2A\u00b0\3\2\2\2C\u00bb\3\2\2\2EF\7o\2\2FG\7c\2\2GH\7k\2"+
		"\2HI\7p\2\2I\4\3\2\2\2JK\7k\2\2KL\7p\2\2LM\7v\2\2M\6\3\2\2\2NO\7e\2\2"+
		"OP\7j\2\2PQ\7c\2\2QR\7t\2\2R\b\3\2\2\2ST\7*\2\2T\n\3\2\2\2UV\7+\2\2V\f"+
		"\3\2\2\2WX\7=\2\2X\16\3\2\2\2YZ\7}\2\2Z\20\3\2\2\2[\\\7\177\2\2\\\22\3"+
		"\2\2\2]^\7?\2\2^_\7?\2\2_\24\3\2\2\2`a\7#\2\2ab\7?\2\2b\26\3\2\2\2cd\7"+
		"@\2\2de\7?\2\2e\30\3\2\2\2fg\7>\2\2gh\7?\2\2h\32\3\2\2\2ij\7?\2\2j\34"+
		"\3\2\2\2kl\7#\2\2l\36\3\2\2\2mn\7@\2\2n \3\2\2\2op\7>\2\2p\"\3\2\2\2q"+
		"r\7-\2\2r$\3\2\2\2st\7/\2\2t&\3\2\2\2uv\7,\2\2v(\3\2\2\2wx\7\61\2\2x*"+
		"\3\2\2\2yz\7(\2\2z,\3\2\2\2{|\7~\2\2|.\3\2\2\2}~\7k\2\2~\177\7h\2\2\177"+
		"\60\3\2\2\2\u0080\u0081\7g\2\2\u0081\u0082\7n\2\2\u0082\u0083\7u\2\2\u0083"+
		"\u0084\7g\2\2\u0084\62\3\2\2\2\u0085\u0088\5\'\24\2\u0086\u0088\5)\25"+
		"\2\u0087\u0085\3\2\2\2\u0087\u0086\3\2\2\2\u0088\64\3\2\2\2\u0089\u008c"+
		"\5#\22\2\u008a\u008c\5%\23\2\u008b\u0089\3\2\2\2\u008b\u008a\3\2\2\2\u008c"+
		"\66\3\2\2\2\u008d\u008e\7t\2\2\u008e\u008f\7g\2\2\u008f\u0090\7v\2\2\u0090"+
		"\u0091\7w\2\2\u0091\u0092\7t\2\2\u0092\u0093\7p\2\2\u00938\3\2\2\2\u0094"+
		"\u0096\t\2\2\2\u0095\u0094\3\2\2\2\u0096\u0097\3\2\2\2\u0097\u0095\3\2"+
		"\2\2\u0097\u0098\3\2\2\2\u0098:\3\2\2\2\u0099\u009d\t\3\2\2\u009a\u009c"+
		"\t\4\2\2\u009b\u009a\3\2\2\2\u009c\u009f\3\2\2\2\u009d\u009b\3\2\2\2\u009d"+
		"\u009e\3\2\2\2\u009e<\3\2\2\2\u009f\u009d\3\2\2\2\u00a0\u00a1\7.\2\2\u00a1"+
		">\3\2\2\2\u00a2\u00a3\7\61\2\2\u00a3\u00a4\7,\2\2\u00a4\u00a8\3\2\2\2"+
		"\u00a5\u00a7\13\2\2\2\u00a6\u00a5\3\2\2\2\u00a7\u00aa\3\2\2\2\u00a8\u00a9"+
		"\3\2\2\2\u00a8\u00a6\3\2\2\2\u00a9\u00ab\3\2\2\2\u00aa\u00a8\3\2\2\2\u00ab"+
		"\u00ac\7,\2\2\u00ac\u00ad\7\61\2\2\u00ad\u00ae\3\2\2\2\u00ae\u00af\b "+
		"\2\2\u00af@\3\2\2\2\u00b0\u00b4\7%\2\2\u00b1\u00b3\13\2\2\2\u00b2\u00b1"+
		"\3\2\2\2\u00b3\u00b6\3\2\2\2\u00b4\u00b5\3\2\2\2\u00b4\u00b2\3\2\2\2\u00b5"+
		"\u00b7\3\2\2\2\u00b6\u00b4\3\2\2\2\u00b7\u00b8\7\f\2\2\u00b8\u00b9\3\2"+
		"\2\2\u00b9\u00ba\b!\2\2\u00baB\3\2\2\2\u00bb\u00bc\t\5\2\2\u00bc\u00bd"+
		"\3\2\2\2\u00bd\u00be\b\"\3\2\u00beD\3\2\2\2\t\2\u0087\u008b\u0097\u009d"+
		"\u00a8\u00b4\4\b\2\2\2\3\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}