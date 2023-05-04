#pragma once
#include <iostream>
#include <vector>
#include <cstdio>

#include "./token.hpp"
using namespace std;

namespace Dorothy {
    class Lexer {
    public:
        std::vector<Token> lex(char *);
    private:
        std::vector<Token> _tokens;
        int currentIndex = 0;

        bool tokenizeInteger(char *);
        bool tokenizeKeywordToken(Token::Type, char *, char *);
        bool skipSpace(char *);

        bool isDigit(char);
        void copyString(char *from, char *to, int length);
    };
}
