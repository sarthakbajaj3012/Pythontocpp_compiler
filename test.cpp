#include <iostream>
#include "PythonLexer.h"
#include "PythonParser.h"
#include "antlr4-runtime.h"


using namespace antlrcpp;
using namespace antlr4;

int main(int , const char **) {
  ANTLRInputStream input("x = 8\n x = x + 9");
  PythonLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  // for (auto token : tokens.getTokens()) {
  //   std::cout << token->toString() << std::endl;
  // }

  PythonParser parser(&tokens);
  tree::ParseTree *tree2 = parser.program();

  std::cout << tree2->children.at(0)->toString() << std::endl;

  // std::cout << tree2->toString() <<std::endl;

  return 0;
}


