#pragma once
#include <iostream>
#include <vector>
#include <cstdio>

namespace Dorothy {
    class Lexer {
    public:
        class Token;

        std::vector<Token> lex(char *);
    private:
        std::vector<Token> _tokens;
        int currentIndex = 0;

        bool tokenizeInteger(char *);

        bool isDigit(char);
        void copyString(char *from, char *to, int length);
    };
}

#include "token.hpp"
