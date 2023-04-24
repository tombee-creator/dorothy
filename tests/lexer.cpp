#include "../include/lexer.hpp"
#include <gtest/gtest.h>
using namespace Dorothy;

TEST(Lexer, LexerTest1){
  Lexer lexer;
  auto tokens = lexer.lex("11");
  EXPECT_EQ(tokens.size(), 1);
}

TEST(Lexer, LexerLexTest01){
  Lexer lexer;
  auto tokens = lexer.lex("11");
  EXPECT_EQ(tokens.size(), 1);
  EXPECT_EQ(tokens[0].getType(), Token::Type::TK_INT);
  EXPECT_EQ(tokens[0].getInteger(), 11);
}
