#include "../include/parser.hpp"
#include <gtest/gtest.h>
using namespace Dorothy;

TEST(ParserTest, ParserHandleInteger01) {
    vector<Lexer::Token> tokens;
    tokens.push_back(Lexer::Token::createInteger(11));
    
    Parser parser;
    IntegerExpression *integerExpression = parser.parse<IntegerExpression>(tokens);
    EXPECT_EQ(integerExpression->getInteger(), 11);
}

TEST(ParserTest, ParserHandleInteger02) {
    vector<Lexer::Token> tokens;
    tokens.push_back(Lexer::Token::createInteger(-11));
    
    Parser parser;
    IntegerExpression *integerExpression = parser.parse<IntegerExpression>(tokens);
    EXPECT_EQ(integerExpression->getInteger(), -11);
}

