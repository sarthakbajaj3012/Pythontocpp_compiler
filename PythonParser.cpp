
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
      "if_statement", "comparison", "elif", "elseop", "conop", "while_statement", 
      "function_statement", "return_statement", "expression_statement", 
      "addop", "mulop", "print", "expression", "term", "factor", "parameter_list", 
      "parameter"
    },
    std::vector<std::string>{
      "", "'='", "'if'", "':'", "'<<INDENT>>'", "'<<DEDENT>>'", "'elif'", 
      "'else'", "'>='", "'>'", "'<'", "'<='", "'=='", "'!='", "'in'", "'while'", 
      "'def'", "'('", "')'", "'return'", "'+'", "'-'", "'*'", "'/'", "'%'", 
      "'print('", "','"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "NAME", "INTEGER", "FLOAT", 
      "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,30,173,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,1,
  	0,1,1,1,1,1,1,1,1,1,1,5,1,50,8,1,10,1,12,1,53,9,1,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,3,2,62,8,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,5,4,75,
  	8,4,10,4,12,4,78,9,4,1,4,3,4,81,8,4,1,5,1,5,1,5,1,5,3,5,87,8,5,1,6,1,
  	6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,9,1,9,1,9,1,9,
  	1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,
  	11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,15,1,15,1,16,1,16,1,
  	16,1,16,5,16,138,8,16,10,16,12,16,141,9,16,1,17,1,17,1,17,1,17,5,17,147,
  	8,17,10,17,12,17,150,9,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,3,18,159,
  	8,18,1,19,1,19,1,19,5,19,164,8,19,10,19,12,19,167,9,19,3,19,169,8,19,
  	1,20,1,20,1,20,0,1,2,21,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,
  	34,36,38,40,0,3,1,0,8,14,1,0,20,21,1,0,22,24,168,0,42,1,0,0,0,2,44,1,
  	0,0,0,4,61,1,0,0,0,6,63,1,0,0,0,8,67,1,0,0,0,10,82,1,0,0,0,12,88,1,0,
  	0,0,14,95,1,0,0,0,16,101,1,0,0,0,18,103,1,0,0,0,20,110,1,0,0,0,22,120,
  	1,0,0,0,24,123,1,0,0,0,26,125,1,0,0,0,28,127,1,0,0,0,30,129,1,0,0,0,32,
  	133,1,0,0,0,34,142,1,0,0,0,36,158,1,0,0,0,38,168,1,0,0,0,40,170,1,0,0,
  	0,42,43,3,2,1,0,43,1,1,0,0,0,44,45,6,1,-1,0,45,46,3,4,2,0,46,51,1,0,0,
  	0,47,48,10,1,0,0,48,50,3,4,2,0,49,47,1,0,0,0,50,53,1,0,0,0,51,49,1,0,
  	0,0,51,52,1,0,0,0,52,3,1,0,0,0,53,51,1,0,0,0,54,62,3,6,3,0,55,62,3,8,
  	4,0,56,62,3,18,9,0,57,62,3,20,10,0,58,62,3,22,11,0,59,62,3,30,15,0,60,
  	62,3,24,12,0,61,54,1,0,0,0,61,55,1,0,0,0,61,56,1,0,0,0,61,57,1,0,0,0,
  	61,58,1,0,0,0,61,59,1,0,0,0,61,60,1,0,0,0,62,5,1,0,0,0,63,64,5,27,0,0,
  	64,65,5,1,0,0,65,66,3,32,16,0,66,7,1,0,0,0,67,68,5,2,0,0,68,69,3,10,5,
  	0,69,70,5,3,0,0,70,71,5,4,0,0,71,72,3,2,1,0,72,76,5,5,0,0,73,75,3,12,
  	6,0,74,73,1,0,0,0,75,78,1,0,0,0,76,74,1,0,0,0,76,77,1,0,0,0,77,80,1,0,
  	0,0,78,76,1,0,0,0,79,81,3,14,7,0,80,79,1,0,0,0,80,81,1,0,0,0,81,9,1,0,
  	0,0,82,86,3,32,16,0,83,84,3,16,8,0,84,85,3,32,16,0,85,87,1,0,0,0,86,83,
  	1,0,0,0,86,87,1,0,0,0,87,11,1,0,0,0,88,89,5,6,0,0,89,90,3,10,5,0,90,91,
  	5,3,0,0,91,92,5,4,0,0,92,93,3,2,1,0,93,94,5,5,0,0,94,13,1,0,0,0,95,96,
  	5,7,0,0,96,97,5,3,0,0,97,98,5,4,0,0,98,99,3,2,1,0,99,100,5,5,0,0,100,
  	15,1,0,0,0,101,102,7,0,0,0,102,17,1,0,0,0,103,104,5,15,0,0,104,105,3,
  	10,5,0,105,106,5,3,0,0,106,107,5,4,0,0,107,108,3,2,1,0,108,109,5,5,0,
  	0,109,19,1,0,0,0,110,111,5,16,0,0,111,112,5,27,0,0,112,113,5,17,0,0,113,
  	114,3,38,19,0,114,115,5,18,0,0,115,116,5,3,0,0,116,117,5,4,0,0,117,118,
  	3,2,1,0,118,119,5,5,0,0,119,21,1,0,0,0,120,121,5,19,0,0,121,122,3,32,
  	16,0,122,23,1,0,0,0,123,124,3,32,16,0,124,25,1,0,0,0,125,126,7,1,0,0,
  	126,27,1,0,0,0,127,128,7,2,0,0,128,29,1,0,0,0,129,130,5,25,0,0,130,131,
  	5,27,0,0,131,132,5,18,0,0,132,31,1,0,0,0,133,139,3,34,17,0,134,135,3,
  	26,13,0,135,136,3,34,17,0,136,138,1,0,0,0,137,134,1,0,0,0,138,141,1,0,
  	0,0,139,137,1,0,0,0,139,140,1,0,0,0,140,33,1,0,0,0,141,139,1,0,0,0,142,
  	148,3,36,18,0,143,144,3,28,14,0,144,145,3,36,18,0,145,147,1,0,0,0,146,
  	143,1,0,0,0,147,150,1,0,0,0,148,146,1,0,0,0,148,149,1,0,0,0,149,35,1,
  	0,0,0,150,148,1,0,0,0,151,159,5,28,0,0,152,159,5,29,0,0,153,159,5,27,
  	0,0,154,155,5,17,0,0,155,156,3,32,16,0,156,157,5,18,0,0,157,159,1,0,0,
  	0,158,151,1,0,0,0,158,152,1,0,0,0,158,153,1,0,0,0,158,154,1,0,0,0,159,
  	37,1,0,0,0,160,165,3,40,20,0,161,162,5,26,0,0,162,164,3,40,20,0,163,161,
  	1,0,0,0,164,167,1,0,0,0,165,163,1,0,0,0,165,166,1,0,0,0,166,169,1,0,0,
  	0,167,165,1,0,0,0,168,160,1,0,0,0,168,169,1,0,0,0,169,39,1,0,0,0,170,
  	171,5,27,0,0,171,41,1,0,0,0,10,51,61,76,80,86,139,148,158,165,168
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
    setState(42);
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
    setState(45);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(51);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Statement_listContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStatement_list);
        setState(47);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(48);
        statement(); 
      }
      setState(53);
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

PythonParser::PrintContext* PythonParser::StatementContext::print() {
  return getRuleContext<PythonParser::PrintContext>(0);
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
    setState(61);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(54);
      assignment_statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(55);
      if_statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(56);
      while_statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(57);
      function_statement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(58);
      return_statement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(59);
      print();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(60);
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
    setState(63);
    match(PythonParser::NAME);
    setState(64);
    match(PythonParser::T__0);
    setState(65);
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

PythonParser::ComparisonContext* PythonParser::If_statementContext::comparison() {
  return getRuleContext<PythonParser::ComparisonContext>(0);
}

PythonParser::Statement_listContext* PythonParser::If_statementContext::statement_list() {
  return getRuleContext<PythonParser::Statement_listContext>(0);
}

std::vector<PythonParser::ElifContext *> PythonParser::If_statementContext::elif() {
  return getRuleContexts<PythonParser::ElifContext>();
}

PythonParser::ElifContext* PythonParser::If_statementContext::elif(size_t i) {
  return getRuleContext<PythonParser::ElifContext>(i);
}

PythonParser::ElseopContext* PythonParser::If_statementContext::elseop() {
  return getRuleContext<PythonParser::ElseopContext>(0);
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
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(67);
    match(PythonParser::T__1);
    setState(68);
    comparison();
    setState(69);
    match(PythonParser::T__2);
    setState(70);
    match(PythonParser::T__3);
    setState(71);
    statement_list(0);
    setState(72);
    match(PythonParser::T__4);
    setState(76);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(73);
        elif(); 
      }
      setState(78);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
    setState(80);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(79);
      elseop();
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

//----------------- ComparisonContext ------------------------------------------------------------------

PythonParser::ComparisonContext::ComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PythonParser::ExpressionContext *> PythonParser::ComparisonContext::expression() {
  return getRuleContexts<PythonParser::ExpressionContext>();
}

PythonParser::ExpressionContext* PythonParser::ComparisonContext::expression(size_t i) {
  return getRuleContext<PythonParser::ExpressionContext>(i);
}

PythonParser::ConopContext* PythonParser::ComparisonContext::conop() {
  return getRuleContext<PythonParser::ConopContext>(0);
}


size_t PythonParser::ComparisonContext::getRuleIndex() const {
  return PythonParser::RuleComparison;
}

void PythonParser::ComparisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison(this);
}

void PythonParser::ComparisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison(this);
}

PythonParser::ComparisonContext* PythonParser::comparison() {
  ComparisonContext *_localctx = _tracker.createInstance<ComparisonContext>(_ctx, getState());
  enterRule(_localctx, 10, PythonParser::RuleComparison);
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
    setState(82);
    expression();
    setState(86);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32512) != 0)) {
      setState(83);
      conop();
      setState(84);
      expression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElifContext ------------------------------------------------------------------

PythonParser::ElifContext::ElifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PythonParser::ComparisonContext* PythonParser::ElifContext::comparison() {
  return getRuleContext<PythonParser::ComparisonContext>(0);
}

PythonParser::Statement_listContext* PythonParser::ElifContext::statement_list() {
  return getRuleContext<PythonParser::Statement_listContext>(0);
}


size_t PythonParser::ElifContext::getRuleIndex() const {
  return PythonParser::RuleElif;
}

void PythonParser::ElifContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElif(this);
}

void PythonParser::ElifContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElif(this);
}

PythonParser::ElifContext* PythonParser::elif() {
  ElifContext *_localctx = _tracker.createInstance<ElifContext>(_ctx, getState());
  enterRule(_localctx, 12, PythonParser::RuleElif);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(PythonParser::T__5);
    setState(89);
    comparison();
    setState(90);
    match(PythonParser::T__2);
    setState(91);
    match(PythonParser::T__3);
    setState(92);
    statement_list(0);
    setState(93);
    match(PythonParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseopContext ------------------------------------------------------------------

PythonParser::ElseopContext::ElseopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PythonParser::Statement_listContext* PythonParser::ElseopContext::statement_list() {
  return getRuleContext<PythonParser::Statement_listContext>(0);
}


size_t PythonParser::ElseopContext::getRuleIndex() const {
  return PythonParser::RuleElseop;
}

void PythonParser::ElseopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseop(this);
}

void PythonParser::ElseopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseop(this);
}

PythonParser::ElseopContext* PythonParser::elseop() {
  ElseopContext *_localctx = _tracker.createInstance<ElseopContext>(_ctx, getState());
  enterRule(_localctx, 14, PythonParser::RuleElseop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    match(PythonParser::T__6);
    setState(96);
    match(PythonParser::T__2);
    setState(97);
    match(PythonParser::T__3);
    setState(98);
    statement_list(0);
    setState(99);
    match(PythonParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConopContext ------------------------------------------------------------------

PythonParser::ConopContext::ConopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PythonParser::ConopContext::getRuleIndex() const {
  return PythonParser::RuleConop;
}

void PythonParser::ConopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConop(this);
}

void PythonParser::ConopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConop(this);
}

PythonParser::ConopContext* PythonParser::conop() {
  ConopContext *_localctx = _tracker.createInstance<ConopContext>(_ctx, getState());
  enterRule(_localctx, 16, PythonParser::RuleConop);
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
    setState(101);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 32512) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
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

PythonParser::ComparisonContext* PythonParser::While_statementContext::comparison() {
  return getRuleContext<PythonParser::ComparisonContext>(0);
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
  enterRule(_localctx, 18, PythonParser::RuleWhile_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    match(PythonParser::T__14);
    setState(104);
    comparison();
    setState(105);
    match(PythonParser::T__2);
    setState(106);
    match(PythonParser::T__3);
    setState(107);
    statement_list(0);
    setState(108);
    match(PythonParser::T__4);
   
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
  enterRule(_localctx, 20, PythonParser::RuleFunction_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(110);
    match(PythonParser::T__15);
    setState(111);
    match(PythonParser::NAME);
    setState(112);
    match(PythonParser::T__16);
    setState(113);
    parameter_list();
    setState(114);
    match(PythonParser::T__17);
    setState(115);
    match(PythonParser::T__2);
    setState(116);
    match(PythonParser::T__3);
    setState(117);
    statement_list(0);
    setState(118);
    match(PythonParser::T__4);
   
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
  enterRule(_localctx, 22, PythonParser::RuleReturn_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    match(PythonParser::T__18);
    setState(121);
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
  enterRule(_localctx, 24, PythonParser::RuleExpression_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    expression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddopContext ------------------------------------------------------------------

PythonParser::AddopContext::AddopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PythonParser::AddopContext::getRuleIndex() const {
  return PythonParser::RuleAddop;
}

void PythonParser::AddopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddop(this);
}

void PythonParser::AddopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddop(this);
}

PythonParser::AddopContext* PythonParser::addop() {
  AddopContext *_localctx = _tracker.createInstance<AddopContext>(_ctx, getState());
  enterRule(_localctx, 26, PythonParser::RuleAddop);
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
    setState(125);
    _la = _input->LA(1);
    if (!(_la == PythonParser::T__19

    || _la == PythonParser::T__20)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulopContext ------------------------------------------------------------------

PythonParser::MulopContext::MulopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PythonParser::MulopContext::getRuleIndex() const {
  return PythonParser::RuleMulop;
}

void PythonParser::MulopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulop(this);
}

void PythonParser::MulopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulop(this);
}

PythonParser::MulopContext* PythonParser::mulop() {
  MulopContext *_localctx = _tracker.createInstance<MulopContext>(_ctx, getState());
  enterRule(_localctx, 28, PythonParser::RuleMulop);
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
    setState(127);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 29360128) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

PythonParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PythonParser::PrintContext::NAME() {
  return getToken(PythonParser::NAME, 0);
}


size_t PythonParser::PrintContext::getRuleIndex() const {
  return PythonParser::RulePrint;
}

void PythonParser::PrintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint(this);
}

void PythonParser::PrintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint(this);
}

PythonParser::PrintContext* PythonParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 30, PythonParser::RulePrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    match(PythonParser::T__24);
    setState(130);
    match(PythonParser::NAME);
    setState(131);
    match(PythonParser::T__17);
   
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

std::vector<PythonParser::AddopContext *> PythonParser::ExpressionContext::addop() {
  return getRuleContexts<PythonParser::AddopContext>();
}

PythonParser::AddopContext* PythonParser::ExpressionContext::addop(size_t i) {
  return getRuleContext<PythonParser::AddopContext>(i);
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
  enterRule(_localctx, 32, PythonParser::RuleExpression);

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
    setState(133);
    term();
    setState(139);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(134);
        addop();
        setState(135);
        term(); 
      }
      setState(141);
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

std::vector<PythonParser::MulopContext *> PythonParser::TermContext::mulop() {
  return getRuleContexts<PythonParser::MulopContext>();
}

PythonParser::MulopContext* PythonParser::TermContext::mulop(size_t i) {
  return getRuleContext<PythonParser::MulopContext>(i);
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
  enterRule(_localctx, 34, PythonParser::RuleTerm);

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
    setState(142);
    factor();
    setState(148);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(143);
        mulop();
        setState(144);
        factor(); 
      }
      setState(150);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
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
  enterRule(_localctx, 36, PythonParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(158);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PythonParser::INTEGER: {
        enterOuterAlt(_localctx, 1);
        setState(151);
        match(PythonParser::INTEGER);
        break;
      }

      case PythonParser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(152);
        match(PythonParser::FLOAT);
        break;
      }

      case PythonParser::NAME: {
        enterOuterAlt(_localctx, 3);
        setState(153);
        match(PythonParser::NAME);
        break;
      }

      case PythonParser::T__16: {
        enterOuterAlt(_localctx, 4);
        setState(154);
        match(PythonParser::T__16);
        setState(155);
        expression();
        setState(156);
        match(PythonParser::T__17);
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
  enterRule(_localctx, 38, PythonParser::RuleParameter_list);
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
    setState(168);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PythonParser::NAME) {
      setState(160);
      parameter();
      setState(165);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PythonParser::T__25) {
        setState(161);
        match(PythonParser::T__25);
        setState(162);
        parameter();
        setState(167);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
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
  enterRule(_localctx, 40, PythonParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
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
