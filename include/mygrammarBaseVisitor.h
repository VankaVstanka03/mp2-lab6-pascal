
// Generated from mygrammar.g4 by ANTLR 4.12.0

#pragma once

#include <any>
#include "antlr4-runtime/antlr4-runtime.h"
#include "mygrammarVisitor.h"


/**
 * This class provides an empty implementation of mygrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  mygrammarBaseVisitor : public mygrammarVisitor {
public:

  virtual std::any visitExpr(mygrammarParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerm(mygrammarParser::TermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactor(mygrammarParser::FactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRow(mygrammarParser::RowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProg(mygrammarParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }


};

