#include "../../include/parser.hpp"
using namespace Dorothy;

template<>
IntegerExpression *
Parser::parse<IntegerExpression>(vector<Lexer::Token> tokens) {
    return new IntegerExpression(tokens[_currentIndex].getInteger());
}

template<>
Program *
Parser::parse<Program>(vector<Lexer::Token> tokens) {
    if(canParse<Program>(tokens)) {
        Program *program = new Program(
            parse<START_AST_NODE>(tokens));
    }
}
