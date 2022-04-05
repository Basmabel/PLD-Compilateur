
// Generated from ifcc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  ifccLexer : public antlr4::Lexer {
public:
  enum {
    INT = 1, CHAR = 2, OPENPAR = 3, CLOSEPAR = 4, SEMICOLON = 5, OPENBRACKET = 6, 
    CLOSEBRACKET = 7, OPENSQBRACKETS = 8, CLOSESQBRACKETS = 9, ISEQUAL = 10, 
    ISDIFFERENT = 11, EQUAL = 12, GREATER = 13, SMALLER = 14, PLUS = 15, 
    MINUS = 16, MULTIPLY = 17, DIVIDE = 18, IF = 19, ELSE = 20, WHILE = 21, 
    OPM = 22, OPA = 23, EXCLA = 24, AND = 25, OR = 26, XOR = 27, RETURN = 28, 
    CONST = 29, VAR = 30, CHARACTER = 31, COMMA = 32, COMMENT = 33, DIRECTIVE = 34, 
    WS = 35
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

