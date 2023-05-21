
// Generated from mygrammar.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime/antlr4-runtime.h"
#include "mygrammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by mygrammarParser.
 */
class  mygrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by mygrammarParser.
   */
    virtual std::any visitExpr(mygrammarParser::ExprContext *context) = 0;

    virtual std::any visitTerm(mygrammarParser::TermContext *context) = 0;

    virtual std::any visitFactor(mygrammarParser::FactorContext *context) = 0;

    virtual std::any visitRow(mygrammarParser::RowContext *context) = 0;

    virtual std::any visitProg(mygrammarParser::ProgContext *context) = 0;


};

