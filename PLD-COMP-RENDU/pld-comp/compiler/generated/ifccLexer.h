
// Generated from ifcc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  ifccLexer : public antlr4::Lexer {
public:
  enum {
    INT = 1, CHAR = 2, OPENPAR = 3, CLOSEPAR = 4, SEMICOLON = 5, OPENBRACKET = 6, 
    CLOSEBRACKET = 7, OPENSQBRACKETS = 8, CLOSESQBRACKETS = 9, EQUAL = 10, 
    PLUS = 11, MINUS = 12, MULTIPLY = 13, DIVIDE = 14, OPM = 15, OPA = 16, 
    EXCLA = 17, AND = 18, OR = 19, XOR = 20, RETURN = 21, CONST = 22, VAR = 23, 
    COMMA = 24, COMMENT = 25, DIRECTIVE = 26, WS = 27
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

