#pragma once
#include <iostream>
#include "lexer.hpp"
using namespace std;

namespace Dorothy {
    class Lexer::Token {
    private:
        enum Type {
            TK_EOF = 0,
            TK_INT
        } type;

        int integer;

        Token(Type type, int integer): 
            type(type), integer(integer) {}
    public:
        static Token createInteger(int);

        int getInteger();
    };
}
