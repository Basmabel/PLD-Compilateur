
// Generated from ifcc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  ifccLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, INT = 2, CHAR = 3, OPENPAR = 4, CLOSEPAR = 5, SEMICOLON = 6, 
    OPENBRACKET = 7, CLOSEBRACKET = 8, OPENSQBRACKETS = 9, CLOSESQBRACKETS = 10, 
    EQUAL = 11, PLUS = 12, MINUS = 13, MULTIPLY = 14, DIVIDE = 15, OPM = 16, 
    OPA = 17, EXCLA = 18, AND = 19, OR = 20, XOR = 21, RETURN = 22, CONST = 23, 
    VAR = 24, CHARACTER = 25, COMMA = 26, COMMENT = 27, DIRECTIVE = 28, 
    WS = 29
  };

  ifccLexer(antlr4::CharStream *input);
  ~ifccLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

