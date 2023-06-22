
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
      "if_statement", "join_op", "condition_statement", "comparison_statement", 
      "comparison", "elif", "elseop", "functioncall", "conop", "range", 
      "for_statement", "while_statement", "function_statement", "return_statement", 
      "expression_statement", "addop", "mulop", "print", "expression", "term", 
      "data_type", "print_type", "printtype_list", "factor", "parameter_list", 
      "parameter"
    },
    std::vector<std::string>{
      "", "'='", "'if'", "'('", "')'", "':'", "'<<INDENT>>'", "'<<DEDENT>>'", 
      "'&'", "'and'", "'|'", "'or'", "'elif'", "'else'", "'>='", "'>'", 
      "'<'", "'<='", "'=='", "'!='", "'range'", "','", "'for'", "'in'", 
      "'while'", "'def'", "'return'", "'+'", "'-'", "'*'", "'/'", "'%'", 
      "'print('"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "NAME", 
      "INTEGER", "FLOAT", "STRING_LITERAL", "ESC", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,38,271,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,5,1,69,8,1,10,1,12,1,72,
  	9,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,82,8,2,1,3,1,3,1,3,1,3,1,4,1,
  	4,3,4,90,8,4,1,4,1,4,3,4,94,8,4,1,4,1,4,1,4,1,4,1,4,5,4,101,8,4,10,4,
  	12,4,104,9,4,1,4,3,4,107,8,4,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,7,5,7,117,
  	8,7,10,7,12,7,120,9,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,3,8,130,8,8,3,8,
  	132,8,8,1,9,1,9,3,9,136,8,9,1,9,1,9,3,9,140,8,9,1,9,1,9,1,9,1,9,1,9,1,
  	10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,13,1,
  	13,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,14,3,14,173,8,
  	14,1,14,1,14,1,14,1,14,1,14,1,15,1,15,3,15,182,8,15,1,15,1,15,3,15,186,
  	8,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,
  	1,16,1,16,1,17,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,21,
  	1,21,1,22,1,22,1,22,1,22,1,22,5,22,221,8,22,10,22,12,22,224,9,22,3,22,
  	226,8,22,1,23,1,23,1,23,1,23,5,23,232,8,23,10,23,12,23,235,9,23,1,24,
  	1,24,1,25,1,25,3,25,241,8,25,1,26,1,26,1,26,5,26,246,8,26,10,26,12,26,
  	249,9,26,1,27,1,27,1,27,1,27,1,27,1,27,3,27,257,8,27,1,28,1,28,1,28,5,
  	28,262,8,28,10,28,12,28,265,9,28,3,28,267,8,28,1,29,1,29,1,29,0,1,2,30,
  	0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,
  	50,52,54,56,58,0,5,1,0,8,11,1,0,14,19,1,0,27,28,1,0,29,31,1,0,33,36,270,
  	0,60,1,0,0,0,2,63,1,0,0,0,4,81,1,0,0,0,6,83,1,0,0,0,8,87,1,0,0,0,10,108,
  	1,0,0,0,12,110,1,0,0,0,14,112,1,0,0,0,16,131,1,0,0,0,18,133,1,0,0,0,20,
  	146,1,0,0,0,22,152,1,0,0,0,24,157,1,0,0,0,26,159,1,0,0,0,28,166,1,0,0,
  	0,30,179,1,0,0,0,32,192,1,0,0,0,34,202,1,0,0,0,36,205,1,0,0,0,38,207,
  	1,0,0,0,40,209,1,0,0,0,42,211,1,0,0,0,44,225,1,0,0,0,46,227,1,0,0,0,48,
  	236,1,0,0,0,50,240,1,0,0,0,52,242,1,0,0,0,54,256,1,0,0,0,56,266,1,0,0,
  	0,58,268,1,0,0,0,60,61,3,2,1,0,61,62,5,0,0,1,62,1,1,0,0,0,63,64,6,1,-1,
  	0,64,65,3,4,2,0,65,70,1,0,0,0,66,67,10,1,0,0,67,69,3,4,2,0,68,66,1,0,
  	0,0,69,72,1,0,0,0,70,68,1,0,0,0,70,71,1,0,0,0,71,3,1,0,0,0,72,70,1,0,
  	0,0,73,82,3,6,3,0,74,82,3,8,4,0,75,82,3,30,15,0,76,82,3,32,16,0,77,82,
  	3,34,17,0,78,82,3,42,21,0,79,82,3,28,14,0,80,82,3,36,18,0,81,73,1,0,0,
  	0,81,74,1,0,0,0,81,75,1,0,0,0,81,76,1,0,0,0,81,77,1,0,0,0,81,78,1,0,0,
  	0,81,79,1,0,0,0,81,80,1,0,0,0,82,5,1,0,0,0,83,84,5,33,0,0,84,85,5,1,0,
  	0,85,86,3,44,22,0,86,7,1,0,0,0,87,89,5,2,0,0,88,90,5,3,0,0,89,88,1,0,
  	0,0,89,90,1,0,0,0,90,91,1,0,0,0,91,93,3,12,6,0,92,94,5,4,0,0,93,92,1,
  	0,0,0,93,94,1,0,0,0,94,95,1,0,0,0,95,96,5,5,0,0,96,97,5,6,0,0,97,98,3,
  	2,1,0,98,102,5,7,0,0,99,101,3,18,9,0,100,99,1,0,0,0,101,104,1,0,0,0,102,
  	100,1,0,0,0,102,103,1,0,0,0,103,106,1,0,0,0,104,102,1,0,0,0,105,107,3,
  	20,10,0,106,105,1,0,0,0,106,107,1,0,0,0,107,9,1,0,0,0,108,109,7,0,0,0,
  	109,11,1,0,0,0,110,111,3,14,7,0,111,13,1,0,0,0,112,118,3,16,8,0,113,114,
  	3,10,5,0,114,115,3,16,8,0,115,117,1,0,0,0,116,113,1,0,0,0,117,120,1,0,
  	0,0,118,116,1,0,0,0,118,119,1,0,0,0,119,15,1,0,0,0,120,118,1,0,0,0,121,
  	122,5,3,0,0,122,123,3,14,7,0,123,124,5,4,0,0,124,132,1,0,0,0,125,129,
  	3,44,22,0,126,127,3,24,12,0,127,128,3,44,22,0,128,130,1,0,0,0,129,126,
  	1,0,0,0,129,130,1,0,0,0,130,132,1,0,0,0,131,121,1,0,0,0,131,125,1,0,0,
  	0,132,17,1,0,0,0,133,135,5,12,0,0,134,136,5,3,0,0,135,134,1,0,0,0,135,
  	136,1,0,0,0,136,137,1,0,0,0,137,139,3,12,6,0,138,140,5,4,0,0,139,138,
  	1,0,0,0,139,140,1,0,0,0,140,141,1,0,0,0,141,142,5,5,0,0,142,143,5,6,0,
  	0,143,144,3,2,1,0,144,145,5,7,0,0,145,19,1,0,0,0,146,147,5,13,0,0,147,
  	148,5,5,0,0,148,149,5,6,0,0,149,150,3,2,1,0,150,151,5,7,0,0,151,21,1,
  	0,0,0,152,153,5,33,0,0,153,154,5,3,0,0,154,155,3,56,28,0,155,156,5,4,
  	0,0,156,23,1,0,0,0,157,158,7,1,0,0,158,25,1,0,0,0,159,160,5,20,0,0,160,
  	161,5,3,0,0,161,162,3,44,22,0,162,163,5,21,0,0,163,164,3,44,22,0,164,
  	165,5,4,0,0,165,27,1,0,0,0,166,167,5,22,0,0,167,168,5,33,0,0,168,172,
  	5,23,0,0,169,173,5,36,0,0,170,173,5,33,0,0,171,173,3,26,13,0,172,169,
  	1,0,0,0,172,170,1,0,0,0,172,171,1,0,0,0,173,174,1,0,0,0,174,175,5,5,0,
  	0,175,176,5,6,0,0,176,177,3,2,1,0,177,178,5,7,0,0,178,29,1,0,0,0,179,
  	181,5,24,0,0,180,182,5,3,0,0,181,180,1,0,0,0,181,182,1,0,0,0,182,183,
  	1,0,0,0,183,185,3,12,6,0,184,186,5,4,0,0,185,184,1,0,0,0,185,186,1,0,
  	0,0,186,187,1,0,0,0,187,188,5,5,0,0,188,189,5,6,0,0,189,190,3,2,1,0,190,
  	191,5,7,0,0,191,31,1,0,0,0,192,193,5,25,0,0,193,194,5,33,0,0,194,195,
  	5,3,0,0,195,196,3,56,28,0,196,197,5,4,0,0,197,198,5,5,0,0,198,199,5,6,
  	0,0,199,200,3,2,1,0,200,201,5,7,0,0,201,33,1,0,0,0,202,203,5,26,0,0,203,
  	204,3,44,22,0,204,35,1,0,0,0,205,206,3,44,22,0,206,37,1,0,0,0,207,208,
  	7,2,0,0,208,39,1,0,0,0,209,210,7,3,0,0,210,41,1,0,0,0,211,212,5,32,0,
  	0,212,213,3,52,26,0,213,214,5,4,0,0,214,43,1,0,0,0,215,226,3,22,11,0,
  	216,222,3,46,23,0,217,218,3,38,19,0,218,219,3,46,23,0,219,221,1,0,0,0,
  	220,217,1,0,0,0,221,224,1,0,0,0,222,220,1,0,0,0,222,223,1,0,0,0,223,226,
  	1,0,0,0,224,222,1,0,0,0,225,215,1,0,0,0,225,216,1,0,0,0,226,45,1,0,0,
  	0,227,233,3,54,27,0,228,229,3,40,20,0,229,230,3,54,27,0,230,232,1,0,0,
  	0,231,228,1,0,0,0,232,235,1,0,0,0,233,231,1,0,0,0,233,234,1,0,0,0,234,
  	47,1,0,0,0,235,233,1,0,0,0,236,237,7,4,0,0,237,49,1,0,0,0,238,241,3,48,
  	24,0,239,241,3,44,22,0,240,238,1,0,0,0,240,239,1,0,0,0,241,51,1,0,0,0,
  	242,247,3,50,25,0,243,244,5,21,0,0,244,246,3,50,25,0,245,243,1,0,0,0,
  	246,249,1,0,0,0,247,245,1,0,0,0,247,248,1,0,0,0,248,53,1,0,0,0,249,247,
  	1,0,0,0,250,257,3,22,11,0,251,252,5,3,0,0,252,253,3,44,22,0,253,254,5,
  	4,0,0,254,257,1,0,0,0,255,257,3,48,24,0,256,250,1,0,0,0,256,251,1,0,0,
  	0,256,255,1,0,0,0,257,55,1,0,0,0,258,263,3,58,29,0,259,260,5,21,0,0,260,
  	262,3,58,29,0,261,259,1,0,0,0,262,265,1,0,0,0,263,261,1,0,0,0,263,264,
  	1,0,0,0,264,267,1,0,0,0,265,263,1,0,0,0,266,258,1,0,0,0,266,267,1,0,0,
  	0,267,57,1,0,0,0,268,269,3,44,22,0,269,59,1,0,0,0,22,70,81,89,93,102,
  	106,118,129,131,135,139,172,181,185,222,225,233,240,247,256,263,266
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

tree::TerminalNode* PythonParser::ProgramContext::EOF() {
  return getToken(PythonParser::EOF, 0);
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
    setState(60);
    statement_list(0);
    setState(61);
    match(PythonParser::EOF);
   
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
    setState(64);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(70);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<Statement_listContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleStatement_list);
        setState(66);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(67);
        statement(); 
      }
      setState(72);
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
    setState(81);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(73);
      assignment_statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(74);
      if_statement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(75);
      while_statement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(76);
      function_statement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(77);
      return_statement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(78);
      print();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(79);
      for_statement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(80);
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
    setState(83);
    match(PythonParser::NAME);
    setState(84);
    match(PythonParser::T__0);
    setState(85);
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

PythonParser::Condition_statementContext* PythonParser::If_statementContext::condition_statement() {
  return getRuleContext<PythonParser::Condition_statementContext>(0);
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
    setState(87);
    match(PythonParser::T__1);
    setState(89);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      setState(88);
      match(PythonParser::T__2);
      break;
    }

    default:
      break;
    }
    setState(91);
    condition_statement();
    setState(93);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PythonParser::T__3) {
      setState(92);
      match(PythonParser::T__3);
    }
    setState(95);
    match(PythonParser::T__4);
    setState(96);
    match(PythonParser::T__5);
    setState(97);
    statement_list(0);
    setState(98);
    match(PythonParser::T__6);
    setState(102);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(99);
        elif(); 
      }
      setState(104);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
    setState(106);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      setState(105);
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

//----------------- Join_opContext ------------------------------------------------------------------

PythonParser::Join_opContext::Join_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PythonParser::Join_opContext::getRuleIndex() const {
  return PythonParser::RuleJoin_op;
}

void PythonParser::Join_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJoin_op(this);
}

void PythonParser::Join_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJoin_op(this);
}

PythonParser::Join_opContext* PythonParser::join_op() {
  Join_opContext *_localctx = _tracker.createInstance<Join_opContext>(_ctx, getState());
  enterRule(_localctx, 10, PythonParser::RuleJoin_op);
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
    setState(108);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3840) != 0))) {
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

//----------------- Condition_statementContext ------------------------------------------------------------------

PythonParser::Condition_statementContext::Condition_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PythonParser::Comparison_statementContext* PythonParser::Condition_statementContext::comparison_statement() {
  return getRuleContext<PythonParser::Comparison_statementContext>(0);
}


size_t PythonParser::Condition_statementContext::getRuleIndex() const {
  return PythonParser::RuleCondition_statement;
}

void PythonParser::Condition_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCondition_statement(this);
}

void PythonParser::Condition_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCondition_statement(this);
}

PythonParser::Condition_statementContext* PythonParser::condition_statement() {
  Condition_statementContext *_localctx = _tracker.createInstance<Condition_statementContext>(_ctx, getState());
  enterRule(_localctx, 12, PythonParser::RuleCondition_statement);

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
    comparison_statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Comparison_statementContext ------------------------------------------------------------------

PythonParser::Comparison_statementContext::Comparison_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PythonParser::ComparisonContext *> PythonParser::Comparison_statementContext::comparison() {
  return getRuleContexts<PythonParser::ComparisonContext>();
}

PythonParser::ComparisonContext* PythonParser::Comparison_statementContext::comparison(size_t i) {
  return getRuleContext<PythonParser::ComparisonContext>(i);
}

std::vector<PythonParser::Join_opContext *> PythonParser::Comparison_statementContext::join_op() {
  return getRuleContexts<PythonParser::Join_opContext>();
}

PythonParser::Join_opContext* PythonParser::Comparison_statementContext::join_op(size_t i) {
  return getRuleContext<PythonParser::Join_opContext>(i);
}


size_t PythonParser::Comparison_statementContext::getRuleIndex() const {
  return PythonParser::RuleComparison_statement;
}

void PythonParser::Comparison_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison_statement(this);
}

void PythonParser::Comparison_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison_statement(this);
}

PythonParser::Comparison_statementContext* PythonParser::comparison_statement() {
  Comparison_statementContext *_localctx = _tracker.createInstance<Comparison_statementContext>(_ctx, getState());
  enterRule(_localctx, 14, PythonParser::RuleComparison_statement);
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
    setState(112);
    comparison();
    setState(118);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3840) != 0)) {
      setState(113);
      join_op();
      setState(114);
      comparison();
      setState(120);
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

//----------------- ComparisonContext ------------------------------------------------------------------

PythonParser::ComparisonContext::ComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PythonParser::Comparison_statementContext* PythonParser::ComparisonContext::comparison_statement() {
  return getRuleContext<PythonParser::Comparison_statementContext>(0);
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
  enterRule(_localctx, 16, PythonParser::RuleComparison);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(131);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(121);
      match(PythonParser::T__2);
      setState(122);
      comparison_statement();
      setState(123);
      match(PythonParser::T__3);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(125);
      expression();
      setState(129);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 1032192) != 0)) {
        setState(126);
        conop();
        setState(127);
        expression();
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

//----------------- ElifContext ------------------------------------------------------------------

PythonParser::ElifContext::ElifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PythonParser::Condition_statementContext* PythonParser::ElifContext::condition_statement() {
  return getRuleContext<PythonParser::Condition_statementContext>(0);
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
  enterRule(_localctx, 18, PythonParser::RuleElif);
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
    setState(133);
    match(PythonParser::T__11);
    setState(135);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(134);
      match(PythonParser::T__2);
      break;
    }

    default:
      break;
    }
    setState(137);
    condition_statement();
    setState(139);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PythonParser::T__3) {
      setState(138);
      match(PythonParser::T__3);
    }
    setState(141);
    match(PythonParser::T__4);
    setState(142);
    match(PythonParser::T__5);
    setState(143);
    statement_list(0);
    setState(144);
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
  enterRule(_localctx, 20, PythonParser::RuleElseop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    match(PythonParser::T__12);
    setState(147);
    match(PythonParser::T__4);
    setState(148);
    match(PythonParser::T__5);
    setState(149);
    statement_list(0);
    setState(150);
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
  enterRule(_localctx, 22, PythonParser::RuleFunctioncall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    match(PythonParser::NAME);
    setState(153);
    match(PythonParser::T__2);
    setState(154);
    parameter_list();
    setState(155);
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
  enterRule(_localctx, 24, PythonParser::RuleConop);
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
    setState(157);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1032192) != 0))) {
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
  enterRule(_localctx, 26, PythonParser::RuleRange);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    match(PythonParser::T__19);
    setState(160);
    match(PythonParser::T__2);
    setState(161);
    expression();
    setState(162);
    match(PythonParser::T__20);
    setState(163);
    expression();
    setState(164);
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
  enterRule(_localctx, 28, PythonParser::RuleFor_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    match(PythonParser::T__21);
    setState(167);
    match(PythonParser::NAME);
    setState(168);
    match(PythonParser::T__22);
    setState(172);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PythonParser::STRING_LITERAL: {
        setState(169);
        match(PythonParser::STRING_LITERAL);
        break;
      }

      case PythonParser::NAME: {
        setState(170);
        match(PythonParser::NAME);
        break;
      }

      case PythonParser::T__19: {
        setState(171);
        range();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(174);
    match(PythonParser::T__4);
    setState(175);
    match(PythonParser::T__5);
    setState(176);
    statement_list(0);
    setState(177);
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

PythonParser::Condition_statementContext* PythonParser::While_statementContext::condition_statement() {
  return getRuleContext<PythonParser::Condition_statementContext>(0);
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
  enterRule(_localctx, 30, PythonParser::RuleWhile_statement);
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
    setState(179);
    match(PythonParser::T__23);
    setState(181);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(180);
      match(PythonParser::T__2);
      break;
    }

    default:
      break;
    }
    setState(183);
    condition_statement();
    setState(185);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PythonParser::T__3) {
      setState(184);
      match(PythonParser::T__3);
    }
    setState(187);
    match(PythonParser::T__4);
    setState(188);
    match(PythonParser::T__5);
    setState(189);
    statement_list(0);
    setState(190);
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
  enterRule(_localctx, 32, PythonParser::RuleFunction_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    match(PythonParser::T__24);
    setState(193);
    match(PythonParser::NAME);
    setState(194);
    match(PythonParser::T__2);
    setState(195);
    parameter_list();
    setState(196);
    match(PythonParser::T__3);
    setState(197);
    match(PythonParser::T__4);
    setState(198);
    match(PythonParser::T__5);
    setState(199);
    statement_list(0);
    setState(200);
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
  enterRule(_localctx, 34, PythonParser::RuleReturn_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(202);
    match(PythonParser::T__25);
    setState(203);
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
  enterRule(_localctx, 36, PythonParser::RuleExpression_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
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
  enterRule(_localctx, 38, PythonParser::RuleAddop);
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
    setState(207);
    _la = _input->LA(1);
    if (!(_la == PythonParser::T__26

    || _la == PythonParser::T__27)) {
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
  enterRule(_localctx, 40, PythonParser::RuleMulop);
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
    setState(209);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 3758096384) != 0))) {
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

PythonParser::Printtype_listContext* PythonParser::PrintContext::printtype_list() {
  return getRuleContext<PythonParser::Printtype_listContext>(0);
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
  enterRule(_localctx, 42, PythonParser::RulePrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    match(PythonParser::T__31);
    setState(212);
    printtype_list();
    setState(213);
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
  enterRule(_localctx, 44, PythonParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(225);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(215);
      functioncall();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(216);
      term();
      setState(222);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(217);
          addop();
          setState(218);
          term(); 
        }
        setState(224);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
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
  enterRule(_localctx, 46, PythonParser::RuleTerm);

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
    setState(227);
    factor();
    setState(233);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(228);
        mulop();
        setState(229);
        factor(); 
      }
      setState(235);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Data_typeContext ------------------------------------------------------------------

PythonParser::Data_typeContext::Data_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PythonParser::Data_typeContext::STRING_LITERAL() {
  return getToken(PythonParser::STRING_LITERAL, 0);
}

tree::TerminalNode* PythonParser::Data_typeContext::INTEGER() {
  return getToken(PythonParser::INTEGER, 0);
}

tree::TerminalNode* PythonParser::Data_typeContext::NAME() {
  return getToken(PythonParser::NAME, 0);
}

tree::TerminalNode* PythonParser::Data_typeContext::FLOAT() {
  return getToken(PythonParser::FLOAT, 0);
}


size_t PythonParser::Data_typeContext::getRuleIndex() const {
  return PythonParser::RuleData_type;
}

void PythonParser::Data_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterData_type(this);
}

void PythonParser::Data_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitData_type(this);
}

PythonParser::Data_typeContext* PythonParser::data_type() {
  Data_typeContext *_localctx = _tracker.createInstance<Data_typeContext>(_ctx, getState());
  enterRule(_localctx, 48, PythonParser::RuleData_type);
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
    setState(236);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 128849018880) != 0))) {
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

//----------------- Print_typeContext ------------------------------------------------------------------

PythonParser::Print_typeContext::Print_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PythonParser::Data_typeContext* PythonParser::Print_typeContext::data_type() {
  return getRuleContext<PythonParser::Data_typeContext>(0);
}

PythonParser::ExpressionContext* PythonParser::Print_typeContext::expression() {
  return getRuleContext<PythonParser::ExpressionContext>(0);
}


size_t PythonParser::Print_typeContext::getRuleIndex() const {
  return PythonParser::RulePrint_type;
}

void PythonParser::Print_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint_type(this);
}

void PythonParser::Print_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint_type(this);
}

PythonParser::Print_typeContext* PythonParser::print_type() {
  Print_typeContext *_localctx = _tracker.createInstance<Print_typeContext>(_ctx, getState());
  enterRule(_localctx, 50, PythonParser::RulePrint_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(240);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(238);
      data_type();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(239);
      expression();
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

//----------------- Printtype_listContext ------------------------------------------------------------------

PythonParser::Printtype_listContext::Printtype_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PythonParser::Print_typeContext *> PythonParser::Printtype_listContext::print_type() {
  return getRuleContexts<PythonParser::Print_typeContext>();
}

PythonParser::Print_typeContext* PythonParser::Printtype_listContext::print_type(size_t i) {
  return getRuleContext<PythonParser::Print_typeContext>(i);
}


size_t PythonParser::Printtype_listContext::getRuleIndex() const {
  return PythonParser::RulePrinttype_list;
}

void PythonParser::Printtype_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrinttype_list(this);
}

void PythonParser::Printtype_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<PythonListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrinttype_list(this);
}

PythonParser::Printtype_listContext* PythonParser::printtype_list() {
  Printtype_listContext *_localctx = _tracker.createInstance<Printtype_listContext>(_ctx, getState());
  enterRule(_localctx, 52, PythonParser::RulePrinttype_list);
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
    setState(242);
    print_type();
    setState(247);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PythonParser::T__20) {
      setState(243);
      match(PythonParser::T__20);
      setState(244);
      print_type();
      setState(249);
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

//----------------- FactorContext ------------------------------------------------------------------

PythonParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PythonParser::FunctioncallContext* PythonParser::FactorContext::functioncall() {
  return getRuleContext<PythonParser::FunctioncallContext>(0);
}

PythonParser::ExpressionContext* PythonParser::FactorContext::expression() {
  return getRuleContext<PythonParser::ExpressionContext>(0);
}

PythonParser::Data_typeContext* PythonParser::FactorContext::data_type() {
  return getRuleContext<PythonParser::Data_typeContext>(0);
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
  enterRule(_localctx, 54, PythonParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(256);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(250);
      functioncall();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(251);
      match(PythonParser::T__2);
      setState(252);
      expression();
      setState(253);
      match(PythonParser::T__3);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(255);
      data_type();
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
  enterRule(_localctx, 56, PythonParser::RuleParameter_list);
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
    setState(266);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 128849018888) != 0)) {
      setState(258);
      parameter();
      setState(263);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == PythonParser::T__20) {
        setState(259);
        match(PythonParser::T__20);
        setState(260);
        parameter();
        setState(265);
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
  enterRule(_localctx, 58, PythonParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(268);
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
