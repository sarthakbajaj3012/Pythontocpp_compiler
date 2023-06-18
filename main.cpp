#include <iostream>
#include <fstream>
#include "PythonLexer.h"
#include "PythonParser.h"
#include "antlr4-runtime.h"
#include <Python/Python.h>
#include "mylistener.cpp"
#include <iterator>
#include <string>
#include <vector>
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
    std::vector<int> indentnum;

    while(std::getline(python_file,line)){

      int tab_num = 0;
      
      int x= 0;
      if(line == "") continue;
      while(line[x] == ' '){
        tab_num++;
        x++;
      }
      if(tab_num > tabspaces ){
        indentnum.push_back(tab_num - tabspaces);
        line = "<<INDENT>>" + line;
        tabspaces+= (tab_num - tabspaces);
        indent_num++;
      }
      else if(tab_num < tabspaces){
        while(tab_num != tabspaces){
          line = "<<DEDENT>>\n" + line;
          tabspaces -= indentnum.at(indentnum.size() - 1);
          indentnum.pop_back();
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

try{
  ANTLRInputStream input(new_string);
  PythonLexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  tokens.fill();

  PythonParser parser(&tokens);
  tree::ParseTree *tree = parser.program();
 
  if( parser.getNumberOfSyntaxErrors() > 0) {
    throw std::runtime_error("syntax error!");
  }
  MyListener listener;
  tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
} catch(const std::exception &e){
  std::cout << "Exception Caught " << e.what() <<std::endl;
  return 0;
} 
 
  return 0;
}


