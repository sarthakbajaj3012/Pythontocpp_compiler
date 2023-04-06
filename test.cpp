#include <iostream>
#include "PythonLexer.h"
#include "PythonParser.h"
// #include "PythonBaseListener.h"
#include "antlr4-runtime.h"

using namespace antlr4;

// int main(int argc, const char* argv[]) {
//     if (argc != 2) {
//         std::cerr << "Usage: " << argv[0] << " <input_file>" << std::endl;
//         return 1;
//     }

//     try {
//         ANTLRFileStream input(argv[1]);
//         PythonLexer lexer(&input);
//         CommonTokenStream tokens(&lexer);
//         PythonParser parser(&tokens);

//         auto tree = parser.parse();
//         auto visitor = MyVisitor();
//         visitor.visit(tree);

//         // Print out the statements in the program
//         for (auto stmt : statement_list) {
//             std::cout << stmt << std::endl;
//         }
//     } catch (std::exception& e) {
//         std::cerr << "Exception caught: " << e.what() << std::endl;
//         return 1;
//     }

//     return 0;
// }


// #include "antlr4-runtime.h"
// #include "TLexer.h"
// #include "TParser.h"

using namespace antlrcpp;
using namespace antlr4;

int main(int , const char **) {
  ANTLRInputStream input("x = 2 + 3 * 4\ny = 5\nz = x + y\n");
  PythonLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  PythonParser parser(&tokens);
  tree::ParseTree *tree = parser.program();

  std::cout << tree->toStringTree(&parser) << std::endl;

  return 0;
}


