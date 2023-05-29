
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
      "if_statement", "comparison", "elif", "elseop", "functioncall", "conop", 
      "range", "for_statement", "while_statement", "function_statement", 
      "return_statement", "expression_statement", "addop", "mulop", "print", 
      "expression", "term", "factor", "parameter_list", "parameter"
    },
    std::vector<std::string>{
      "", "'='", "'if'", "'('", "')'", "':'", "'<<INDENT>>'", "'<<DEDENT>>'", 
      "'elif'", "'else'", "'>='", "'>'", "'<'", "'<='", "'=='", "'!='", 
      "'range'", "','", "'for'", "'in'", "'while'", "'def'", "'return'", 
      "'+'", "'-'", "'*'", "'/'", "'%'", "'print('"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "NAME", "INTEGER", 
      "FLOAT", "STRING_LITERAL", "ESC", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,34,221,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,1,0,1,0,1,1,1,1,1,1,1,1,1,1,5,1,56,8,1,10,1,12,
  	1,59,9,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,69,8,2,1,3,1,3,1,3,1,3,1,
  	4,1,4,3,4,77,8,4,1,4,1,4,3,4,81,8,4,1,4,1,4,1,4,1,4,1,4,5,4,88,8,4,10,
  	4,12,4,91,9,4,1,4,3,4,94,8,4,1,5,1,5,1,5,1,5,3,5,100,8,5,1,6,1,6,1,6,
  	1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,
  	10,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,3,11,135,
  	8,11,1,11,1,11,1,11,1,11,1,11,1,12,1,12,3,12,144,8,12,1,12,1,12,3,12,
  	148,8,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,13,1,14,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,
  	1,18,1,18,1,19,1,19,1,19,1,19,1,19,5,19,183,8,19,10,19,12,19,186,9,19,
  	3,19,188,8,19,1,20,1,20,1,20,1,20,5,20,194,8,20,10,20,12,20,197,9,20,
  	1,21,1,21,1,21,1,21,1,21,1,21,1,21,1,21,3,21,207,8,21,1,22,1,22,1,22,
  	5,22,212,8,22,10,22,12,22,215,9,22,3,22,217,8,22,1,23,1,23,1,23,0,1,2,
  	24,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,
  	0,4,1,0,10,15,1,0,23,24,1,0,25,27,1,0,29,32,222,0,48,1,0,0,0,2,50,1,0,
  	0,0,4,68,1,0,0,0,6,70,1,0,0,0,8,74,1,0,0,0,10,95,1,0,0,0,12,101,1,0,0,
  	0,14,108,1,0,0,0,16,114,1,0,0,0,18,119,1,0,0,0,20,121,1,0,0,0,22,128,
  	1,0,0,0,24,141,1,0,0,0,26,154,1,0,0,0,28,164,1,0,0,0,30,167,1,0,0,0,32,
  	169,1,0,0,0,34,171,1,0,0,0,36,173,1,0,0,0,38,187,1,0,0,0,40,189,1,0,0,
  	0,42,206,1,0,0,0,44,216,1,0,0,0,46,218,1,0,0,0,48,49,3,2,1,0,49,1,1,0,
  	0,0,50,51,6,1,-1,0,51,52,3,4,2,0,52,57,1,0,0,0,53,54,10,1,0,0,54,56,3,
  	4,2,0,55,53,1,0,0,0,56,59,1,0,0,0,57,55,1,0,0,0,57,58,1,0,0,0,58,3,1,
  	0,0,0,59,57,1,0,0,0,60,69,3,6,3,0,61,69,3,8,4,0,62,69,3,24,12,0,63,69,
  	3,26,13,0,64,69,3,28,14,0,65,69,3,36,18,0,66,69,3,22,11,0,67,69,3,30,
  	15,0,68,60,1,0,0,0,68,61,1,0,0,0,68,62,1,0,0,0,68,63,1,0,0,0,68,64,1,
  	0,0,0,68,65,1,0,0,0,68,66,1,0,0,0,68,67,1,0,0,0,69,5,1,0,0,0,70,71,5,
  	29,0,0,71,72,5,1,0,0,72,73,3,38,19,0,73,7,1,0,0,0,74,76,5,2,0,0,75,77,
  	5,3,0,0,76,75,1,0,0,0,76,77,1,0,0,0,77,78,1,0,0,0,78,80,3,10,5,0,79,81,
  	5,4,0,0,80,79,1,0,0,0,80,81,1,0,0,0,81,82,1,0,0,0,82,83,5,5,0,0,83,84,
  	5,6,0,0,84,85,3,2,1,0,85,89,5,7,0,0,86,88,3,12,6,0,87,86,1,0,0,0,88,91,
  	1,0,0,0,89,87,1,0,0,0,89,90,1,0,0,0,90,93,1,0,0,0,91,89,1,0,0,0,92,94,
  	3,14,7,0,93,92,1,0,0,0,93,94,1,0,0,0,94,9,1,0,0,0,95,99,3,38,19,0,96,
  	97,3,18,9,0,97,98,3,38,19,0,98,100,1,0,0,0,99,96,1,0,0,0,99,100,1,0,0,
  	0,100,11,1,0,0,0,101,102,5,8,0,0,102,103,3,10,5,0,103,104,5,5,0,0,104,
  	105,5,6,0,0,105,106,3,2,1,0,106,107,5,7,0,0,107,13,1,0,0,0,108,109,5,
  	9,0,0,109,110,5,5,0,0,110,111,5,6,0,0,111,112,3,2,1,0,112,113,5,7,0,0,
  	113,15,1,0,0,0,114,115,5,29,0,0,115,116,5,3,0,0,116,117,3,44,22,0,117,
  	118,5,4,0,0,118,17,1,0,0,0,119,120,7,0,0,0,120,19,1,0,0,0,121,122,5,16,
  	0,0,122,123,5,3,0,0,123,124,3,38,19,0,124,125,5,17,0,0,125,126,3,38,19,
  	0,126,127,5,4,0,0,127,21,1,0,0,0,128,129,5,18,0,0,129,130,5,29,0,0,130,
  	134,5,19,0,0,131,135,5,32,0,0,132,135,5,29,0,0,133,135,3,20,10,0,134,
  	131,1,0,0,0,134,132,1,0,0,0,134,133,1,0,0,0,135,136,1,0,0,0,136,137,5,
  	5,0,0,137,138,5,6,0,0,138,139,3,2,1,0,139,140,5,7,0,0,140,23,1,0,0,0,
  	141,143,5,20,0,0,142,144,5,3,0,0,143,142,1,0,0,0,143,144,1,0,0,0,144,
  	145,1,0,0,0,145,147,3,10,5,0,146,148,5,4,0,0,147,146,1,0,0,0,147,148,
  	1,0,0,0,148,149,1,0,0,0,149,150,5,5,0,0,150,151,5,6,0,0,151,152,3,2,1,
  	0,152,153,5,7,0,0,153,25,1,0,0,0,154,155,5,21,0,0,155,156,5,29,0,0,156,
  	157,5,3,0,0,157,158,3,44,22,0,158,159,5,4,0,0,159,160,5,5,0,0,160,161,
  	5,6,0,0,161,162,3,2,1,0,162,163,5,7,0,0,163,27,1,0,0,0,164,165,5,22,0,
  	0,165,166,3,38,19,0,166,29,1,0,0,0,167,168,3,38,19,0,168,31,1,0,0,0,169,
  	170,7,1,0,0,170,33,1,0,0,0,171,172,7,2,0,0,172,35,1,0,0,0,173,174,5,28,
  	0,0,174,175,7,3,0,0,175,176,5,4,0,0,176,37,1,0,0,0,177,188,3,16,8,0,178,
  	184,3,40,20,0,179,180,3,32,16,0,180,181,3,40,20,0,181,183,1,0,0,0,182,
  	179,1,0,0,0,183,186,1,0,0,0,184,182,1,0,0,0,184,185,1,0,0,0,185,188,1,
  	0,0,0,186,184,1,0,0,0,187,177,1,0,0,0,187,178,1,0,0,0,188,39,1,0,0,0,
  	189,195,3,42,21,0,190,191,3,34,17,0,191,192,3,42,21,0,192,194,1,0,0,0,
  	193,190,1,0,0,0,194,197,1,0,0,0,195,193,1,0,0,0,195,196,1,0,0,0,196,41,
  	1,0,0,0,197,195,1,0,0,0,198,207,5,30,0,0,199,207,5,31,0,0,200,207,5,29,
  	0,0,201,207,5,32,0,0,202,203,5,3,0,0,203,204,3,38,19,0,204,205,5,4,0,
  	0,205,207,1,0,0,0,206,198,1,0,0,0,206,199,1,0,0,0,206,200,1,0,0,0,206,
  	201,1,0,0,0,206,202,1,0,0,0,207,43,1,0,0,0,208,213,3,46,23,0,209,210,
  	5,17,0,0,210,212,3,46,23,0,211,209,1,0,0,0,212,215,1,0,0,0,213,211,1,
  	0,0,0,213,214,1,0,0,0,214,217,1,0,0,0,215,213,1,0,0,0,216,208,1,0,0,0,
  	216,217,1,0,0,0,217,45,1,0,0,0,218,219,3,38,19,0,219,47,1,0,0,0,16,57,
  	68,76,80,89,93,99,134,143,147,184,187,195,206,213,216
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
    setState(48);
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
    setState(51);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(57);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Statement_listContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStatement_list);
        setState(53);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(54);
        statement(); 
      }
      setState(59);
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

PythonParser::For_statementContext* PythonParser::StatementContext::for_statement() {
  return getRuleContext<PythonParser::For_statementContext>(0);
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
    setState(68);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(60);
      assignment_statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(61);
      if_statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(62);
      while_statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(63);
      function_statement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(64);
      return_statement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(65);
      print();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(66);
      for_statement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(67);
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
    setState(70);
    match(PythonParser::NAME);
    setState(71);
    match(PythonParser::T__0);
    setState(72);
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
    setState(74);
    match(PythonParser::T__1);
    setState(76);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(75);
      match(PythonParser::T__2);
      break;
    }

    default:
      break;
    }
    setState(78);
    comparison();
    setState(80);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PythonParser::T__3) {
      setState(79);
      match(PythonParser::T__3);
    }
    setState(82);
    match(PythonParser::T__4);
    setState(83);
    match(PythonParser::T__5);
    setState(84);
    statement_list(0);
    setState(85);
    match(PythonParser::T__6);
    setState(89);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(86);
        elif(); 
      }
      setState(91);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
    setState(93);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(92);
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
    setState(95);
    expression();
    setState(99);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 64512) != 0)) {
      setState(96);
      conop();
      setState(97);
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
    setState(101);
    match(PythonParser::T__7);
    setState(102);
    comparison();
    setState(103);
    match(PythonParser::T__4);
    setState(104);
    match(PythonParser::T__5);
    setState(105);
    statement_list(0);
    setState(106);
    match(PythonParser::T__6);
   
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
    setState(108);
    match(PythonParser::T__8);
    setState(109);
    match(PythonParser::T__4);
    setState(110);
    match(PythonParser::T__5);
    setState(111);
    statement_list(0);
    setState(112);
    match(PythonParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctioncallContext ------------------------------------------------------------------

PythonParser::FunctioncallContext::FunctioncallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PythonParser::FunctioncallContext::NAME() {
  return getToken(PythonParser::NAME, 0);
}

PythonParser::Parameter_listContext* PythonParser::FunctioncallContext::parameter_list() {
  return getRuleContext<PythonParser::Parameter_listContext>(0);
}


size_t PythonParser::FunctioncallContext::getRuleIndex() const {
  return PythonParser::RuleFunctioncall;
}

void PythonParser::FunctioncallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctioncall(this);
}

void PythonParser::FunctioncallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctioncall(this);
}

PythonParser::FunctioncallContext* PythonParser::functioncall() {
  FunctioncallContext *_localctx = _tracker.createInstance<FunctioncallContext>(_ctx, getState());
  enterRule(_localctx, 16, PythonParser::RuleFunctioncall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    match(PythonParser::NAME);
    setState(115);
    match(PythonParser::T__2);
    setState(116);
    parameter_list();
    setState(117);
    match(PythonParser::T__3);
   
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
  enterRule(_localctx, 18, PythonParser::RuleConop);
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
    setState(119);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 64512) != 0))) {
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

//----------------- RangeContext ------------------------------------------------------------------

PythonParser::RangeContext::RangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PythonParser::ExpressionContext *> PythonParser::RangeContext::expression() {
  return getRuleContexts<PythonParser::ExpressionContext>();
}

PythonParser::ExpressionContext* PythonParser::RangeContext::expression(size_t i) {
  return getRuleContext<PythonParser::ExpressionContext>(i);
}


size_t PythonParser::RangeContext::getRuleIndex() const {
  return PythonParser::RuleRange;
}

void PythonParser::RangeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRange(this);
}

void PythonParser::RangeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRange(this);
}

PythonParser::RangeContext* PythonParser::range() {
  RangeContext *_localctx = _tracker.createInstance<RangeContext>(_ctx, getState());
  enterRule(_localctx, 20, PythonParser::RuleRange);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(PythonParser::T__15);
    setState(122);
    match(PythonParser::T__2);
    setState(123);
    expression();
    setState(124);
    match(PythonParser::T__16);
    setState(125);
    expression();
    setState(126);
    match(PythonParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- For_statementContext ------------------------------------------------------------------

PythonParser::For_statementContext::For_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> PythonParser::For_statementContext::NAME() {
  return getTokens(PythonParser::NAME);
}

tree::TerminalNode* PythonParser::For_statementContext::NAME(size_t i) {
  return getToken(PythonParser::NAME, i);
}

PythonParser::Statement_listContext* PythonParser::For_statementContext::statement_list() {
  return getRuleContext<PythonParser::Statement_listContext>(0);
}

tree::TerminalNode* PythonParser::For_statementContext::STRING_LITERAL() {
  return getToken(PythonParser::STRING_LITERAL, 0);
}

PythonParser::RangeContext* PythonParser::For_statementContext::range() {
  return getRuleContext<PythonParser::RangeContext>(0);
}


size_t PythonParser::For_statementContext::getRuleIndex() const {
  return PythonParser::RuleFor_statement;
}

void PythonParser::For_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor_statement(this);
}

void PythonParser::For_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor_statement(this);
}

PythonParser::For_statementContext* PythonParser::for_statement() {
  For_statementContext *_localctx = _tracker.createInstance<For_statementContext>(_ctx, getState());
  enterRule(_localctx, 22, PythonParser::RuleFor_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    match(PythonParser::T__17);
    setState(129);
    match(PythonParser::NAME);
    setState(130);
    match(PythonParser::T__18);
    setState(134);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PythonParser::STRING_LITERAL: {
        setState(131);
        match(PythonParser::STRING_LITERAL);
        break;
      }

      case PythonParser::NAME: {
        setState(132);
        match(PythonParser::NAME);
        break;
      }

      case PythonParser::T__15: {
        setState(133);
        range();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(136);
    match(PythonParser::T__4);
    setState(137);
    match(PythonParser::T__5);
    setState(138);
    statement_list(0);
    setState(139);
    match(PythonParser::T__6);
   
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
  enterRule(_localctx, 24, PythonParser::RuleWhile_statement);
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
    setState(141);
    match(PythonParser::T__19);
    setState(143);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(142);
      match(PythonParser::T__2);
      break;
    }

    default:
      break;
    }
    setState(145);
    comparison();
    setState(147);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PythonParser::T__3) {
      setState(146);
      match(PythonParser::T__3);
    }
    setState(149);
    match(PythonParser::T__4);
    setState(150);
    match(PythonParser::T__5);
    setState(151);
    statement_list(0);
    setState(152);
    match(PythonParser::T__6);
   
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
  enterRule(_localctx, 26, PythonParser::RuleFunction_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    match(PythonParser::T__20);
    setState(155);
    match(PythonParser::NAME);
    setState(156);
    match(PythonParser::T__2);
    setState(157);
    parameter_list();
    setState(158);
    match(PythonParser::T__3);
    setState(159);
    match(PythonParser::T__4);
    setState(160);
    match(PythonParser::T__5);
    setState(161);
    statement_list(0);
    setState(162);
    match(PythonParser::T__6);
   
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
  enterRule(_localctx, 28, PythonParser::RuleReturn_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    match(PythonParser::T__21);
    setState(165);
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
  enterRule(_localctx, 30, PythonParser::RuleExpression_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
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
  enterRule(_localctx, 32, PythonParser::RuleAddop);
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
    setState(169);
    _la = _input->LA(1);
    if (!(_la == PythonParser::T__22

    || _la == PythonParser::T__23)) {
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
  enterRule(_localctx, 34, PythonParser::RuleMulop);
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
    setState(171);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 234881024) != 0))) {
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

tree::TerminalNode* PythonParser::PrintContext::STRING_LITERAL() {
  return getToken(PythonParser::STRING_LITERAL, 0);
}

tree::TerminalNode* PythonParser::PrintContext::INTEGER() {
  return getToken(PythonParser::INTEGER, 0);
}

tree::TerminalNode* PythonParser::PrintContext::NAME() {
  return getToken(PythonParser::NAME, 0);
}

tree::TerminalNode* PythonParser::PrintContext::FLOAT() {
  return getToken(PythonParser::FLOAT, 0);
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
  enterRule(_localctx, 36, PythonParser::RulePrint);
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
    setState(173);
    match(PythonParser::T__27);
    setState(174);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8053063680) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(175);
    match(PythonParser::T__3);
   
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

PythonParser::FunctioncallContext* PythonParser::ExpressionContext::functioncall() {
  return getRuleContext<PythonParser::FunctioncallContext>(0);
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
  enterRule(_localctx, 38, PythonParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(187);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(177);
      functioncall();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(178);
      term();
      setState(184);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(179);
          addop();
          setState(180);
          term(); 
        }
        setState(186);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
      }
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
  enterRule(_localctx, 40, PythonParser::RuleTerm);

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
    setState(189);
    factor();
    setState(195);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(190);
        mulop();
        setState(191);
        factor(); 
      }
      setState(197);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
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

tree::TerminalNode* PythonParser::FactorContext::STRING_LITERAL() {
  return getToken(PythonParser::STRING_LITERAL, 0);
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
  enterRule(_localctx, 42, PythonParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(206);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PythonParser::INTEGER: {
        enterOuterAlt(_localctx, 1);
        setState(198);
        match(PythonParser::INTEGER);
        break;
      }

      case PythonParser::FLOAT: {
        enterOuterAlt(_localctx, 2);
        setState(199);
        match(PythonParser::FLOAT);
        break;
      }

      case PythonParser::NAME: {
        enterOuterAlt(_localctx, 3);
        setState(200);
        match(PythonParser::NAME);
        break;
      }

      case PythonParser::STRING_LITERAL: {
        enterOuterAlt(_localctx, 4);
        setState(201);
        match(PythonParser::STRING_LITERAL);
        break;
      }

      case PythonParser::T__2: {
        enterOuterAlt(_localctx, 5);
        setState(202);
        match(PythonParser::T__2);
        setState(203);
        expression();
        setState(204);
        match(PythonParser::T__3);
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
  enterRule(_localctx, 44, PythonParser::RuleParameter_list);
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
    setState(216);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 8053063688) != 0)) {
      setState(208);
      parameter();
      setState(213);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PythonParser::T__16) {
        setState(209);
        match(PythonParser::T__16);
        setState(210);
        parameter();
        setState(215);
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

PythonParser::ExpressionContext* PythonParser::ParameterContext::expression() {
  return getRuleContext<PythonParser::ExpressionContext>(0);
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
  enterRule(_localctx, 46, PythonParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
    expression();
   
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
