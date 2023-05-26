
// Generated from mygrammar.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime/antlr4-runtime.h"




class  mygrammarLexer : public antlr4::Lexer {
public:
  enum {
    INT = 1, DOUBLE = 2, SUB = 3, MUL = 4, ADD = 5, DIV = 6, SEP = 7, LBR = 8, 
    RBR = 9, WS = 10
  };

  explicit mygrammarLexer(antlr4::CharStream *input);

  ~mygrammarLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

