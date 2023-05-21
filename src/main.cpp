#include <string>
#include <sstream>
#include "antlr4-runtime/antlr4-runtime.h"
#include "mygrammarBaseVisitor.h"
#include "mygrammarLexer.h"
#include "mygrammarParser.h"
#include "mygrammarVisitor.h"


int main() {
	std::string express = "2+3;";
	std::stringstream stream(express);
	antlr4::ANTLRInputStream input(stream);
	mygrammarLexer lexer(&input);
	antlr4::CommonTokenStream tokens(&lexer);
	mygrammarParser parser(&tokens);
	mygrammarBaseVisitor visitor;
	visitor.visit(parser.prog());
	return 0;
}