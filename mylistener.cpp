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
    std::string functions = "";
    std::map<std::string, std::string> var_names;
    std::map<std::string,std::string> function_parameters;
    std::map<std::string,std::string> function_variables;
    std::vector<std::string> loop_var;
    std::string iterator_name = "";
    std::string iterator_new = "";
    int tabspaces = 1;
    int function_tabspaces = 0;
    int index = converted_code.size();
    bool for_loop = false;
    bool while_loop = false;
    bool assignment = false;
    bool function = false;
    bool functioncall = false;
    bool division = false;
    bool return_state  = false;
    bool expression_state = true;
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

            ss << headers <<functions << converted_code;
            outfile << ss.rdbuf();
            outfile.close();

            std::cout << "New file created: " << filename << std::endl;
            system("g++ -std=c++17 -o new newfile.cpp"); // Compile the C++ file
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
       if( ctx->if_statement() != nullptr || ctx->while_statement() != nullptr || ctx->for_statement() != nullptr) {
            if(function) function_string.append("\n");
            else converted_code.append("\n");
        }
       else if(ctx->function_statement()!= nullptr) converted_code.append("");
       else {
            if(function) function_string.append(";\n");
            else converted_code.append(";\n");
        }
    }

    virtual void enterAssignment_statement(PythonParser::Assignment_statementContext * ctx) override { 
        std::string var = ctx->NAME()->toString();

       if(function){
            if(function_variables.find(var) == function_variables.end() || function_variables[var] == ""){
                assignment_string = "";
                assignment_type = "int";
                assignment = true;
                assignment_string = var + " = ";
                function_variables[var] = assignment_type;
            } 
            else {
                function_string.append(functionaddtab() + var +" = ");
            }
       }
       else{
            
            if(var_names.find(var) == var_names.end() || var_names[var] == ""){
                assignment_string = "";
                assignment_type = "int";
                assignment = true;
                assignment_string = var + " = ";
                var_names[var] = assignment_type;
                std::cout << var <<std::endl;
            } 
            else {
                converted_code.append(addtab() + var + " = ");
            }
       }
    }
    virtual void exitAssignment_statement(PythonParser::Assignment_statementContext * ctx) override { 
        if(function) {
            if(assignment) function_string.append(functionaddtab() + assignment_type +" " + assignment_string);
            function_variables[ctx->NAME()->getText()] = assignment_type;
            if(for_loop || while_loop) loop_var.push_back(ctx->NAME()->getText());
        }
        else {
            
            if(assignment) {
                converted_code.append(addtab() + assignment_type + " " + assignment_string);
                var_names[ctx->NAME()->getText()] = assignment_type;
                if(for_loop || while_loop) loop_var.push_back(ctx->NAME()->getText());
            }
        }
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

    virtual void enterElif(PythonParser::ElifContext * ctx) override { 
       
        if(function) {
            function_tabspaces--;
            function_string.append(functionaddtab() + "} \n" + functionaddtab() + "else if(");
            function_tabspaces++;
        }
        else {
            tabspaces--;
            converted_code.append(addtab() + "}\n" + addtab() + "else if(");
            tabspaces++;
        }
    }
    virtual void exitElif(PythonParser::ElifContext * /*ctx*/) override {}

    virtual void enterElseop(PythonParser::ElseopContext * ctx) override {
        if(function) {
            function_tabspaces--;
            function_string.append(functionaddtab() + "}\n" + functionaddtab() + "else {\n");
            function_tabspaces++;
            } else {
            tabspaces--;
            converted_code.append(addtab() + "}\n" + addtab() + "else {\n");
            tabspaces++;
        }
    }
    virtual void exitElseop(PythonParser::ElseopContext * /*ctx*/) override { 
    }

    virtual void enterWhile_statement(PythonParser::While_statementContext * ctx) override {
        while_loop = true;
        if(function) {
            function_string.append(functionaddtab() + "while(");
            function_tabspaces++;
        }
        else{
             converted_code.append(addtab() + "while(" );
             tabspaces++;
        }
     }
    virtual void exitWhile_statement(PythonParser::While_statementContext * /*ctx*/) override {
        if(function) {
            function_tabspaces--;
            function_string.append( functionaddtab() + "}");
            for (int i = 0; i < loop_var.size();i++){
                function_variables.erase(loop_var.at(i));
            }
        }
        else {
            tabspaces--;
            converted_code.append(addtab() + "}");
            for (int i = 0; i < loop_var.size();i++){
                var_names.erase(loop_var.at(i));
            }
        }
        loop_var.clear();
        while_loop = false;
     }

    virtual void enterFunction_statement(PythonParser::Function_statementContext * ctx) override { 
        function = true; 
        function_type = "int ";
        function_parameters.clear();
        function_string = functionaddtab() + ctx->NAME()->getText();
        function_tabspaces++;   
    }
    virtual void exitFunction_statement(PythonParser::Function_statementContext * ctx) override { 
        functions.append( function_type+" " +function_string);
        function_tabspaces--;
        functions.append(functionaddtab() + "}\n");
        function = false;
        var_names[ctx->NAME()->getText()] = function_type;
        function_type = "int";
    }

    virtual void enterReturn_statement(PythonParser::Return_statementContext * ctx) override {
        return_state = true;
        if(function) function_string.append(functionaddtab() + "return " );
        else converted_code.append(addtab() + "return " );
    }
    virtual void exitReturn_statement(PythonParser::Return_statementContext * /*ctx*/) override {
        return_state = false;
     }

    virtual void enterExpression_statement(PythonParser::Expression_statementContext * /*ctx*/) override { }
    virtual void exitExpression_statement(PythonParser::Expression_statementContext * /*ctx*/) override { }

    virtual void enterExpression(PythonParser::ExpressionContext * ctx) override {

        if( strcmp(typeid(*ctx->parent).name(),  "N12PythonParser12RangeContextE") == 0) expression_state = false;
        else expression_state = true;
    }
    virtual void exitExpression(PythonParser::ExpressionContext * /*ctx*/) override {}

    virtual void enterTerm(PythonParser::TermContext * ctx) override {
        for(int i = 0; i< ctx->mulop().size();i++){
            if(ctx->mulop().at(i)->getText() == "/") {
                division = true;
                if(assignment) assignment_type = "float";  
                break;
            }
        }

    }
    virtual void exitTerm(PythonParser::TermContext * /*ctx*/) override {
        division = false;
    }

    virtual void enterAddop(PythonParser::AddopContext * ctx) override { 
        if(expression_state){
            if(function  & !assignment) function_string.append(" "+ ctx->getText() + " ");
            else if(assignment)assignment_string.append( " "+ ctx->getText() + " ");
            else converted_code.append( " "+ ctx->getText() + " ");
        }
    }
    virtual void exitAddop(PythonParser::AddopContext * /*ctx*/) override { }

    virtual void enterMulop(PythonParser::MulopContext * ctx) override {
        if(expression_state){
            if(function & !assignment) function_string.append(ctx->getText());
            else if(assignment) assignment_string.append( ctx->getText());
            else converted_code.append( ctx->getText());
        }
    }
    virtual void exitMulop(PythonParser::MulopContext * /*ctx*/) override { }

    virtual void enterFactor(PythonParser::FactorContext * ctx) override {
        if(expression_state){
            if(ctx->INTEGER() != nullptr){
                if(function & !assignment){
                    if(division) function_string.append("static_cast<float>(" +ctx->INTEGER()->getText() +")"); 
                    else function_string.append(ctx->INTEGER()->getText());
                }
                else if(assignment){
                    if(division) assignment_string.append("static_cast<float>(" +ctx->INTEGER()->getText()+")");
                    else assignment_string.append(ctx->INTEGER()->getText());
                }
                else {
                    if(division) converted_code.append("static_cast<float>(" +ctx->INTEGER()->getText()+")");
                    else converted_code.append(ctx->INTEGER()->getText());
                } 

            }
            else if(ctx->NAME() != nullptr){  

                if(function) {
                    if(assignment){
                            if(division) assignment_string.append( "static_cast<float>(" + ctx->NAME()->getText() +")");
                            else assignment_string.append(  ctx->NAME()->getText());
                    }
                    else {
                            if(division) function_string.append(  "static_cast<float>(" + ctx->NAME()->getText() + ")"); 
                            else function_string.append( ctx->NAME()->getText());
                            if(return_state & function_variables[ctx->NAME()->getText()] != "int") function_type = function_variables[ctx->NAME()->getText()];
                    }
                }
                else if(assignment){
                        if(division) assignment_string.append( "static_cast<float>(" + ctx->NAME()->getText() + ")"); 
                        else {
                            assignment_string.append( ctx->NAME()->getText());
                            }
                        if(var_names[ctx->NAME()->getText()] != "int"){
                            assignment_type = var_names[ctx->NAME()->getText()];
                        }
                }
                else converted_code.append( ctx->NAME()->getText());   
                
            }
            else if(ctx->FLOAT() != nullptr){
                if(function & !assignment) function_string.append(ctx->FLOAT()->getText());
                else if(assignment)  assignment_string.append( ctx->FLOAT()->getText());
                else converted_code.append( ctx->FLOAT()->getText());
                if(assignment) assignment_type = "float";
            }
            else if(ctx->expression() != nullptr) {
                if(function & !assignment) function_string.append("(");
                if(assignment) assignment_string.append("(");
                else converted_code.append("(");
            }
            else if(ctx->STRING_LITERAL()!= nullptr){
                if(function & !assignment) function_string.append(ctx->STRING_LITERAL()->getText());
                else if(assignment)  assignment_string.append( ctx->STRING_LITERAL()->getText());
                else converted_code.append( ctx->STRING_LITERAL()->getText());
                if(assignment) assignment_type = "std::string";

            }  
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
        
        if(function & !functioncall){
            function_string += "( ";
            if(ctx->parameter().size() == 0)function_string += "){\n" ;
        }
        else if(assignment){
            assignment_string.append("(");
        }
        else if(functioncall){
            if(function) function_string.append("(");
            else converted_code.append("(");
        }
    }
    virtual void exitParameter_list(PythonParser::Parameter_listContext * ctx) override {
        if(assignment) {
            if(ctx->parameter().size() > 0 ) assignment_string[assignment_string.size() -1] = ')';
            else assignment_string.append(")");
        }
        if(function & !functioncall){
            if(ctx->parameter().size() > 0 ){
                function_string[function_string.size() - 1] = ')';
                function_string.append("{\n");
            }
                
        }
        else if (functioncall & !assignment) {
            if(function) function_string[function_string.size() -1 ] = ')';
            else converted_code[converted_code.size() -1 ] = ')';
        }
    }

    virtual void enterParameter(PythonParser::ParameterContext * ctx) override {
        if(function & !functioncall) function_string += "float ";
    }
    virtual void exitParameter(PythonParser::ParameterContext * ctx) override { 
        if(assignment) assignment_string.append(",");
        else if(functioncall & !function) converted_code.append(",");
        else if(function ) function_string.append(",");
        
        function_parameters[ctx->getText()] = "float";
        function_variables[ctx->getText()] = "float";
    }

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
        
        if( ctx->NAME() != nullptr){
            if(function)function_string.append( functionaddtab() + "std::cout << " + ctx->NAME()->getText() + " << std::endl");
            else converted_code.append(
                addtab() + "std::cout << " + ctx->NAME()->getText() + " << std::endl"
            );
        }
        else if(ctx->STRING_LITERAL() != nullptr){
            std::cout << ctx->STRING_LITERAL()->getText() << std::endl;
            if(function)function_string.append( functionaddtab() + "std::cout << " + ctx->STRING_LITERAL()->getText() + " << std::endl");
            else converted_code.append(
                addtab() + "std::cout << " + ctx->STRING_LITERAL()->getText() + " << std::endl"
            );
        }
        
    }
    virtual void exitPrint(PythonParser::PrintContext * /*ctx*/) override { }

    virtual void enterFunctioncall(PythonParser::FunctioncallContext * ctx) override {
        functioncall = true;
        if(function){
            if(assignment) assignment_string.append(ctx->NAME()->getText());
            else  function_string.append(functionaddtab() + ctx->NAME()->getText());
        }
        else {
            if(assignment) assignment_string.append( ctx->NAME()->getText());
            else  converted_code.append(addtab() + ctx->NAME()->getText());
        }

    }
    virtual void exitFunctioncall(PythonParser::FunctioncallContext * ctx) override {
        functioncall = false;
        assignment_type = var_names[ctx->NAME()->getText()];
     }

    virtual void enterFor_statement(PythonParser::For_statementContext * ctx) override {
        iterator_name = ctx->NAME().at(0)->getText();
        for_loop = true;
        if(function){
            if(ctx->NAME().size() >1 ) {
                function_string.append(functionaddtab() +"for(int i_ = 0; i_ <" + ctx->NAME().at(1)->getText()+ ".size();i_++){\n");
                function_tabspaces++;
                function_string.append( functionaddtab() + "char " + iterator_name +" = " + ctx->NAME().at(1)->getText()+".at(i_);\n");
                function_variables["i_"] = "int";  
                loop_var.push_back("i_");
            }
            else if(ctx->range() != nullptr){
                function_string.append(addtab()+ "for(int " + ctx->NAME().at(0)->getText() + " = " + ctx->range()->expression().at(0)->getText()+";"+ctx->NAME().at(0)->getText()+
                "<"+ ctx->range()->expression().at(1)->getText() +";" +ctx->NAME().at(0)->getText() +"++){\n");
                function_tabspaces++;
                function_variables[ctx->NAME().at(0)->getText()] = "int"; 
                loop_var.push_back(ctx->NAME().at(0)->getText());    
            }
            else {
                function_string.append(functionaddtab()+ "for(int i_ = 0; i_ <" + ctx->STRING_LITERAL()->getText()+ ".size();i_++){\n");
                function_tabspaces++;
                function_string.append( functionaddtab() + "char " + iterator_name +" = " + ctx->STRING_LITERAL()->getText()+".at(i_);\n");
                function_variables["i_"] = "int";  
                loop_var.push_back("i_");
            }
        }
        else {
            if(ctx->NAME().size() >1 ) {
                converted_code.append(addtab() +"for(int i_ = 0; i_ <" + ctx->NAME().at(1)->getText()+ ".size();i_++){\n");
                tabspaces++;
                converted_code.append( addtab() + "char " + iterator_name +" = " + ctx->NAME().at(1)->getText()+".at(i_);\n");
                var_names["i_"] = "int";  
                loop_var.push_back("i_");
            }
            else if(ctx->range() != nullptr){
                converted_code.append(addtab()+ "for(int " + ctx->NAME().at(0)->getText() + " = " + ctx->range()->expression().at(0)->getText()+";"+ctx->NAME().at(0)->getText()+
                "<"+ ctx->range()->expression().at(1)->getText() +";" +ctx->NAME().at(0)->getText() +"++){\n");
                tabspaces++;
                var_names[ctx->NAME().at(0)->getText()] = "int"; 
                loop_var.push_back(ctx->NAME().at(0)->getText());             
            }
            else {
                converted_code.append(addtab()+ "for(int i_ = 0; i_ <" + ctx->STRING_LITERAL()->getText()+ ".size();i_++){\n");
                tabspaces++;
                converted_code.append( addtab() + "char " + iterator_name +" = " +ctx->STRING_LITERAL()->getText()+".at(i_);\n");
                var_names["i_"] = "int";  
                loop_var.push_back("i_");
            }
        }
        

    }
    virtual void exitFor_statement(PythonParser::For_statementContext * /*ctx*/) override {

        for_loop = false;
        if(function) {
            function_tabspaces--;
            function_string.append( functionaddtab() + "}");
            for (int i = 0; i < loop_var.size();i++){
                function_variables.erase(loop_var.at(i));
            }
        }
        else {
            tabspaces--;
            converted_code.append(addtab() + "}");
            for (int i = 0; i < loop_var.size();i++){
                var_names.erase(loop_var.at(i));
            }
        }
        loop_var.clear();
    }
    
};