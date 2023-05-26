
// Generated from mygrammar.g4 by ANTLR 4.13.0


#include "mygrammarVisitor.h"

#include "mygrammarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MygrammarParserStaticData final {
  MygrammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MygrammarParserStaticData(const MygrammarParserStaticData&) = delete;
  MygrammarParserStaticData(MygrammarParserStaticData&&) = delete;
  MygrammarParserStaticData& operator=(const MygrammarParserStaticData&) = delete;
  MygrammarParserStaticData& operator=(MygrammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mygrammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
MygrammarParserStaticData *mygrammarParserStaticData = nullptr;

void mygrammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mygrammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(mygrammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MygrammarParserStaticData>(
    std::vector<std::string>{
      "expr", "row", "prog"
    },
    std::vector<std::string>{
      "", "", "", "'-'", "'*'", "'+'", "'/'", "';'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "INT", "DOUBLE", "SUB", "MUL", "ADD", "DIV", "SEP", "LBR", "RBR", 
      "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,10,45,2,0,7,0,2,1,7,1,2,2,7,2,1,0,1,0,1,0,1,0,1,0,1,0,1,0,3,0,14,
  	8,0,1,0,1,0,1,0,1,0,1,0,1,0,5,0,22,8,0,10,0,12,0,25,9,0,1,1,1,1,1,1,1,
  	2,1,2,1,2,3,2,33,8,2,1,2,1,2,1,2,3,2,38,8,2,5,2,40,8,2,10,2,12,2,43,9,
  	2,1,2,0,2,0,4,3,0,2,4,0,2,2,0,4,4,6,6,2,0,3,3,5,5,48,0,13,1,0,0,0,2,26,
  	1,0,0,0,4,29,1,0,0,0,6,7,6,0,-1,0,7,8,5,8,0,0,8,9,3,0,0,0,9,10,5,9,0,
  	0,10,14,1,0,0,0,11,14,5,1,0,0,12,14,5,2,0,0,13,6,1,0,0,0,13,11,1,0,0,
  	0,13,12,1,0,0,0,14,23,1,0,0,0,15,16,10,5,0,0,16,17,7,0,0,0,17,22,3,0,
  	0,6,18,19,10,4,0,0,19,20,7,1,0,0,20,22,3,0,0,5,21,15,1,0,0,0,21,18,1,
  	0,0,0,22,25,1,0,0,0,23,21,1,0,0,0,23,24,1,0,0,0,24,1,1,0,0,0,25,23,1,
  	0,0,0,26,27,3,0,0,0,27,28,5,7,0,0,28,3,1,0,0,0,29,30,6,2,-1,0,30,32,3,
  	2,1,0,31,33,5,0,0,1,32,31,1,0,0,0,32,33,1,0,0,0,33,41,1,0,0,0,34,35,10,
  	1,0,0,35,37,3,2,1,0,36,38,5,0,0,1,37,36,1,0,0,0,37,38,1,0,0,0,38,40,1,
  	0,0,0,39,34,1,0,0,0,40,43,1,0,0,0,41,39,1,0,0,0,41,42,1,0,0,0,42,5,1,
  	0,0,0,43,41,1,0,0,0,6,13,21,23,32,37,41
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mygrammarParserStaticData = staticData.release();
}

}

mygrammarParser::mygrammarParser(TokenStream *input) : mygrammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

mygrammarParser::mygrammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  mygrammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *mygrammarParserStaticData->atn, mygrammarParserStaticData->decisionToDFA, mygrammarParserStaticData->sharedContextCache, options);
}

mygrammarParser::~mygrammarParser() {
  delete _interpreter;
}

const atn::ATN& mygrammarParser::getATN() const {
  return *mygrammarParserStaticData->atn;
}

std::string mygrammarParser::getGrammarFileName() const {
  return "mygrammar.g4";
}

const std::vector<std::string>& mygrammarParser::getRuleNames() const {
  return mygrammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& mygrammarParser::getVocabulary() const {
  return mygrammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView mygrammarParser::getSerializedATN() const {
  return mygrammarParserStaticData->serializedATN;
}


//----------------- ExprContext ------------------------------------------------------------------

mygrammarParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::ExprContext::getRuleIndex() const {
  return mygrammarParser::RuleExpr;
}

void mygrammarParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LexprRContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::LexprRContext::LBR() {
  return getToken(mygrammarParser::LBR, 0);
}

mygrammarParser::ExprContext* mygrammarParser::LexprRContext::expr() {
  return getRuleContext<mygrammarParser::ExprContext>(0);
}

tree::TerminalNode* mygrammarParser::LexprRContext::RBR() {
  return getToken(mygrammarParser::RBR, 0);
}

mygrammarParser::LexprRContext::LexprRContext(ExprContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::LexprRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitLexprR(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DOUBLEContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::DOUBLEContext::DOUBLE() {
  return getToken(mygrammarParser::DOUBLE, 0);
}

mygrammarParser::DOUBLEContext::DOUBLEContext(ExprContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::DOUBLEContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitDOUBLE(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprADDexprContext ------------------------------------------------------------------

std::vector<mygrammarParser::ExprContext *> mygrammarParser::ExprADDexprContext::expr() {
  return getRuleContexts<mygrammarParser::ExprContext>();
}

mygrammarParser::ExprContext* mygrammarParser::ExprADDexprContext::expr(size_t i) {
  return getRuleContext<mygrammarParser::ExprContext>(i);
}

tree::TerminalNode* mygrammarParser::ExprADDexprContext::ADD() {
  return getToken(mygrammarParser::ADD, 0);
}

tree::TerminalNode* mygrammarParser::ExprADDexprContext::SUB() {
  return getToken(mygrammarParser::SUB, 0);
}

mygrammarParser::ExprADDexprContext::ExprADDexprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::ExprADDexprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitExprADDexpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprMULexprContext ------------------------------------------------------------------

std::vector<mygrammarParser::ExprContext *> mygrammarParser::ExprMULexprContext::expr() {
  return getRuleContexts<mygrammarParser::ExprContext>();
}

mygrammarParser::ExprContext* mygrammarParser::ExprMULexprContext::expr(size_t i) {
  return getRuleContext<mygrammarParser::ExprContext>(i);
}

tree::TerminalNode* mygrammarParser::ExprMULexprContext::MUL() {
  return getToken(mygrammarParser::MUL, 0);
}

tree::TerminalNode* mygrammarParser::ExprMULexprContext::DIV() {
  return getToken(mygrammarParser::DIV, 0);
}

mygrammarParser::ExprMULexprContext::ExprMULexprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::ExprMULexprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitExprMULexpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- INTEGERContext ------------------------------------------------------------------

tree::TerminalNode* mygrammarParser::INTEGERContext::INT() {
  return getToken(mygrammarParser::INT, 0);
}

mygrammarParser::INTEGERContext::INTEGERContext(ExprContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::INTEGERContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitINTEGER(this);
  else
    return visitor->visitChildren(this);
}

mygrammarParser::ExprContext* mygrammarParser::expr() {
   return expr(0);
}

mygrammarParser::ExprContext* mygrammarParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  mygrammarParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  mygrammarParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 0;
  enterRecursionRule(_localctx, 0, mygrammarParser::RuleExpr, precedence);

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
    setState(13);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case mygrammarParser::LBR: {
        _localctx = _tracker.createInstance<LexprRContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(7);
        match(mygrammarParser::LBR);
        setState(8);
        expr(0);
        setState(9);
        match(mygrammarParser::RBR);
        break;
      }

      case mygrammarParser::INT: {
        _localctx = _tracker.createInstance<INTEGERContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(11);
        match(mygrammarParser::INT);
        break;
      }

      case mygrammarParser::DOUBLE: {
        _localctx = _tracker.createInstance<DOUBLEContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(12);
        match(mygrammarParser::DOUBLE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(23);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(21);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExprMULexprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(15);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(16);
          _la = _input->LA(1);
          if (!(_la == mygrammarParser::MUL

          || _la == mygrammarParser::DIV)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(17);
          expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ExprADDexprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(18);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(19);
          _la = _input->LA(1);
          if (!(_la == mygrammarParser::SUB

          || _la == mygrammarParser::ADD)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(20);
          expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(25);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RowContext ------------------------------------------------------------------

mygrammarParser::RowContext::RowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::RowContext::getRuleIndex() const {
  return mygrammarParser::RuleRow;
}

void mygrammarParser::RowContext::copyFrom(RowContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_sepContext ------------------------------------------------------------------

mygrammarParser::ExprContext* mygrammarParser::Expr_sepContext::expr() {
  return getRuleContext<mygrammarParser::ExprContext>(0);
}

tree::TerminalNode* mygrammarParser::Expr_sepContext::SEP() {
  return getToken(mygrammarParser::SEP, 0);
}

mygrammarParser::Expr_sepContext::Expr_sepContext(RowContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::Expr_sepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitExpr_sep(this);
  else
    return visitor->visitChildren(this);
}
mygrammarParser::RowContext* mygrammarParser::row() {
  RowContext *_localctx = _tracker.createInstance<RowContext>(_ctx, getState());
  enterRule(_localctx, 2, mygrammarParser::RuleRow);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<mygrammarParser::Expr_sepContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(26);
    expr(0);
    setState(27);
    match(mygrammarParser::SEP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgContext ------------------------------------------------------------------

mygrammarParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mygrammarParser::ProgContext::getRuleIndex() const {
  return mygrammarParser::RuleProg;
}

void mygrammarParser::ProgContext::copyFrom(ProgContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Prog_rowContext ------------------------------------------------------------------

mygrammarParser::ProgContext* mygrammarParser::Prog_rowContext::prog() {
  return getRuleContext<mygrammarParser::ProgContext>(0);
}

mygrammarParser::RowContext* mygrammarParser::Prog_rowContext::row() {
  return getRuleContext<mygrammarParser::RowContext>(0);
}

tree::TerminalNode* mygrammarParser::Prog_rowContext::EOF() {
  return getToken(mygrammarParser::EOF, 0);
}

mygrammarParser::Prog_rowContext::Prog_rowContext(ProgContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::Prog_rowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitProg_row(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OneLineProgContext ------------------------------------------------------------------

mygrammarParser::RowContext* mygrammarParser::OneLineProgContext::row() {
  return getRuleContext<mygrammarParser::RowContext>(0);
}

tree::TerminalNode* mygrammarParser::OneLineProgContext::EOF() {
  return getToken(mygrammarParser::EOF, 0);
}

mygrammarParser::OneLineProgContext::OneLineProgContext(ProgContext *ctx) { copyFrom(ctx); }


std::any mygrammarParser::OneLineProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<mygrammarVisitor*>(visitor))
    return parserVisitor->visitOneLineProg(this);
  else
    return visitor->visitChildren(this);
}

mygrammarParser::ProgContext* mygrammarParser::prog() {
   return prog(0);
}

mygrammarParser::ProgContext* mygrammarParser::prog(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  mygrammarParser::ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, parentState);
  mygrammarParser::ProgContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, mygrammarParser::RuleProg, precedence);

    

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
    _localctx = _tracker.createInstance<OneLineProgContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(30);
    row();
    setState(32);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(31);
      match(mygrammarParser::EOF);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(41);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Prog_rowContext>(_tracker.createInstance<ProgContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleProg);
        setState(34);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(35);
        row();
        setState(37);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          setState(36);
          match(mygrammarParser::EOF);
          break;
        }

        default:
          break;
        } 
      }
      setState(43);
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

bool mygrammarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 0: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);
    case 2: return progSempred(antlrcpp::downCast<ProgContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool mygrammarParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool mygrammarParser::progSempred(ProgContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void mygrammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mygrammarParserInitialize();
#else
  ::antlr4::internal::call_once(mygrammarParserOnceFlag, mygrammarParserInitialize);
#endif
}
