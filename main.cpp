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

int main(int argc, char* argv[]) {
  std::ifstream python_file(argv[1]);
  std::string line;
  std::string new_string = "";
  int tabspaces = 0;
  int indent_num = 0;
  int dedent_num = 0;

  if(python_file){//this edits the python file and adds <<INDENT>> and <<DEDENT>> in the string stream 

    while(std::getline(python_file,line)){

      int inlinetab = 0;
      int tab_num = 0;
      
      int x= 0;
      while(line[x] == ' '){
        tab_num++;
        x++;
      }
      if(tab_num > tabspaces ){
        line = "<<INDENT>>" + line;
        tabspaces+=4;
        indent_num++;
      }
      else if(tab_num < tabspaces){
        while(tab_num != tabspaces){
          line = "<<DEDENT>>\n" + line;
          tabspaces-=4;
          dedent_num++;
        }
      }
      new_string += line +"\n";
    }
}
 while(indent_num > dedent_num){
    new_string+= "<<DEDENT>>\n";
    dedent_num++;
 }

//  std::cout <<new_string <<std::endl;

tree::ParseTree *tree2;

try{
  ANTLRInputStream input(new_string);
  PythonLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  tokens.fill();
  PythonParser parser(&tokens);
  tree::ParseTree *tree2 = parser.program();
  if( parser.getNumberOfSyntaxErrors() > 0) {
    throw std::runtime_error("syntax error!");
  }
  // std::cout << tree2->children.at(0)->toStringTree(&parser) << std::endl;
  MyListener listener;
  antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree2);
  
} catch(const std::exception &e){
  std::cout << "Exception Caught " << e.what() <<std::endl;
  return 0;
} 
 
  return 0;
}


