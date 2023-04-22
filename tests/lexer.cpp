#include "../include/lexer.hpp"
#include <gtest/gtest.h>
using namespace Dorothy;

TEST(Lexer, LexerTest1){
  Lexer lexer;
  auto tokens = lexer.lex("11");
  EXPECT_EQ(tokens.size(), 1);
}
