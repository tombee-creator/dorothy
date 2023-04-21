#include "../../include/token.hpp"
using namespace Dorothy;

Lexer::Token 
Lexer::Token::createInteger(int integer) {
    return Token(Type::TK_INT, integer);
}

int
Lexer::Token::getInteger() {
    return integer;
}
