
// Generated from Python.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "PythonListener.h"


/**
 * This class provides an empty implementation of PythonListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  PythonBaseListener : public PythonListener {
public:

  virtual void enterProgram(PythonParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(PythonParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement_list(PythonParser::Statement_listContext * /*ctx*/) override { }
  virtual void exitStatement_list(PythonParser::Statement_listContext * /*ctx*/) override { }

  virtual void enterStatement(PythonParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(PythonParser::StatementContext * /*ctx*/) override { }

  virtual void enterAssignment_statement(PythonParser::Assignment_statementContext * /*ctx*/) override { }
  virtual void exitAssignment_statement(PythonParser::Assignment_statementContext * /*ctx*/) override { }

  virtual void enterIf_statement(PythonParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(PythonParser::If_statementContext * /*ctx*/) override { }

  virtual void enterJoin_op(PythonParser::Join_opContext * /*ctx*/) override { }
  virtual void exitJoin_op(PythonParser::Join_opContext * /*ctx*/) override { }

  virtual void enterCondition_statement(PythonParser::Condition_statementContext * /*ctx*/) override { }
  virtual void exitCondition_statement(PythonParser::Condition_statementContext * /*ctx*/) override { }

  virtual void enterComparison_statement(PythonParser::Comparison_statementContext * /*ctx*/) override { }
  virtual void exitComparison_statement(PythonParser::Comparison_statementContext * /*ctx*/) override { }

  virtual void enterComparison(PythonParser::ComparisonContext * /*ctx*/) override { }
  virtual void exitComparison(PythonParser::ComparisonContext * /*ctx*/) override { }

  virtual void enterElif(PythonParser::ElifContext * /*ctx*/) override { }
  virtual void exitElif(PythonParser::ElifContext * /*ctx*/) override { }

  virtual void enterElseop(PythonParser::ElseopContext * /*ctx*/) override { }
  virtual void exitElseop(PythonParser::ElseopContext * /*ctx*/) override { }

  virtual void enterFunctioncall(PythonParser::FunctioncallContext * /*ctx*/) override { }
  virtual void exitFunctioncall(PythonParser::FunctioncallContext * /*ctx*/) override { }

  virtual void enterConop(PythonParser::ConopContext * /*ctx*/) override { }
  virtual void exitConop(PythonParser::ConopContext * /*ctx*/) override { }

  virtual void enterRange(PythonParser::RangeContext * /*ctx*/) override { }
  virtual void exitRange(PythonParser::RangeContext * /*ctx*/) override { }

  virtual void enterFor_statement(PythonParser::For_statementContext * /*ctx*/) override { }
  virtual void exitFor_statement(PythonParser::For_statementContext * /*ctx*/) override { }

  virtual void enterWhile_statement(PythonParser::While_statementContext * /*ctx*/) override { }
  virtual void exitWhile_statement(PythonParser::While_statementContext * /*ctx*/) override { }

  virtual void enterFunction_statement(PythonParser::Function_statementContext * /*ctx*/) override { }
  virtual void exitFunction_statement(PythonParser::Function_statementContext * /*ctx*/) override { }

  virtual void enterReturn_statement(PythonParser::Return_statementContext * /*ctx*/) override { }
  virtual void exitReturn_statement(PythonParser::Return_statementContext * /*ctx*/) override { }

  virtual void enterExpression_statement(PythonParser::Expression_statementContext * /*ctx*/) override { }
  virtual void exitExpression_statement(PythonParser::Expression_statementContext * /*ctx*/) override { }

  virtual void enterAddop(PythonParser::AddopContext * /*ctx*/) override { }
  virtual void exitAddop(PythonParser::AddopContext * /*ctx*/) override { }

  virtual void enterMulop(PythonParser::MulopContext * /*ctx*/) override { }
  virtual void exitMulop(PythonParser::MulopContext * /*ctx*/) override { }

  virtual void enterPrint(PythonParser::PrintContext * /*ctx*/) override { }
  virtual void exitPrint(PythonParser::PrintContext * /*ctx*/) override { }

  virtual void enterExpression(PythonParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(PythonParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterTerm(PythonParser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(PythonParser::TermContext * /*ctx*/) override { }

  virtual void enterData_type(PythonParser::Data_typeContext * /*ctx*/) override { }
  virtual void exitData_type(PythonParser::Data_typeContext * /*ctx*/) override { }

  virtual void enterPrint_type(PythonParser::Print_typeContext * /*ctx*/) override { }
  virtual void exitPrint_type(PythonParser::Print_typeContext * /*ctx*/) override { }

  virtual void enterPrinttype_list(PythonParser::Printtype_listContext * /*ctx*/) override { }
  virtual void exitPrinttype_list(PythonParser::Printtype_listContext * /*ctx*/) override { }

  virtual void enterFactor(PythonParser::FactorContext * /*ctx*/) override { }
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

