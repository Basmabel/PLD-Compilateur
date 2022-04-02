// Generated from /mnt/c/Users/salma/Documents/GitHub/PLD-Compilateur/PLD-COMP-RENDU/pld-comp/compiler/ifcc.g4 by ANTLR 4.8
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
	static { RuntimeMetaData.checkVersion("4.8", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, INT=2, CHAR=3, OPENPAR=4, CLOSEPAR=5, SEMICOLON=6, OPENBRACKET=7, 
		CLOSEBRACKET=8, EQUAL=9, PLUS=10, MINUS=11, MULTIPLY=12, DIVIDE=13, OPM=14, 
		OPA=15, RETURN=16, CONST=17, VAR=18, CHARACTER=19, COMMA=20, COMMENT=21, 
		DIRECTIVE=22, WS=23;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "INT", "CHAR", "OPENPAR", "CLOSEPAR", "SEMICOLON", "OPENBRACKET", 
			"CLOSEBRACKET", "EQUAL", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "OPM", 
			"OPA", "RETURN", "CONST", "VAR", "CHARACTER", "COMMA", "COMMENT", "DIRECTIVE", 
			"WS"
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
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\31\u0093\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\3\2"+
		"\3\2\3\2\3\2\3\2\3\3\3\3\3\3\3\3\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3\6\3\6\3"+
		"\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\13\3\13\3\f\3\f\3\r\3\r\3\16\3\16\3\17"+
		"\3\17\5\17V\n\17\3\20\3\20\5\20Z\n\20\3\21\3\21\3\21\3\21\3\21\3\21\3"+
		"\21\3\22\6\22d\n\22\r\22\16\22e\3\23\3\23\7\23j\n\23\f\23\16\23m\13\23"+
		"\3\24\3\24\5\24q\n\24\3\24\3\24\3\25\3\25\3\26\3\26\3\26\3\26\7\26{\n"+
		"\26\f\26\16\26~\13\26\3\26\3\26\3\26\3\26\3\26\3\27\3\27\7\27\u0087\n"+
		"\27\f\27\16\27\u008a\13\27\3\27\3\27\3\27\3\27\3\30\3\30\3\30\3\30\4|"+
		"\u0088\2\31\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33"+
		"\17\35\20\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\3\2\6\3\2\62;\5\2C\\"+
		"aac|\6\2\62;C\\aac|\5\2\13\f\17\17\"\"\2\u0099\2\3\3\2\2\2\2\5\3\2\2\2"+
		"\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3"+
		"\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2"+
		"\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2"+
		"\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\3\61\3\2\2\2\5\66\3\2"+
		"\2\2\7:\3\2\2\2\t?\3\2\2\2\13A\3\2\2\2\rC\3\2\2\2\17E\3\2\2\2\21G\3\2"+
		"\2\2\23I\3\2\2\2\25K\3\2\2\2\27M\3\2\2\2\31O\3\2\2\2\33Q\3\2\2\2\35U\3"+
		"\2\2\2\37Y\3\2\2\2![\3\2\2\2#c\3\2\2\2%g\3\2\2\2\'n\3\2\2\2)t\3\2\2\2"+
		"+v\3\2\2\2-\u0084\3\2\2\2/\u008f\3\2\2\2\61\62\7o\2\2\62\63\7c\2\2\63"+
		"\64\7k\2\2\64\65\7p\2\2\65\4\3\2\2\2\66\67\7k\2\2\678\7p\2\289\7v\2\2"+
		"9\6\3\2\2\2:;\7e\2\2;<\7j\2\2<=\7c\2\2=>\7t\2\2>\b\3\2\2\2?@\7*\2\2@\n"+
		"\3\2\2\2AB\7+\2\2B\f\3\2\2\2CD\7=\2\2D\16\3\2\2\2EF\7}\2\2F\20\3\2\2\2"+
		"GH\7\177\2\2H\22\3\2\2\2IJ\7?\2\2J\24\3\2\2\2KL\7-\2\2L\26\3\2\2\2MN\7"+
		"/\2\2N\30\3\2\2\2OP\7,\2\2P\32\3\2\2\2QR\7\61\2\2R\34\3\2\2\2SV\5\31\r"+
		"\2TV\5\33\16\2US\3\2\2\2UT\3\2\2\2V\36\3\2\2\2WZ\5\25\13\2XZ\5\27\f\2"+
		"YW\3\2\2\2YX\3\2\2\2Z \3\2\2\2[\\\7t\2\2\\]\7g\2\2]^\7v\2\2^_\7w\2\2_"+
		"`\7t\2\2`a\7p\2\2a\"\3\2\2\2bd\t\2\2\2cb\3\2\2\2de\3\2\2\2ec\3\2\2\2e"+
		"f\3\2\2\2f$\3\2\2\2gk\t\3\2\2hj\t\4\2\2ih\3\2\2\2jm\3\2\2\2ki\3\2\2\2"+
		"kl\3\2\2\2l&\3\2\2\2mk\3\2\2\2np\7)\2\2oq\13\2\2\2po\3\2\2\2pq\3\2\2\2"+
		"qr\3\2\2\2rs\7)\2\2s(\3\2\2\2tu\7.\2\2u*\3\2\2\2vw\7\61\2\2wx\7,\2\2x"+
		"|\3\2\2\2y{\13\2\2\2zy\3\2\2\2{~\3\2\2\2|}\3\2\2\2|z\3\2\2\2}\177\3\2"+
		"\2\2~|\3\2\2\2\177\u0080\7,\2\2\u0080\u0081\7\61\2\2\u0081\u0082\3\2\2"+
		"\2\u0082\u0083\b\26\2\2\u0083,\3\2\2\2\u0084\u0088\7%\2\2\u0085\u0087"+
		"\13\2\2\2\u0086\u0085\3\2\2\2\u0087\u008a\3\2\2\2\u0088\u0089\3\2\2\2"+
		"\u0088\u0086\3\2\2\2\u0089\u008b\3\2\2\2\u008a\u0088\3\2\2\2\u008b\u008c"+
		"\7\f\2\2\u008c\u008d\3\2\2\2\u008d\u008e\b\27\2\2\u008e.\3\2\2\2\u008f"+
		"\u0090\t\5\2\2\u0090\u0091\3\2\2\2\u0091\u0092\b\30\3\2\u0092\60\3\2\2"+
		"\2\n\2UYekp|\u0088\4\b\2\2\2\3\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}