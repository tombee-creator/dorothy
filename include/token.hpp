#pragma once
#include <iostream>
#include "lexer.hpp"
using namespace std;

namespace Dorothy {
    class Lexer::Token {
    public:
        enum Type {
            TK_EOF = 0,
            TK_INT,
            TK_ADD = '+',
            TK_SUB = '-',
            TK_MUL = '*',
            TK_DIV = '/',
            TK_MOD = '%'
        } _type;
        static Token createInteger(int);
        static Token createToken(char);

        int getInteger();
        Type getType();
    private:

        int _integer;

        Token(Type type): 
            _type(type), _integer(0) {}
        Token(int integer): 
            _type(Type::TK_INT), _integer(integer) {}
    };
}
