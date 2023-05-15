
// Generated from Python.g4 by ANTLR 4.12.0


#include "PythonLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct PythonLexerStaticData final {
  PythonLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PythonLexerStaticData(const PythonLexerStaticData&) = delete;
  PythonLexerStaticData(PythonLexerStaticData&&) = delete;
  PythonLexerStaticData& operator=(const PythonLexerStaticData&) = delete;
  PythonLexerStaticData& operator=(PythonLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag pythonlexerLexerOnceFlag;
PythonLexerStaticData *pythonlexerLexerStaticData = nullptr;

void pythonlexerLexerInitialize() {
  assert(pythonlexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<PythonLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "T__23", "NAME", 
      "INTEGER", "FLOAT", "WHITESPACE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'='", "'if'", "':'", "'elif'", "'else'", "'>='", "'>'", "'<'", 
      "'<='", "'=='", "'!='", "'in'", "'while'", "'def'", "'('", "')'", 
      "'return'", "'+'", "'-'", "'*'", "'/'", "'%'", "'print('", "','"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "NAME", "INTEGER", "FLOAT", "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,28,164,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,1,0,
  	1,0,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,
  	5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,
  	1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,14,1,14,1,15,
  	1,15,1,16,1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,
  	1,20,1,20,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,24,
  	1,24,5,24,136,8,24,10,24,12,24,139,9,24,1,25,4,25,142,8,25,11,25,12,25,
  	143,1,26,5,26,147,8,26,10,26,12,26,150,9,26,1,26,1,26,4,26,154,8,26,11,
  	26,12,26,155,1,27,4,27,159,8,27,11,27,12,27,160,1,27,1,27,0,0,28,1,1,
  	3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,
  	15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,
  	53,27,55,28,1,0,4,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,
  	1,0,48,57,3,0,9,10,13,13,32,32,168,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,
  	0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,
  	1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,
  	0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,
  	0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,
  	1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,1,57,1,0,0,0,3,59,1,0,
  	0,0,5,62,1,0,0,0,7,64,1,0,0,0,9,69,1,0,0,0,11,74,1,0,0,0,13,77,1,0,0,
  	0,15,79,1,0,0,0,17,81,1,0,0,0,19,84,1,0,0,0,21,87,1,0,0,0,23,90,1,0,0,
  	0,25,93,1,0,0,0,27,99,1,0,0,0,29,103,1,0,0,0,31,105,1,0,0,0,33,107,1,
  	0,0,0,35,114,1,0,0,0,37,116,1,0,0,0,39,118,1,0,0,0,41,120,1,0,0,0,43,
  	122,1,0,0,0,45,124,1,0,0,0,47,131,1,0,0,0,49,133,1,0,0,0,51,141,1,0,0,
  	0,53,148,1,0,0,0,55,158,1,0,0,0,57,58,5,61,0,0,58,2,1,0,0,0,59,60,5,105,
  	0,0,60,61,5,102,0,0,61,4,1,0,0,0,62,63,5,58,0,0,63,6,1,0,0,0,64,65,5,
  	101,0,0,65,66,5,108,0,0,66,67,5,105,0,0,67,68,5,102,0,0,68,8,1,0,0,0,
  	69,70,5,101,0,0,70,71,5,108,0,0,71,72,5,115,0,0,72,73,5,101,0,0,73,10,
  	1,0,0,0,74,75,5,62,0,0,75,76,5,61,0,0,76,12,1,0,0,0,77,78,5,62,0,0,78,
  	14,1,0,0,0,79,80,5,60,0,0,80,16,1,0,0,0,81,82,5,60,0,0,82,83,5,61,0,0,
  	83,18,1,0,0,0,84,85,5,61,0,0,85,86,5,61,0,0,86,20,1,0,0,0,87,88,5,33,
  	0,0,88,89,5,61,0,0,89,22,1,0,0,0,90,91,5,105,0,0,91,92,5,110,0,0,92,24,
  	1,0,0,0,93,94,5,119,0,0,94,95,5,104,0,0,95,96,5,105,0,0,96,97,5,108,0,
  	0,97,98,5,101,0,0,98,26,1,0,0,0,99,100,5,100,0,0,100,101,5,101,0,0,101,
  	102,5,102,0,0,102,28,1,0,0,0,103,104,5,40,0,0,104,30,1,0,0,0,105,106,
  	5,41,0,0,106,32,1,0,0,0,107,108,5,114,0,0,108,109,5,101,0,0,109,110,5,
  	116,0,0,110,111,5,117,0,0,111,112,5,114,0,0,112,113,5,110,0,0,113,34,
  	1,0,0,0,114,115,5,43,0,0,115,36,1,0,0,0,116,117,5,45,0,0,117,38,1,0,0,
  	0,118,119,5,42,0,0,119,40,1,0,0,0,120,121,5,47,0,0,121,42,1,0,0,0,122,
  	123,5,37,0,0,123,44,1,0,0,0,124,125,5,112,0,0,125,126,5,114,0,0,126,127,
  	5,105,0,0,127,128,5,110,0,0,128,129,5,116,0,0,129,130,5,40,0,0,130,46,
  	1,0,0,0,131,132,5,44,0,0,132,48,1,0,0,0,133,137,7,0,0,0,134,136,7,1,0,
  	0,135,134,1,0,0,0,136,139,1,0,0,0,137,135,1,0,0,0,137,138,1,0,0,0,138,
  	50,1,0,0,0,139,137,1,0,0,0,140,142,7,2,0,0,141,140,1,0,0,0,142,143,1,
  	0,0,0,143,141,1,0,0,0,143,144,1,0,0,0,144,52,1,0,0,0,145,147,7,2,0,0,
  	146,145,1,0,0,0,147,150,1,0,0,0,148,146,1,0,0,0,148,149,1,0,0,0,149,151,
  	1,0,0,0,150,148,1,0,0,0,151,153,5,46,0,0,152,154,7,2,0,0,153,152,1,0,
  	0,0,154,155,1,0,0,0,155,153,1,0,0,0,155,156,1,0,0,0,156,54,1,0,0,0,157,
  	159,7,3,0,0,158,157,1,0,0,0,159,160,1,0,0,0,160,158,1,0,0,0,160,161,1,
  	0,0,0,161,162,1,0,0,0,162,163,6,27,0,0,163,56,1,0,0,0,6,0,137,143,148,
  	155,160,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  pythonlexerLexerStaticData = staticData.release();
}

}

PythonLexer::PythonLexer(CharStream *input) : Lexer(input) {
  PythonLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *pythonlexerLexerStaticData->atn, pythonlexerLexerStaticData->decisionToDFA, pythonlexerLexerStaticData->sharedContextCache);
}

PythonLexer::~PythonLexer() {
  delete _interpreter;
}

std::string PythonLexer::getGrammarFileName() const {
  return "Python.g4";
}

const std::vector<std::string>& PythonLexer::getRuleNames() const {
  return pythonlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& PythonLexer::getChannelNames() const {
  return pythonlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& PythonLexer::getModeNames() const {
  return pythonlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& PythonLexer::getVocabulary() const {
  return pythonlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView PythonLexer::getSerializedATN() const {
  return pythonlexerLexerStaticData->serializedATN;
}

const atn::ATN& PythonLexer::getATN() const {
  return *pythonlexerLexerStaticData->atn;
}




void PythonLexer::initialize() {
  ::antlr4::internal::call_once(pythonlexerLexerOnceFlag, pythonlexerLexerInitialize);
}
