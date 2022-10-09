/* Copyright 2022(Tomoya Bansho@tomoya-kwansei) */
#include "../include/lexer.hpp"

int main(int argc, char** argv) {
    Lexer lexer;
    lexer.lex("func main() { int a; a = 3; return 3; }");
    return 0;
}
