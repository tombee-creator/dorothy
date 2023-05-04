#include "../../include/token.hpp"
using namespace Dorothy;

Token 
Token::createInteger(int integer) {
    return Token(integer);
}

Token 
Token::createToken(char tokenType) {
    return Token((Token::Type)tokenType);
}

Token
Token::createKeywordToken(Token::Type tokenType) {
    return Token(tokenType);
}

int
Token::getInteger() {
    return _integer;
}

Token::Type
Token::getType() {
    return _type;
}
