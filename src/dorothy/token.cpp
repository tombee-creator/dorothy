#include "../../include/token.hpp"
using namespace Dorothy;

Lexer::Token 
Lexer::Token::createInteger(int integer) {
    return Token(integer);
}

Lexer::Token 
Lexer::Token::createToken(char tokenType) 
{
    return Token((Lexer::Token::Type)tokenType);
}

int
Lexer::Token::getInteger() {
    return _integer;
}

Lexer::Token::Type
Lexer::Token::getType() {
    return _type;
}
