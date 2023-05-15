#include <iostream>
#include <fstream>
#include "PythonLexer.h"
#include "PythonParser.h"
#include "antlr4-runtime.h"
#include <Python/Python.h>
#include "mylistener.cpp"
#include <iterator>
#include <string>



using namespace antlrcpp;
using namespace antlr4;

int main(int , const char **) {
  std::ifstream python_file("test.py");
  std::string string_stream((std::istreambuf_iterator<char>(python_file)),std::istreambuf_iterator<char>());
  // ANTLRInputStream input("def trying(a,b):\n<<INDENT>>a+b<<DEDENT>>d = 4\ne=5\nprint(b)");
  ANTLRInputStream input(string_stream);
  PythonLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  // PyObject *python_file = PyFile_FromString("test.py", "r");
  // PyObject *input_string = PyObject_CallMethod(python_file, "read", NULL);
  // std::string input_string_final = PyString_AsString(input_string);
  // ANTLRInputStream file_stream(input_string_final);
  // PythonLexer lexer(&file_stream);
  // CommonTokenStream tokens(&lexer);
  // PythonParser parser(&tokens);

  // int x = 5;
  // float y = 5/2;
  // std::cout << y << std::endl;

  tokens.fill();
  // for (auto token : tokens.getTokens()) {
  //   std::cout << token->toString() << std::endl;
  // }

  PythonParser parser(&tokens);
  tree::ParseTree *tree2 = parser.program();

  MyListener listener;


  antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree2);


  std::cout << tree2->children.at(0)->toStringTree(&parser) << std::endl;

  // std::cout << tree2->toString() <<std::endl;

  return 0;
}


