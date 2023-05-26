
// Generated from Python.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "PythonParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by PythonParser.
 */
class  PythonListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(PythonParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(PythonParser::ProgramContext *ctx) = 0;

  virtual void enterStatement_list(PythonParser::Statement_listContext *ctx) = 0;
  virtual void exitStatement_list(PythonParser::Statement_listContext *ctx) = 0;

  virtual void enterStatement(PythonParser::StatementContext *ctx) = 0;
  virtual void exitStatement(PythonParser::StatementContext *ctx) = 0;

  virtual void enterAssignment_statement(PythonParser::Assignment_statementContext *ctx) = 0;
  virtual void exitAssignment_statement(PythonParser::Assignment_statementContext *ctx) = 0;

  virtual void enterIf_statement(PythonParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(PythonParser::If_statementContext *ctx) = 0;

  virtual void enterComparison(PythonParser::ComparisonContext *ctx) = 0;
  virtual void exitComparison(PythonParser::ComparisonContext *ctx) = 0;

  virtual void enterElif(PythonParser::ElifContext *ctx) = 0;
  virtual void exitElif(PythonParser::ElifContext *ctx) = 0;

  virtual void enterElseop(PythonParser::ElseopContext *ctx) = 0;
  virtual void exitElseop(PythonParser::ElseopContext *ctx) = 0;

  virtual void enterFunctioncall(PythonParser::FunctioncallContext *ctx) = 0;
  virtual void exitFunctioncall(PythonParser::FunctioncallContext *ctx) = 0;

  virtual void enterConop(PythonParser::ConopContext *ctx) = 0;
  virtual void exitConop(PythonParser::ConopContext *ctx) = 0;

  virtual void enterFor_statement(PythonParser::For_statementContext *ctx) = 0;
  virtual void exitFor_statement(PythonParser::For_statementContext *ctx) = 0;

  virtual void enterWhile_statement(PythonParser::While_statementContext *ctx) = 0;
  virtual void exitWhile_statement(PythonParser::While_statementContext *ctx) = 0;

  virtual void enterFunction_statement(PythonParser::Function_statementContext *ctx) = 0;
  virtual void exitFunction_statement(PythonParser::Function_statementContext *ctx) = 0;

  virtual void enterReturn_statement(PythonParser::Return_statementContext *ctx) = 0;
  virtual void exitReturn_statement(PythonParser::Return_statementContext *ctx) = 0;

  virtual void enterExpression_statement(PythonParser::Expression_statementContext *ctx) = 0;
  virtual void exitExpression_statement(PythonParser::Expression_statementContext *ctx) = 0;

  virtual void enterAddop(PythonParser::AddopContext *ctx) = 0;
  virtual void exitAddop(PythonParser::AddopContext *ctx) = 0;

  virtual void enterMulop(PythonParser::MulopContext *ctx) = 0;
  virtual void exitMulop(PythonParser::MulopContext *ctx) = 0;

  virtual void enterPrint(PythonParser::PrintContext *ctx) = 0;
  virtual void exitPrint(PythonParser::PrintContext *ctx) = 0;

  virtual void enterExpression(PythonParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(PythonParser::ExpressionContext *ctx) = 0;

  virtual void enterTerm(PythonParser::TermContext *ctx) = 0;
  virtual void exitTerm(PythonParser::TermContext *ctx) = 0;

  virtual void enterFactor(PythonParser::FactorContext *ctx) = 0;
  virtual void exitFactor(PythonParser::FactorContext *ctx) = 0;

  virtual void enterParameter_list(PythonParser::Parameter_listContext *ctx) = 0;
  virtual void exitParameter_list(PythonParser::Parameter_listContext *ctx) = 0;

  virtual void enterParameter(PythonParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(PythonParser::ParameterContext *ctx) = 0;


};

