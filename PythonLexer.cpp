
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
      "T__25", "T__26", "T__27", "T__28", "T__29", "T__30", "T__31", "NAME", 
      "INTEGER", "FLOAT", "STRING_LITERAL", "ESC", "WHITESPACE"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,38,243,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,
  	1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,1,6,1,6,1,7,1,7,1,8,1,8,1,8,1,8,1,9,1,9,1,10,1,10,1,10,1,11,
  	1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,14,1,14,
  	1,15,1,15,1,16,1,16,1,16,1,17,1,17,1,17,1,18,1,18,1,18,1,19,1,19,1,19,
  	1,19,1,19,1,19,1,20,1,20,1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,23,1,23,
  	1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,25,1,25,1,25,1,25,1,25,1,25,
  	1,25,1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,30,1,30,1,31,1,31,1,31,
  	1,31,1,31,1,31,1,31,1,32,1,32,5,32,199,8,32,10,32,12,32,202,9,32,1,33,
  	3,33,205,8,33,1,33,4,33,208,8,33,11,33,12,33,209,1,34,5,34,213,8,34,10,
  	34,12,34,216,9,34,1,34,1,34,4,34,220,8,34,11,34,12,34,221,1,35,1,35,1,
  	35,5,35,227,8,35,10,35,12,35,230,9,35,1,35,1,35,1,36,1,36,1,36,1,37,4,
  	37,238,8,37,11,37,12,37,239,1,37,1,37,0,0,38,1,1,3,2,5,3,7,4,9,5,11,6,
  	13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,
  	37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,
  	30,61,31,63,32,65,33,67,34,69,35,71,36,73,37,75,38,1,0,6,3,0,65,90,95,
  	95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,48,57,3,0,10,10,13,13,34,34,
  	9,0,34,34,39,39,92,92,97,98,102,102,110,110,114,114,116,116,118,118,3,
  	0,9,10,13,13,32,32,250,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,
  	0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,
  	1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,
  	0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,
  	0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,
  	1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,
  	0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,
  	0,73,1,0,0,0,0,75,1,0,0,0,1,77,1,0,0,0,3,79,1,0,0,0,5,82,1,0,0,0,7,84,
  	1,0,0,0,9,86,1,0,0,0,11,88,1,0,0,0,13,99,1,0,0,0,15,110,1,0,0,0,17,112,
  	1,0,0,0,19,116,1,0,0,0,21,118,1,0,0,0,23,121,1,0,0,0,25,126,1,0,0,0,27,
  	131,1,0,0,0,29,134,1,0,0,0,31,136,1,0,0,0,33,138,1,0,0,0,35,141,1,0,0,
  	0,37,144,1,0,0,0,39,147,1,0,0,0,41,153,1,0,0,0,43,155,1,0,0,0,45,159,
  	1,0,0,0,47,162,1,0,0,0,49,168,1,0,0,0,51,172,1,0,0,0,53,179,1,0,0,0,55,
  	181,1,0,0,0,57,183,1,0,0,0,59,185,1,0,0,0,61,187,1,0,0,0,63,189,1,0,0,
  	0,65,196,1,0,0,0,67,204,1,0,0,0,69,214,1,0,0,0,71,223,1,0,0,0,73,233,
  	1,0,0,0,75,237,1,0,0,0,77,78,5,61,0,0,78,2,1,0,0,0,79,80,5,105,0,0,80,
  	81,5,102,0,0,81,4,1,0,0,0,82,83,5,40,0,0,83,6,1,0,0,0,84,85,5,41,0,0,
  	85,8,1,0,0,0,86,87,5,58,0,0,87,10,1,0,0,0,88,89,5,60,0,0,89,90,5,60,0,
  	0,90,91,5,73,0,0,91,92,5,78,0,0,92,93,5,68,0,0,93,94,5,69,0,0,94,95,5,
  	78,0,0,95,96,5,84,0,0,96,97,5,62,0,0,97,98,5,62,0,0,98,12,1,0,0,0,99,
  	100,5,60,0,0,100,101,5,60,0,0,101,102,5,68,0,0,102,103,5,69,0,0,103,104,
  	5,68,0,0,104,105,5,69,0,0,105,106,5,78,0,0,106,107,5,84,0,0,107,108,5,
  	62,0,0,108,109,5,62,0,0,109,14,1,0,0,0,110,111,5,38,0,0,111,16,1,0,0,
  	0,112,113,5,97,0,0,113,114,5,110,0,0,114,115,5,100,0,0,115,18,1,0,0,0,
  	116,117,5,124,0,0,117,20,1,0,0,0,118,119,5,111,0,0,119,120,5,114,0,0,
  	120,22,1,0,0,0,121,122,5,101,0,0,122,123,5,108,0,0,123,124,5,105,0,0,
  	124,125,5,102,0,0,125,24,1,0,0,0,126,127,5,101,0,0,127,128,5,108,0,0,
  	128,129,5,115,0,0,129,130,5,101,0,0,130,26,1,0,0,0,131,132,5,62,0,0,132,
  	133,5,61,0,0,133,28,1,0,0,0,134,135,5,62,0,0,135,30,1,0,0,0,136,137,5,
  	60,0,0,137,32,1,0,0,0,138,139,5,60,0,0,139,140,5,61,0,0,140,34,1,0,0,
  	0,141,142,5,61,0,0,142,143,5,61,0,0,143,36,1,0,0,0,144,145,5,33,0,0,145,
  	146,5,61,0,0,146,38,1,0,0,0,147,148,5,114,0,0,148,149,5,97,0,0,149,150,
  	5,110,0,0,150,151,5,103,0,0,151,152,5,101,0,0,152,40,1,0,0,0,153,154,
  	5,44,0,0,154,42,1,0,0,0,155,156,5,102,0,0,156,157,5,111,0,0,157,158,5,
  	114,0,0,158,44,1,0,0,0,159,160,5,105,0,0,160,161,5,110,0,0,161,46,1,0,
  	0,0,162,163,5,119,0,0,163,164,5,104,0,0,164,165,5,105,0,0,165,166,5,108,
  	0,0,166,167,5,101,0,0,167,48,1,0,0,0,168,169,5,100,0,0,169,170,5,101,
  	0,0,170,171,5,102,0,0,171,50,1,0,0,0,172,173,5,114,0,0,173,174,5,101,
  	0,0,174,175,5,116,0,0,175,176,5,117,0,0,176,177,5,114,0,0,177,178,5,110,
  	0,0,178,52,1,0,0,0,179,180,5,43,0,0,180,54,1,0,0,0,181,182,5,45,0,0,182,
  	56,1,0,0,0,183,184,5,42,0,0,184,58,1,0,0,0,185,186,5,47,0,0,186,60,1,
  	0,0,0,187,188,5,37,0,0,188,62,1,0,0,0,189,190,5,112,0,0,190,191,5,114,
  	0,0,191,192,5,105,0,0,192,193,5,110,0,0,193,194,5,116,0,0,194,195,5,40,
  	0,0,195,64,1,0,0,0,196,200,7,0,0,0,197,199,7,1,0,0,198,197,1,0,0,0,199,
  	202,1,0,0,0,200,198,1,0,0,0,200,201,1,0,0,0,201,66,1,0,0,0,202,200,1,
  	0,0,0,203,205,5,45,0,0,204,203,1,0,0,0,204,205,1,0,0,0,205,207,1,0,0,
  	0,206,208,7,2,0,0,207,206,1,0,0,0,208,209,1,0,0,0,209,207,1,0,0,0,209,
  	210,1,0,0,0,210,68,1,0,0,0,211,213,7,2,0,0,212,211,1,0,0,0,213,216,1,
  	0,0,0,214,212,1,0,0,0,214,215,1,0,0,0,215,217,1,0,0,0,216,214,1,0,0,0,
  	217,219,5,46,0,0,218,220,7,2,0,0,219,218,1,0,0,0,220,221,1,0,0,0,221,
  	219,1,0,0,0,221,222,1,0,0,0,222,70,1,0,0,0,223,228,5,34,0,0,224,227,3,
  	73,36,0,225,227,8,3,0,0,226,224,1,0,0,0,226,225,1,0,0,0,227,230,1,0,0,
  	0,228,226,1,0,0,0,228,229,1,0,0,0,229,231,1,0,0,0,230,228,1,0,0,0,231,
  	232,5,34,0,0,232,72,1,0,0,0,233,234,5,92,0,0,234,235,7,4,0,0,235,74,1,
  	0,0,0,236,238,7,5,0,0,237,236,1,0,0,0,238,239,1,0,0,0,239,237,1,0,0,0,
  	239,240,1,0,0,0,240,241,1,0,0,0,241,242,6,37,0,0,242,76,1,0,0,0,9,0,200,
  	204,209,214,221,226,228,239,1,6,0,0
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
