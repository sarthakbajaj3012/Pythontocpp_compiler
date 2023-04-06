
// Generated from Python.g4 by ANTLR 4.12.0


#include "PythonListener.h"

#include "PythonParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct PythonParserStaticData final {
  PythonParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PythonParserStaticData(const PythonParserStaticData&) = delete;
  PythonParserStaticData(PythonParserStaticData&&) = delete;
  PythonParserStaticData& operator=(const PythonParserStaticData&) = delete;
  PythonParserStaticData& operator=(PythonParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag pythonParserOnceFlag;
PythonParserStaticData *pythonParserStaticData = nullptr;

void pythonParserInitialize() {
  assert(pythonParserStaticData == nullptr);
  auto staticData = std::make_unique<PythonParserStaticData>(
    std::vector<std::string>{
      "program", "statement_list", "statement", "assignment_statement", 
      "if_statement", "while_statement", "function_statement", "return_statement", 
      "expression_statement", "expression", "term", "factor", "parameter_list", 
      "parameter"
    },
    std::vector<std::string>{
      "", "'='", "'if'", "':'", "'elif'", "'else'", "'while'", "'def'", 
      "'('", "')'", "'return'", "'+'", "'-'", "'*'", "'/'", "'%'", "','"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "NAME", "INTEGER", "FLOAT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,20,118,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,1,0,1,0,
  	1,1,1,1,1,1,1,1,1,1,5,1,36,8,1,10,1,12,1,39,9,1,1,2,1,2,1,2,1,2,1,2,1,
  	2,3,2,47,8,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,
  	7,1,8,1,8,1,9,1,9,1,9,5,9,86,8,9,10,9,12,9,89,9,9,1,10,1,10,1,10,5,10,
  	94,8,10,10,10,12,10,97,9,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,106,
  	8,11,1,12,1,12,1,12,5,12,111,8,12,10,12,12,12,114,9,12,1,13,1,13,1,13,
  	0,1,2,14,0,2,4,6,8,10,12,14,16,18,20,22,24,26,0,2,1,0,11,12,1,0,13,15,
  	115,0,28,1,0,0,0,2,30,1,0,0,0,4,46,1,0,0,0,6,48,1,0,0,0,8,52,1,0,0,0,
  	10,64,1,0,0,0,12,69,1,0,0,0,14,77,1,0,0,0,16,80,1,0,0,0,18,82,1,0,0,0,
  	20,90,1,0,0,0,22,105,1,0,0,0,24,107,1,0,0,0,26,115,1,0,0,0,28,29,3,2,
  	1,0,29,1,1,0,0,0,30,31,6,1,-1,0,31,32,3,4,2,0,32,37,1,0,0,0,33,34,10,
  	1,0,0,34,36,3,4,2,0,35,33,1,0,0,0,36,39,1,0,0,0,37,35,1,0,0,0,37,38,1,
  	0,0,0,38,3,1,0,0,0,39,37,1,0,0,0,40,47,3,6,3,0,41,47,3,8,4,0,42,47,3,
  	10,5,0,43,47,3,12,6,0,44,47,3,14,7,0,45,47,3,16,8,0,46,40,1,0,0,0,46,
  	41,1,0,0,0,46,42,1,0,0,0,46,43,1,0,0,0,46,44,1,0,0,0,46,45,1,0,0,0,47,
  	5,1,0,0,0,48,49,5,17,0,0,49,50,5,1,0,0,50,51,3,18,9,0,51,7,1,0,0,0,52,
  	53,5,2,0,0,53,54,3,18,9,0,54,55,5,3,0,0,55,56,3,2,1,0,56,57,5,4,0,0,57,
  	58,3,18,9,0,58,59,5,3,0,0,59,60,3,2,1,0,60,61,5,5,0,0,61,62,5,3,0,0,62,
  	63,3,2,1,0,63,9,1,0,0,0,64,65,5,6,0,0,65,66,3,18,9,0,66,67,5,3,0,0,67,
  	68,3,2,1,0,68,11,1,0,0,0,69,70,5,7,0,0,70,71,5,17,0,0,71,72,5,8,0,0,72,
  	73,3,24,12,0,73,74,5,9,0,0,74,75,5,3,0,0,75,76,3,2,1,0,76,13,1,0,0,0,
  	77,78,5,10,0,0,78,79,3,18,9,0,79,15,1,0,0,0,80,81,3,18,9,0,81,17,1,0,
  	0,0,82,87,3,20,10,0,83,84,7,0,0,0,84,86,3,20,10,0,85,83,1,0,0,0,86,89,
  	1,0,0,0,87,85,1,0,0,0,87,88,1,0,0,0,88,19,1,0,0,0,89,87,1,0,0,0,90,95,
  	3,22,11,0,91,92,7,1,0,0,92,94,3,22,11,0,93,91,1,0,0,0,94,97,1,0,0,0,95,
  	93,1,0,0,0,95,96,1,0,0,0,96,21,1,0,0,0,97,95,1,0,0,0,98,106,5,18,0,0,
  	99,106,5,19,0,0,100,106,5,17,0,0,101,102,5,8,0,0,102,103,3,18,9,0,103,
  	104,5,9,0,0,104,106,1,0,0,0,105,98,1,0,0,0,105,99,1,0,0,0,105,100,1,0,
  	0,0,105,101,1,0,0,0,106,23,1,0,0,0,107,112,3,26,13,0,108,109,5,16,0,0,
  	109,111,3,26,13,0,110,108,1,0,0,0,111,114,1,0,0,0,112,110,1,0,0,0,112,
  	113,1,0,0,0,113,25,1,0,0,0,114,112,1,0,0,0,115,116,5,17,0,0,116,27,1,
  	0,0,0,6,37,46,87,95,105,112
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  pythonParserStaticData = staticData.release();
}

}

PythonParser::PythonParser(TokenStream *input) : PythonParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

PythonParser::PythonParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  PythonParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *pythonParserStaticData->atn, pythonParserStaticData->decisionToDFA, pythonParserStaticData->sharedContextCache, options);
}

PythonParser::~PythonParser() {
  delete _interpreter;
}

const atn::ATN& PythonParser::getATN() const {
  return *pythonParserStaticData->atn;
}

std::string PythonParser::getGrammarFileName() const {
  return "Python.g4";
}

const std::vector<std::string>& PythonParser::getRuleNames() const {
  return pythonParserStaticData->ruleNames;
}

const dfa::Vocabulary& PythonParser::getVocabulary() const {
  return pythonParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView PythonParser::getSerializedATN() const {
  return pythonParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

PythonParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PythonParser::Statement_listContext* PythonParser::ProgramContext::statement_list() {
  return getRuleContext<PythonParser::Statement_listContext>(0);
}


size_t PythonParser::ProgramContext::getRuleIndex() const {
  return PythonParser::RuleProgram;
}

void PythonParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void PythonParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

PythonParser::ProgramContext* PythonParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, PythonParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    statement_list(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Statement_listContext ------------------------------------------------------------------

PythonParser::Statement_listContext::Statement_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PythonParser::StatementContext* PythonParser::Statement_listContext::statement() {
  return getRuleContext<PythonParser::StatementContext>(0);
}

PythonParser::Statement_listContext* PythonParser::Statement_listContext::statement_list() {
  return getRuleContext<PythonParser::Statement_listContext>(0);
}


size_t PythonParser::Statement_listContext::getRuleIndex() const {
  return PythonParser::RuleStatement_list;
}

void PythonParser::Statement_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement_list(this);
}

void PythonParser::Statement_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement_list(this);
}


PythonParser::Statement_listContext* PythonParser::statement_list() {
   return statement_list(0);
}

PythonParser::Statement_listContext* PythonParser::statement_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PythonParser::Statement_listContext *_localctx = _tracker.createInstance<Statement_listContext>(_ctx, parentState);
  PythonParser::Statement_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, PythonParser::RuleStatement_list, precedence);

    

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
    setState(31);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(37);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Statement_listContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStatement_list);
        setState(33);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(34);
        statement(); 
      }
      setState(39);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

PythonParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PythonParser::Assignment_statementContext* PythonParser::StatementContext::assignment_statement() {
  return getRuleContext<PythonParser::Assignment_statementContext>(0);
}

PythonParser::If_statementContext* PythonParser::StatementContext::if_statement() {
  return getRuleContext<PythonParser::If_statementContext>(0);
}

PythonParser::While_statementContext* PythonParser::StatementContext::while_statement() {
  return getRuleContext<PythonParser::While_statementContext>(0);
}

PythonParser::Function_statementContext* PythonParser::StatementContext::function_statement() {
  return getRuleContext<PythonParser::Function_statementContext>(0);
}

PythonParser::Return_statementContext* PythonParser::StatementContext::return_statement() {
  return getRuleContext<PythonParser::Return_statementContext>(0);
}

PythonParser::Expression_statementContext* PythonParser::StatementContext::expression_statement() {
  return getRuleContext<PythonParser::Expression_statementContext>(0);
}


size_t PythonParser::StatementContext::getRuleIndex() const {
  return PythonParser::RuleStatement;
}

void PythonParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void PythonParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

PythonParser::StatementContext* PythonParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, PythonParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(46);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(40);
      assignment_statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(41);
      if_statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(42);
      while_statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(43);
      function_statement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(44);
      return_statement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(45);
      expression_statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_statementContext ------------------------------------------------------------------

PythonParser::Assignment_statementContext::Assignment_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PythonParser::Assignment_statementContext::NAME() {
  return getToken(PythonParser::NAME, 0);
}

PythonParser::ExpressionContext* PythonParser::Assignment_statementContext::expression() {
  return getRuleContext<PythonParser::ExpressionContext>(0);
}


size_t PythonParser::Assignment_statementContext::getRuleIndex() const {
  return PythonParser::RuleAssignment_statement;
}

void PythonParser::Assignment_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment_statement(this);
}

void PythonParser::Assignment_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment_statement(this);
}

PythonParser::Assignment_statementContext* PythonParser::assignment_statement() {
  Assignment_statementContext *_localctx = _tracker.createInstance<Assignment_statementContext>(_ctx, getState());
  enterRule(_localctx, 6, PythonParser::RuleAssignment_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(48);
    match(PythonParser::NAME);
    setState(49);
    match(PythonParser::T__0);
    setState(50);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statementContext ------------------------------------------------------------------

PythonParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PythonParser::ExpressionContext *> PythonParser::If_statementContext::expression() {
  return getRuleContexts<PythonParser::ExpressionContext>();
}

PythonParser::ExpressionContext* PythonParser::If_statementContext::expression(size_t i) {
  return getRuleContext<PythonParser::ExpressionContext>(i);
}

std::vector<PythonParser::Statement_listContext *> PythonParser::If_statementContext::statement_list() {
  return getRuleContexts<PythonParser::Statement_listContext>();
}

PythonParser::Statement_listContext* PythonParser::If_statementContext::statement_list(size_t i) {
  return getRuleContext<PythonParser::Statement_listContext>(i);
}


size_t PythonParser::If_statementContext::getRuleIndex() const {
  return PythonParser::RuleIf_statement;
}

void PythonParser::If_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement(this);
}

void PythonParser::If_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement(this);
}

PythonParser::If_statementContext* PythonParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 8, PythonParser::RuleIf_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    match(PythonParser::T__1);
    setState(53);
    expression();
    setState(54);
    match(PythonParser::T__2);
    setState(55);
    statement_list(0);
    setState(56);
    match(PythonParser::T__3);
    setState(57);
    expression();
    setState(58);
    match(PythonParser::T__2);
    setState(59);
    statement_list(0);
    setState(60);
    match(PythonParser::T__4);
    setState(61);
    match(PythonParser::T__2);
    setState(62);
    statement_list(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_statementContext ------------------------------------------------------------------

PythonParser::While_statementContext::While_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PythonParser::ExpressionContext* PythonParser::While_statementContext::expression() {
  return getRuleContext<PythonParser::ExpressionContext>(0);
}

PythonParser::Statement_listContext* PythonParser::While_statementContext::statement_list() {
  return getRuleContext<PythonParser::Statement_listContext>(0);
}


size_t PythonParser::While_statementContext::getRuleIndex() const {
  return PythonParser::RuleWhile_statement;
}

void PythonParser::While_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_statement(this);
}

void PythonParser::While_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_statement(this);
}

PythonParser::While_statementContext* PythonParser::while_statement() {
  While_statementContext *_localctx = _tracker.createInstance<While_statementContext>(_ctx, getState());
  enterRule(_localctx, 10, PythonParser::RuleWhile_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(PythonParser::T__5);
    setState(65);
    expression();
    setState(66);
    match(PythonParser::T__2);
    setState(67);
    statement_list(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_statementContext ------------------------------------------------------------------

PythonParser::Function_statementContext::Function_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PythonParser::Function_statementContext::NAME() {
  return getToken(PythonParser::NAME, 0);
}

PythonParser::Parameter_listContext* PythonParser::Function_statementContext::parameter_list() {
  return getRuleContext<PythonParser::Parameter_listContext>(0);
}

PythonParser::Statement_listContext* PythonParser::Function_statementContext::statement_list() {
  return getRuleContext<PythonParser::Statement_listContext>(0);
}


size_t PythonParser::Function_statementContext::getRuleIndex() const {
  return PythonParser::RuleFunction_statement;
}

void PythonParser::Function_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_statement(this);
}

void PythonParser::Function_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_statement(this);
}

PythonParser::Function_statementContext* PythonParser::function_statement() {
  Function_statementContext *_localctx = _tracker.createInstance<Function_statementContext>(_ctx, getState());
  enterRule(_localctx, 12, PythonParser::RuleFunction_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    match(PythonParser::T__6);
    setState(70);
    match(PythonParser::NAME);
    setState(71);
    match(PythonParser::T__7);
    setState(72);
    parameter_list();
    setState(73);
    match(PythonParser::T__8);
    setState(74);
    match(PythonParser::T__2);
    setState(75);
    statement_list(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_statementContext ------------------------------------------------------------------

PythonParser::Return_statementContext::Return_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PythonParser::ExpressionContext* PythonParser::Return_statementContext::expression() {
  return getRuleContext<PythonParser::ExpressionContext>(0);
}


size_t PythonParser::Return_statementContext::getRuleIndex() const {
  return PythonParser::RuleReturn_statement;
}

void PythonParser::Return_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_statement(this);
}

void PythonParser::Return_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_statement(this);
}

PythonParser::Return_statementContext* PythonParser::return_statement() {
  Return_statementContext *_localctx = _tracker.createInstance<Return_statementContext>(_ctx, getState());
  enterRule(_localctx, 14, PythonParser::RuleReturn_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
    match(PythonParser::T__9);
    setState(78);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expression_statementContext ------------------------------------------------------------------

PythonParser::Expression_statementContext::Expression_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PythonParser::ExpressionContext* PythonParser::Expression_statementContext::expression() {
  return getRuleContext<PythonParser::ExpressionContext>(0);
}


size_t PythonParser::Expression_statementContext::getRuleIndex() const {
  return PythonParser::RuleExpression_statement;
}

void PythonParser::Expression_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression_statement(this);
}

void PythonParser::Expression_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression_statement(this);
}

PythonParser::Expression_statementContext* PythonParser::expression_statement() {
  Expression_statementContext *_localctx = _tracker.createInstance<Expression_statementContext>(_ctx, getState());
  enterRule(_localctx, 16, PythonParser::RuleExpression_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

PythonParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PythonParser::TermContext *> PythonParser::ExpressionContext::term() {
  return getRuleContexts<PythonParser::TermContext>();
}

PythonParser::TermContext* PythonParser::ExpressionContext::term(size_t i) {
  return getRuleContext<PythonParser::TermContext>(i);
}


size_t PythonParser::ExpressionContext::getRuleIndex() const {
  return PythonParser::RuleExpression;
}

void PythonParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void PythonParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

PythonParser::ExpressionContext* PythonParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 18, PythonParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(82);
    term();
    setState(87);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(83);
        _la = _input->LA(1);
        if (!(_la == PythonParser::T__10

        || _la == PythonParser::T__11)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(84);
        term(); 
      }
      setState(89);
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

//----------------- TermContext ------------------------------------------------------------------

PythonParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PythonParser::FactorContext *> PythonParser::TermContext::factor() {
  return getRuleContexts<PythonParser::FactorContext>();
}

PythonParser::FactorContext* PythonParser::TermContext::factor(size_t i) {
  return getRuleContext<PythonParser::FactorContext>(i);
}


size_t PythonParser::TermContext::getRuleIndex() const {
  return PythonParser::RuleTerm;
}

void PythonParser::TermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerm(this);
}

void PythonParser::TermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerm(this);
}

PythonParser::TermContext* PythonParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 20, PythonParser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(90);
    factor();
    setState(95);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(91);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 57344) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(92);
        factor(); 
      }
      setState(97);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

PythonParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PythonParser::FactorContext::INTEGER() {
  return getToken(PythonParser::INTEGER, 0);
}

tree::TerminalNode* PythonParser::FactorContext::FLOAT() {
  return getToken(PythonParser::FLOAT, 0);
}

tree::TerminalNode* PythonParser::FactorContext::NAME() {
  return getToken(PythonParser::NAME, 0);
}

PythonParser::ExpressionContext* PythonParser::FactorContext::expression() {
  return getRuleContext<PythonParser::ExpressionContext>(0);
}


size_t PythonParser::FactorContext::getRuleIndex() const {
  return PythonParser::RuleFactor;
}

void PythonParser::FactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactor(this);
}

void PythonParser::FactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactor(this);
}

PythonParser::FactorContext* PythonParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 22, PythonParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(105);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PythonParser::INTEGER: {
        enterOuterAlt(_localctx, 1);
        setState(98);
        match(PythonParser::INTEGER);
        break;
      }

      case PythonParser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(99);
        match(PythonParser::FLOAT);
        break;
      }

      case PythonParser::NAME: {
        enterOuterAlt(_localctx, 3);
        setState(100);
        match(PythonParser::NAME);
        break;
      }

      case PythonParser::T__7: {
        enterOuterAlt(_localctx, 4);
        setState(101);
        match(PythonParser::T__7);
        setState(102);
        expression();
        setState(103);
        match(PythonParser::T__8);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parameter_listContext ------------------------------------------------------------------

PythonParser::Parameter_listContext::Parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PythonParser::ParameterContext *> PythonParser::Parameter_listContext::parameter() {
  return getRuleContexts<PythonParser::ParameterContext>();
}

PythonParser::ParameterContext* PythonParser::Parameter_listContext::parameter(size_t i) {
  return getRuleContext<PythonParser::ParameterContext>(i);
}


size_t PythonParser::Parameter_listContext::getRuleIndex() const {
  return PythonParser::RuleParameter_list;
}

void PythonParser::Parameter_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter_list(this);
}

void PythonParser::Parameter_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter_list(this);
}

PythonParser::Parameter_listContext* PythonParser::parameter_list() {
  Parameter_listContext *_localctx = _tracker.createInstance<Parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 24, PythonParser::RuleParameter_list);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    parameter();
    setState(112);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PythonParser::T__15) {
      setState(108);
      match(PythonParser::T__15);
      setState(109);
      parameter();
      setState(114);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

PythonParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PythonParser::ParameterContext::NAME() {
  return getToken(PythonParser::NAME, 0);
}


size_t PythonParser::ParameterContext::getRuleIndex() const {
  return PythonParser::RuleParameter;
}

void PythonParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void PythonParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}

PythonParser::ParameterContext* PythonParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 26, PythonParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(PythonParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool PythonParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return statement_listSempred(antlrcpp::downCast<Statement_listContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool PythonParser::statement_listSempred(Statement_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void PythonParser::initialize() {
  ::antlr4::internal::call_once(pythonParserOnceFlag, pythonParserInitialize);
}
