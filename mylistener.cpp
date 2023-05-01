#include "antlr4-runtime.h"
#include "PythonBaseListener.h"
#include "PythonParser.h"
#include "set"

#include "antlr4-common.h"

using namespace antlrcpp;
using namespace antlr4;



class MyListener : public PythonBaseListener {
public:
    std::string converted_code = "int main(){\n";
    std::string end_code =  "return 0;\n}";
    std::set<std::string> var_names;
    int index = converted_code.size();
    virtual void enterProgram(PythonParser::ProgramContext * /*ctx*/) override { }
    virtual void exitProgram(PythonParser::ProgramContext * /*ctx*/) override { }

    virtual void enterStatement_list(PythonParser::Statement_listContext * /*ctx*/) override { }
    virtual void exitStatement_list(PythonParser::Statement_listContext * /*ctx*/) override { }

    virtual void enterStatement(PythonParser::StatementContext * ctx) override {
        
    }
    virtual void exitStatement(PythonParser::StatementContext * ctx) override { 
       converted_code.append(";\n");
    }

    virtual void enterAssignment_statement(PythonParser::Assignment_statementContext * ctx) override { 
        std::string temp = "";
        std::string var = ctx->NAME()->toString();
      
        var_names.insert(var);
        temp = "int " + var + " = ";
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
        std::cout << ctx.
    }
    virtual void exitExpression_statement(PythonParser::Expression_statementContext * /*ctx*/) override { }

    virtual void enterExpression(PythonParser::ExpressionContext * ctx) override {
        
    }
    virtual void exitExpression(PythonParser::ExpressionContext * /*ctx*/) override { }

    virtual void enterTerm(PythonParser::TermContext * ctx) override {
        
     }
    virtual void exitTerm(PythonParser::TermContext * /*ctx*/) override { }

    virtual void enterFactor(PythonParser::FactorContext * ctx) override {
        // std::string temp ="";

        if(ctx->INTEGER() != nullptr){
            // std::cout << ctx->INTEGER()->getText() << std::endl;
        }
        else if(ctx->NAME() != nullptr){
            // std::cout << ctx->NAME()->getText() << std::endl;
        }
  
    }
    virtual void exitFactor(PythonParser::FactorContext * /*ctx*/) override { }

    virtual void enterParameter_list(PythonParser::Parameter_listContext * /*ctx*/) override { }
    virtual void exitParameter_list(PythonParser::Parameter_listContext * /*ctx*/) override { }

    virtual void enterParameter(PythonParser::ParameterContext * /*ctx*/) override { }
    virtual void exitParameter(PythonParser::ParameterContext * /*ctx*/) override { }


    virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
    virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
    virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
    virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }
    

    
};
