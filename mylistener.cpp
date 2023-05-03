#include "antlr4-runtime.h"
#include "PythonBaseListener.h"
#include "PythonParser.h"
#include "set"
#include <fstream>
#include <sstream>
#include <iostream>
#include <cstdlib>

#include "antlr4-common.h"

using namespace antlrcpp;
using namespace antlr4;



class MyListener : public PythonBaseListener {
public:
    std::string converted_code = "\nint main(){\n";
    std::string libraries = "#include <iostream>\n";
    std::set<std::string> var_names;
    int tabspaces = 1;
    int index = converted_code.size();
    virtual void enterProgram(PythonParser::ProgramContext * /*ctx*/) override { }
    virtual void exitProgram(PythonParser::ProgramContext * /*ctx*/) override { 
        converted_code.append("\treturn 0; \n}");
        std::cout << converted_code <<std::endl;

        std::string filename = "newfile.cpp";
        std::ofstream outfile(filename);
        if (outfile.is_open()) {
            std::stringstream ss;
            ss << converted_code;
            outfile << ss.rdbuf();
            outfile.close();

            std::cout << "New file created: " << filename << std::endl;
            system("g++ -o new newfile.cpp"); // Compile the C++ file
            system("./new"); // Execute the compiled program
            //to-do add error catching while compiling the c++ file

        }  
        else {
            std::cout << "Failed to create new file" << std::endl;
        }
    }

    virtual void enterStatement_list(PythonParser::Statement_listContext * /*ctx*/) override { }
    virtual void exitStatement_list(PythonParser::Statement_listContext * /*ctx*/) override { }

    virtual void enterStatement(PythonParser::StatementContext * ctx) override {
        
    }
    virtual void exitStatement(PythonParser::StatementContext * ctx) override { 
    //    converted_code.append(";\n");
    }

    virtual void enterAssignment_statement(PythonParser::Assignment_statementContext * ctx) override { 
        std::string temp = "";
        std::string var = ctx->NAME()->toString();
        for(int i = 0;  i < tabspaces;i++) {
               temp += "\t";
        }

        if(var_names.find(var) == var_names.end()){
            var_names.insert(var);
            
            temp += "int " + var + " = ";
            converted_code.append(temp);

        } else {
            temp += var + " = ";
            converted_code.append(temp);
        }
      
        
        std::vector<PythonParser::TermContext*> terms = ctx->expression()->term();
        // std::cout << temp <<std::endl;
    }

    virtual void exitAssignment_statement(PythonParser::Assignment_statementContext * /*ctx*/) override { }

    virtual void enterIf_statement(PythonParser::If_statementContext * /*ctx*/) override { }
    virtual void exitIf_statement(PythonParser::If_statementContext * /*ctx*/) override { }

    virtual void enterWhile_statement(PythonParser::While_statementContext * /*ctx*/) override { }
    virtual void exitWhile_statement(PythonParser::While_statementContext * /*ctx*/) override { }

    virtual void enterFunction_statement(PythonParser::Function_statementContext * /*ctx*/) override { }
    virtual void exitFunction_statement(PythonParser::Function_statementContext * /*ctx*/) override { }

    virtual void enterReturn_statement(PythonParser::Return_statementContext * /*ctx*/) override { }
    virtual void exitReturn_statement(PythonParser::Return_statementContext * /*ctx*/) override { }

    virtual void enterExpression_statement(PythonParser::Expression_statementContext * ctx) override { 
        
    }
    virtual void exitExpression_statement(PythonParser::Expression_statementContext * /*ctx*/) override { }

    virtual void enterExpression(PythonParser::ExpressionContext * /*ctx*/) override {}
    virtual void exitExpression(PythonParser::ExpressionContext * /*ctx*/) override { 
        converted_code.append(";\n");
    }

    virtual void enterTerm(PythonParser::TermContext * /*ctx*/) override {
    }
    virtual void exitTerm(PythonParser::TermContext * /*ctx*/) override {
        converted_code.append("");
    }

    virtual void enterAddop(PythonParser::AddopContext * ctx) override { 
          converted_code.append( " "+ ctx->getText() + " ");
    }
    virtual void exitAddop(PythonParser::AddopContext * /*ctx*/) override { }

    virtual void enterMulop(PythonParser::MulopContext * ctx) override {
        converted_code.append( ctx->getText());
        // if(ctx->getText() == "/"){
        //     libraries += "#include <cmath>";
        // }
    }
    virtual void exitMulop(PythonParser::MulopContext * /*ctx*/) override { }

    virtual void enterFactor(PythonParser::FactorContext * ctx) override {

        if(ctx->INTEGER() != nullptr){
            converted_code.append(ctx->INTEGER()->getText());
        }
        else if(ctx->NAME() != nullptr){
            converted_code.append( ctx->NAME()->getText());
        }
        else if(ctx->expression() != nullptr) {
            converted_code.append("(");
        }
  
    }
    virtual void exitFactor(PythonParser::FactorContext * ctx) override { 
        if(ctx->expression() != nullptr) {
            converted_code.append(")");
            
        }
    }

    virtual void enterParameter_list(PythonParser::Parameter_listContext * /*ctx*/) override { }
    virtual void exitParameter_list(PythonParser::Parameter_listContext * /*ctx*/) override { }

    virtual void enterParameter(PythonParser::ParameterContext * /*ctx*/) override { }
    virtual void exitParameter(PythonParser::ParameterContext * /*ctx*/) override { }


    virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
    virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
    virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
    virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

    virtual void enterComparison(PythonParser::ComparisonContext * /*ctx*/) override { }
    virtual void exitComparison(PythonParser::ComparisonContext * /*ctx*/) override { }

    virtual void enterConop(PythonParser::ConopContext * /*ctx*/) override { }
    virtual void exitConop(PythonParser::ConopContext * /*ctx*/) override { }
    
};
