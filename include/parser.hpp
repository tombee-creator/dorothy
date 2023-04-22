#include <iostream>
#include "./lexer.hpp"
#include "./ast.hpp"
using namespace std;

namespace Dorothy {
    class Parser {
        int _currentIndex;
    public:
        Parser(): _currentIndex(0) {}

        template<class T>
        T *parse(vector<Lexer::Token> tokens);
    protected:
    private:
        template<class T>
        bool canParse(vector<Lexer::Token> tokens) {
            T instance;
            return instance.canParse(tokens, _currentIndex);
        }
    };
}
