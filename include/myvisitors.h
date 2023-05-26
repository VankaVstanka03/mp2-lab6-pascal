#pragma once

#include "mygrammarBaseVisitor.h"

class MyVisitor : public mygrammarBaseVisitor {
    std::any visitLexprR(mygrammarParser::LexprRContext* ctx) {
        return visit(ctx->expr());
    }

    std::any visitExprADDexpr(mygrammarParser::ExprADDexprContext* ctx)  {
        std::cout << "add" << std::endl;
        double first = std::any_cast<double>(visit(ctx->expr(0)));
        double second = std::any_cast<double>(visit(ctx->expr(1)));
        if (ctx->ADD()) {
            return first + second;
        }
        else {
            return first - second;
        }
    }

    std::any visitExprMULexpr(mygrammarParser::ExprMULexprContext* ctx)  {
        std::cout << "mul" << std::endl;
        double first = std::any_cast<double>(visit(ctx->expr(0)));
        double second = std::any_cast<double>(visit(ctx->expr(1)));
        if (ctx->MUL()) {
            return first * second;
        }
        else {
            return first / second;
        }
    }

    std::any visitINTEGER(mygrammarParser::INTEGERContext* ctx)  {
        std::cout << "int" << std::endl;
        double res = std::stod(ctx->INT()->getText());
        return res;
    }

    std::any visitExpr_sep(mygrammarParser::Expr_sepContext* ctx)  {
        return visit(ctx->expr());
    }

    std::any visitProg_row(mygrammarParser::Prog_rowContext* ctx)  {
        std::cout << "prog_row" << std::endl;
        data.push_back(std::any_cast<double>(visit(ctx->row())));
        return visit(ctx->prog());
    }

    std::any visitDOUBLE(mygrammarParser::DOUBLEContext* ctx) {
        std::cout << "double" << std::endl;
        double res = std::stod(ctx->DOUBLE()->getText());
        std::cout << res << std::endl;
        return res;
    }

    std::any visitOneLineProg(mygrammarParser::OneLineProgContext* ctx)  {
        std::cout << "onelineprog" << std::endl;
        double val = std::any_cast<double>(visit(ctx->row()));
        data.push_back(val);
        return val;
    }
public:
    std::vector<double> data;
};
