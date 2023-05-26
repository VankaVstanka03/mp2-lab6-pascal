#include <string>
#include <sstream>
#include "antlr4-runtime/antlr4-runtime.h"
#include "mygrammarBaseVisitor.h"
#include "mygrammarLexer.h"
#include "mygrammarParser.h"
#include "mygrammarVisitor.h"
#include "myvisitors.h"


int main() {
	std::string express = "1.424 + 5323.234;";
	std::stringstream stream(express);
	antlr4::ANTLRInputStream input(stream);
	mygrammarLexer lexer(&input);
	antlr4::CommonTokenStream tokens(&lexer);
	mygrammarParser parser(&tokens);
	MyVisitor visitor;
	visitor.visit(parser.prog());
	std::cout << visitor.data[0] << std::endl;
	return 0;
}