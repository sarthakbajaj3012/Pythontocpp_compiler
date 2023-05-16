
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
      "T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "T__23", "T__24", 
      "T__25", "NAME", "INTEGER", "FLOAT", "WHITESPACE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'='", "'if'", "'('", "')'", "':'", "'<<INDENT>>'", "'<<DEDENT>>'", 
      "'elif'", "'else'", "'>='", "'>'", "'<'", "'<='", "'=='", "'!='", 
      "'in'", "'while'", "'def'", "'return'", "'+'", "'-'", "'*'", "'/'", 
      "'%'", "'print('", "','"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "NAME", "INTEGER", "FLOAT", 
      "WHITESPACE"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,30,190,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,
  	5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,
  	1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,10,1,10,
  	1,11,1,11,1,12,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,14,1,15,1,15,1,15,
  	1,16,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,
  	1,24,1,24,1,24,1,24,1,24,1,24,1,25,1,25,1,26,1,26,5,26,162,8,26,10,26,
  	12,26,165,9,26,1,27,4,27,168,8,27,11,27,12,27,169,1,28,5,28,173,8,28,
  	10,28,12,28,176,9,28,1,28,1,28,4,28,180,8,28,11,28,12,28,181,1,29,4,29,
  	185,8,29,11,29,12,29,186,1,29,1,29,0,0,30,1,1,3,2,5,3,7,4,9,5,11,6,13,
  	7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,
  	19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,
  	1,0,4,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,48,57,3,
  	0,9,10,13,13,32,32,194,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,
  	0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,
  	1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,
  	0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,
  	0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,
  	1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,1,61,1,0,
  	0,0,3,63,1,0,0,0,5,66,1,0,0,0,7,68,1,0,0,0,9,70,1,0,0,0,11,72,1,0,0,0,
  	13,83,1,0,0,0,15,94,1,0,0,0,17,99,1,0,0,0,19,104,1,0,0,0,21,107,1,0,0,
  	0,23,109,1,0,0,0,25,111,1,0,0,0,27,114,1,0,0,0,29,117,1,0,0,0,31,120,
  	1,0,0,0,33,123,1,0,0,0,35,129,1,0,0,0,37,133,1,0,0,0,39,140,1,0,0,0,41,
  	142,1,0,0,0,43,144,1,0,0,0,45,146,1,0,0,0,47,148,1,0,0,0,49,150,1,0,0,
  	0,51,157,1,0,0,0,53,159,1,0,0,0,55,167,1,0,0,0,57,174,1,0,0,0,59,184,
  	1,0,0,0,61,62,5,61,0,0,62,2,1,0,0,0,63,64,5,105,0,0,64,65,5,102,0,0,65,
  	4,1,0,0,0,66,67,5,40,0,0,67,6,1,0,0,0,68,69,5,41,0,0,69,8,1,0,0,0,70,
  	71,5,58,0,0,71,10,1,0,0,0,72,73,5,60,0,0,73,74,5,60,0,0,74,75,5,73,0,
  	0,75,76,5,78,0,0,76,77,5,68,0,0,77,78,5,69,0,0,78,79,5,78,0,0,79,80,5,
  	84,0,0,80,81,5,62,0,0,81,82,5,62,0,0,82,12,1,0,0,0,83,84,5,60,0,0,84,
  	85,5,60,0,0,85,86,5,68,0,0,86,87,5,69,0,0,87,88,5,68,0,0,88,89,5,69,0,
  	0,89,90,5,78,0,0,90,91,5,84,0,0,91,92,5,62,0,0,92,93,5,62,0,0,93,14,1,
  	0,0,0,94,95,5,101,0,0,95,96,5,108,0,0,96,97,5,105,0,0,97,98,5,102,0,0,
  	98,16,1,0,0,0,99,100,5,101,0,0,100,101,5,108,0,0,101,102,5,115,0,0,102,
  	103,5,101,0,0,103,18,1,0,0,0,104,105,5,62,0,0,105,106,5,61,0,0,106,20,
  	1,0,0,0,107,108,5,62,0,0,108,22,1,0,0,0,109,110,5,60,0,0,110,24,1,0,0,
  	0,111,112,5,60,0,0,112,113,5,61,0,0,113,26,1,0,0,0,114,115,5,61,0,0,115,
  	116,5,61,0,0,116,28,1,0,0,0,117,118,5,33,0,0,118,119,5,61,0,0,119,30,
  	1,0,0,0,120,121,5,105,0,0,121,122,5,110,0,0,122,32,1,0,0,0,123,124,5,
  	119,0,0,124,125,5,104,0,0,125,126,5,105,0,0,126,127,5,108,0,0,127,128,
  	5,101,0,0,128,34,1,0,0,0,129,130,5,100,0,0,130,131,5,101,0,0,131,132,
  	5,102,0,0,132,36,1,0,0,0,133,134,5,114,0,0,134,135,5,101,0,0,135,136,
  	5,116,0,0,136,137,5,117,0,0,137,138,5,114,0,0,138,139,5,110,0,0,139,38,
  	1,0,0,0,140,141,5,43,0,0,141,40,1,0,0,0,142,143,5,45,0,0,143,42,1,0,0,
  	0,144,145,5,42,0,0,145,44,1,0,0,0,146,147,5,47,0,0,147,46,1,0,0,0,148,
  	149,5,37,0,0,149,48,1,0,0,0,150,151,5,112,0,0,151,152,5,114,0,0,152,153,
  	5,105,0,0,153,154,5,110,0,0,154,155,5,116,0,0,155,156,5,40,0,0,156,50,
  	1,0,0,0,157,158,5,44,0,0,158,52,1,0,0,0,159,163,7,0,0,0,160,162,7,1,0,
  	0,161,160,1,0,0,0,162,165,1,0,0,0,163,161,1,0,0,0,163,164,1,0,0,0,164,
  	54,1,0,0,0,165,163,1,0,0,0,166,168,7,2,0,0,167,166,1,0,0,0,168,169,1,
  	0,0,0,169,167,1,0,0,0,169,170,1,0,0,0,170,56,1,0,0,0,171,173,7,2,0,0,
  	172,171,1,0,0,0,173,176,1,0,0,0,174,172,1,0,0,0,174,175,1,0,0,0,175,177,
  	1,0,0,0,176,174,1,0,0,0,177,179,5,46,0,0,178,180,7,2,0,0,179,178,1,0,
  	0,0,180,181,1,0,0,0,181,179,1,0,0,0,181,182,1,0,0,0,182,58,1,0,0,0,183,
  	185,7,3,0,0,184,183,1,0,0,0,185,186,1,0,0,0,186,184,1,0,0,0,186,187,1,
  	0,0,0,187,188,1,0,0,0,188,189,6,29,0,0,189,60,1,0,0,0,6,0,163,169,174,
  	181,186,1,6,0,0
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
