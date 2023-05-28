#pragma once

#include "mygrammarBaseVisitor.h"
#include <map>
#include <sstream>
#include <iomanip>

class MyVisitor : public mygrammarBaseVisitor {

    bool isDigit(char c) {
        if (((int)c - 48) < 0 || (((int)c - 48)) > 9)
            return false;
        else
            return true;
    }
    double stod(const char* str, int n) {
        double res = 0;
        double power = 1;                                
        int i = 0;
        bool f = false;

        if (str[0] == '-') {
            f = true;
            i++;
        }

        while (str[i] != '.') {
            if (i == n) {
                if (f)
                    return -res;
                else
                    return res;
            }
            res *= 10.0;

            if (!isDigit(str[i]))
                throw std::exception("invalid input");

            res += (double)((int)str[i] - 48);
            i++;
        }
        i++;

        while (i < n) {
            power /= 10.0;

            if (!isDigit(str[i]))
                throw std::exception("invalid input");

            res += power * ((double)((int)str[i] - 48));
            i++;
        }

        if (f)
            return -res;
        else
            return res;
    }

    std::any visitLexprR(mygrammarParser::LexprRContext* ctx) {
        return visit(ctx->expr());
    }

    std::any visitExprADDexpr(mygrammarParser::ExprADDexprContext* ctx)  {
        //std::cout << "expr_add_expr" << std::endl;
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
        //std::cout << "expr_mul_expr" << std::endl;
        double first = std::any_cast<double>(visit(ctx->expr(0)));
        double second = std::any_cast<double>(visit(ctx->expr(1)));
        if (ctx->MUL()) {
            return first * second;
        }
        else {
            return first / second;
        }
    }

    std::any visitProg_row(mygrammarParser::Prog_rowContext* ctx)  {
        //std::cout << "prog_row" << std::endl;
        double val = std::any_cast<double>(visit(ctx->row()));
        //data.insert(std::make_pair("result", val));
        return visit(ctx->prog());
    }

    std::any visitDOUBLE(mygrammarParser::DOUBLEContext* ctx) {
        double res = stod(ctx->DOUBLE()->getText().c_str(), ctx->DOUBLE()->getText().size());
        return res;
    }

    std::any visitExpr_sep(mygrammarParser::Expr_sepContext* ctx) {
        //double val = std::any_cast<double>(visit(ctx->expr()));
        //data.insert(std::make_pair("result", val));
        //std::cout << "expr_sep" << std::endl;
        return visit(ctx->expr());
    }

    std::any visitOneLineProg(mygrammarParser::OneLineProgContext* ctx)  {
        double val = std::any_cast<double>(visit(ctx->row()));
        //std::cout << "onelineprog" << std::endl;
        data.insert(std::make_pair("result", val));
        return val;
    }

    std::any visitCout_expr_sep(mygrammarParser::Cout_expr_sepContext* ctx) {
        double res = std::any_cast<double>(visit(ctx->expr()));
        std::cout <<"Print: " << res << std::endl;
        return res;
    }

    std::any visitVAR(mygrammarParser::VARContext* ctx) {
        //std::cout << "var" << std::endl;
        //std::cout <<"var = " << data[ctx->NAME()->getText()] << std::endl;
        return data[ctx->NAME()->getText()];
    }

    std::any visitADD_VAR(mygrammarParser::ADD_VARContext* ctx) {
        double res = std::any_cast<double>(visit(ctx->expr()));
        data.insert(std::make_pair(ctx->NAME()->getText(), res));
        //std::cout << "add_var" << " " << data[ctx->NAME()->getText()] << std::endl;
        return res;
    }

public:
    std::map<std::string, double> data;
};
