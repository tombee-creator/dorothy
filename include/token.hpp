#pragma once
#include <iostream>
using namespace std;

namespace Dorothy {
    class Token {
    public:
        enum Type {
            TK_EOF = 0,
            TK_INT,
            TK_RET,
            TK_ADD = '+',
            TK_SUB = '-',
            TK_MUL = '*',
            TK_DIV = '/',
            TK_MOD = '%',
        } _type;
        static Token createInteger(int);
        static Token createToken(char);
        static Token createKeywordToken(Token::Type);

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
