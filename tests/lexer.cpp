#include "../include/lexer.hpp"
#include <gtest/gtest.h>
using namespace Dorothy;

TEST(Lexer, LexerTest1){
  Lexer lexer;
  auto tokens = lexer.lex("11");
  EXPECT_EQ(tokens.size(), 1);
}

TEST(Lexer, LexerLexTest101){
  Lexer lexer;
  auto tokens = lexer.lex("11");
  EXPECT_EQ(tokens.size(), 1);
  EXPECT_EQ(tokens[0].getType(), Token::Type::TK_INT);
  EXPECT_EQ(tokens[0].getInteger(), 11);
}

TEST(Lexer, LexerTest2){
  Lexer lexer;
  auto tokens = lexer.lex("return");
  EXPECT_EQ(tokens.size(), 1);
}

TEST(Lexer, LexerLexTest201){
  Lexer lexer;
  auto tokens = lexer.lex("return");
  EXPECT_EQ(tokens.size(), 1);
  EXPECT_EQ(tokens[0].getType(), Token::Type::TK_RET);
}
