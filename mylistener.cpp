#include "antlr4-runtime.h"
#include "PythonBaseListener.h"
#include "PythonParser.h"
#include <map>
#include <fstream>
#include <sstream>
#include <iostream>
#include <cstdlib>

#include "antlr4-common.h"

using namespace antlrcpp;
using namespace antlr4;



class MyListener : public PythonBaseListener {
public:

    
    std::string converted_code = "int main(){\n";
    std::string headers = "#include <iostream>\n";
    std::map<std::string, std::string> var_names;
    int tabspaces = 1;
    int function_tabspaces = 0;
    int index = converted_code.size();
    bool assignment = false;
    bool function = false;
    std::string assignment_type = "int";
    std::string assignment_string = "";
    std::string function_string = "";
    std::string function_type = "int";

    std::string addtab() {
        std::string temp =  "";
        for(int i = 0;  i < tabspaces;i++) {
               temp += "\t";
        }
        return temp;
    }
    std::string functionaddtab() {
        std::string temp =  "";
        for(int i = 0;  i < function_tabspaces;i++) {
               temp += "\t";
        }
        return temp;
    }
    virtual void enterProgram(PythonParser::ProgramContext * /*ctx*/) override { }
    virtual void exitProgram(PythonParser::ProgramContext * /*ctx*/) override { 
        converted_code.append("\treturn 0; \n}");
        std::string filename = "newfile.cpp";
        std::ofstream outfile(filename);
        if (outfile.is_open()) {
            std::stringstream ss;

            ss << headers << converted_code;
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

    virtual void enterStatement(PythonParser::StatementContext * /*ctx*/) override {}
    virtual void exitStatement(PythonParser::StatementContext * ctx) override { 
       if( ctx->if_statement() != nullptr || ctx->while_statement() != nullptr) converted_code.append("\n");
       else {
            if(function) function_string.append(";\n");
            else converted_code.append(";\n");
        }
    }

    virtual void enterAssignment_statement(PythonParser::Assignment_statementContext * ctx) override { 
        std::string var = ctx->NAME()->toString();

        
        if(var_names.find(var) == var_names.end()){
            assignment_string = "";
            assignment_type = "int";
            assignment = true;
            assignment_string = var + " = ";
            var_names[var] = assignment_type;
        } 
        else {
            if(function) function_string.append(functionaddtab() + var +" = ");
            else converted_code.append(addtab() + var + " = ");
        }
    }

    virtual void exitAssignment_statement(PythonParser::Assignment_statementContext * /*ctx*/) override { 
        if(function) function_string.append(functionaddtab() + assignment_type +" " + assignment_string);
        else if(assignment) converted_code.append(addtab() + assignment_type +" " + assignment_string);
        assignment_string ="";
        assignment = false;
    }

    virtual void enterIf_statement(PythonParser::If_statementContext * ctx) override { 
        if(function) function_string.append(functionaddtab() + "if(");
        else converted_code.append(addtab() + "if(");
        if(function) function_tabspaces++;
        else tabspaces++;
    }
    virtual void exitIf_statement(PythonParser::If_statementContext * /*ctx*/) override {
       
        if(function) { 
            function_tabspaces--;
            function_string.append(functionaddtab() +"}\n");
        }
        else {
            tabspaces--;
            converted_code.append(addtab() +"}\n");
        }
        
    }

    virtual void enterElif(PythonParser::ElifContext * /*ctx*/) override { }
    virtual void exitElif(PythonParser::ElifContext * /*ctx*/) override { }

    virtual void enterElseop(PythonParser::ElseopContext * ctx) override {
        if(function) {
            function_string.append(functionaddtab() + "} else {\n");
            } else {
            converted_code.append(addtab() + "} else {\n");
        }
        if(function) function_tabspaces++;
        else tabspaces++;

    }
    virtual void exitElseop(PythonParser::ElseopContext * /*ctx*/) override { 
        if(function) function_tabspaces--;
        else tabspaces--;
    }

    virtual void enterWhile_statement(PythonParser::While_statementContext * ctx) override {
        std::string temp = addtab();
        tabspaces++;
        converted_code.append(temp + "while(" );
     }
    virtual void exitWhile_statement(PythonParser::While_statementContext * /*ctx*/) override {
        tabspaces--;
        std::string temp = addtab();
        converted_code.append(temp + "}");
     }

    virtual void enterFunction_statement(PythonParser::Function_statementContext * ctx) override { 
        function = true; 
        function_string = functionaddtab() + ctx->NAME()->getText();
        function_tabspaces++;
    }
    virtual void exitFunction_statement(PythonParser::Function_statementContext * /*ctx*/) override { 
        headers.append( function_type+ " " +function_string);
        tabspaces--;
        headers.append(addtab() + "}\n");
        function = false;
    }

    virtual void enterReturn_statement(PythonParser::Return_statementContext * ctx) override {
        if(function) function_string.append(addtab() + "return " );
        else converted_code.append(addtab() + "return " );
    }
    virtual void exitReturn_statement(PythonParser::Return_statementContext * /*ctx*/) override { }

    virtual void enterExpression_statement(PythonParser::Expression_statementContext * /*ctx*/) override { }
    virtual void exitExpression_statement(PythonParser::Expression_statementContext * /*ctx*/) override { }

    virtual void enterExpression(PythonParser::ExpressionContext * /*ctx*/) override {}
    virtual void exitExpression(PythonParser::ExpressionContext * /*ctx*/) override {}

    virtual void enterTerm(PythonParser::TermContext * /*ctx*/) override {}
    virtual void exitTerm(PythonParser::TermContext * /*ctx*/) override {}

    virtual void enterAddop(PythonParser::AddopContext * ctx) override { 
        if(function) function_string.append(" "+ ctx->getText() + " ");
        else if(assignment)assignment_string.append( " "+ ctx->getText() + " ");
        else converted_code.append( " "+ ctx->getText() + " ");
    }
    virtual void exitAddop(PythonParser::AddopContext * /*ctx*/) override { }

    virtual void enterMulop(PythonParser::MulopContext * ctx) override {
        if(function) function_string.append(ctx->getText());
        else if(assignment) assignment_string.append( ctx->getText());
        else converted_code.append( ctx->getText());
    }
    virtual void exitMulop(PythonParser::MulopContext * /*ctx*/) override { }

    virtual void enterFactor(PythonParser::FactorContext * ctx) override {

        if(ctx->INTEGER() != nullptr){
            if(function & !assignment) function_string.append(ctx->INTEGER()->getText());
            else if(assignment) assignment_string.append(ctx->INTEGER()->getText());
            else  converted_code.append(ctx->INTEGER()->getText());

        }
        else if(ctx->NAME() != nullptr){  
            if(function & !assignment) function_string.append( ctx->NAME()->getText());
            else if(assignment) assignment_string.append( ctx->NAME()->getText());
            else converted_code.append( ctx->NAME()->getText());
            if(var_names[ctx->NAME()->getText()] != "int" && assignment){
                assignment_type = "float";
            }
            if(var_names[ctx->NAME()->getText()] != "int" && function){
                function_type = "float";
            }
        }
        else if(ctx->FLOAT() != nullptr){
            if(function & !assignment) function_string.append(ctx->FLOAT()->getText());
            else if(assignment)  assignment_string.append( ctx->FLOAT()->getText());
            else converted_code.append( ctx->FLOAT()->getText());
            if(assignment) assignment_type = "float";
            if(function) function_type = "float";
        }
        else if(ctx->expression() != nullptr) {
            if(function & !assignment) function_string.append("(");
            if(assignment) assignment_string.append("(");
            else converted_code.append("(");
        }
  
    }
    virtual void exitFactor(PythonParser::FactorContext * ctx) override { 
        if(ctx->expression() != nullptr) {
            if(function & !assignment) function_string.append(")");
            else if(assignment) assignment_string.append(")");
            else converted_code.append(")");
        }
    }

    virtual void enterParameter_list(PythonParser::Parameter_listContext * ctx) override { 
        function_string += "( ";
        for(int i = 0; i< ctx->parameter().size() - 1 ;i++){
            function_string += "int " + ctx->parameter().at(i)->getText() + ", "; 
        }
        function_string += "int " + ctx->parameter().at(ctx->parameter().size() -1 )->getText() + "){\n" ;

        
    }
    virtual void exitParameter_list(PythonParser::Parameter_listContext * /*ctx*/) override {}

    virtual void enterParameter(PythonParser::ParameterContext * /*ctx*/) override { }
    virtual void exitParameter(PythonParser::ParameterContext * /*ctx*/) override { }


    virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
    virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }

    virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
    virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

    virtual void enterComparison(PythonParser::ComparisonContext * /*ctx*/) override { }
    virtual void exitComparison(PythonParser::ComparisonContext * ctx) override { 
        if(function) function_string.append("){\n");
        else converted_code.append("){\n");

    }

    virtual void enterConop(PythonParser::ConopContext * ctx) override {
        if(function) function_string.append( " "+ ctx->getText() + " ");
        else if(assignment) assignment_string.append( " "+ ctx->getText() + " ");
        else converted_code.append( " "+ ctx->getText() + " ");
        
     }
    virtual void exitConop(PythonParser::ConopContext * /*ctx*/) override { }

    virtual void enterPrint(PythonParser::PrintContext * ctx) override { 
        if(function) function_string.append( functionaddtab() + "std::cout << " + ctx->NAME()->getText() + " << std::endl");
        else converted_code.append(
            addtab() + "std::cout << " + ctx->NAME()->getText() + " << std::endl"
        );
        
    }
    virtual void exitPrint(PythonParser::PrintContext * /*ctx*/) override { }
    
};