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
  // std::string string_stream((std::istreambuf_iterator<char>(python_file)),std::istreambuf_iterator<char>());
  std::string line;
  std::string new_string = "";
  int tabspaces = 0;
  int indent_num = 0;
  int dedent_num = 0;
  // std::cout << "hello" <<std::endl;
  if(python_file){
    // std::cout << "hello" <<std::endl;
    while(std::getline(python_file,line)){

      int inlinetab = 0;
      int tab_num = 0;
      
      int x= 0;
      while(line[x] == ' '){
        tab_num++;
        x++;
      }
      
      std::cout << tab_num <<" " << tabspaces<<std::endl;

      if(tab_num > tabspaces ){
        line = "<<INDENT>>" + line;
        tabspaces+=4;
        indent_num++;
      }
      else if(tab_num < tabspaces){
        line = "<<DEDENT>>\n" + line;
        tabspaces-=4;
        dedent_num++;
      }
      new_string += line +"\n";
    }
  }
 while(indent_num > dedent_num){
    new_string+= "<<DEDENT>>\n";
    dedent_num++;
 }

  std::cout<< new_string;



  // ANTLRInputStream input("a=4\nb=6\nif a > b:<<INDENT>>\nprint(a)<<DEDENT>>\nprint(b)");
  ANTLRInputStream input(new_string);
  PythonLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  tokens.fill();
  PythonParser parser(&tokens);
  tree::ParseTree *tree2 = parser.program();
  MyListener listener;
  antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree2);
  std::cout << tree2->children.at(0)->toStringTree(&parser) << std::endl;

  // std::cout << tree2->toString() <<std::endl;
    // // PyObject *python_file = PyFile_FromString("test.py", "r");
  // // PyObject *input_string = PyObject_CallMethod(python_file, "read", NULL);
  // // std::string input_string_final = PyString_AsString(input_string);
  // // ANTLRInputStream file_stream(input_string_final);
  // // PythonLexer lexer(&file_stream);
  // // CommonTokenStream tokens(&lexer);
  // // PythonParser parser(&tokens);

  return 0;
}


