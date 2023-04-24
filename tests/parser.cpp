#include "../include/parser.hpp"
#include <gtest/gtest.h>
using namespace Dorothy;

TEST(ParserTest, ParserHandleInteger01) {
    vector<Token> tokens;
    tokens.push_back(Token::createInteger(11));
    
    Parser parser;
    IntegerExpression *integerExpression = parser.parse<IntegerExpression>(tokens);
    EXPECT_EQ(integerExpression->getInteger(), 11);
}

TEST(ParserTest, ParserHandleInteger02) {
    vector<Token> tokens;
    tokens.push_back(Token::createInteger(-11));
    
    Parser parser;
    IntegerExpression *integerExpression = parser.parse<IntegerExpression>(tokens);
    EXPECT_EQ(integerExpression->getInteger(), -11);
}

