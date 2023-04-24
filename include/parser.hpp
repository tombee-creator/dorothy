#include <iostream>
#include "./lexer.hpp"
#include "./ast.hpp"
using namespace std;

#define CREATE_PARSE_FUNCTION(CLASS_NAME) template<> \
    CLASS_NAME * \
    Parser::parse<CLASS_NAME>(vector<Token> tokens)

#define CREATE_CAN_PARSE_FUNCTION(CLASS_NAME) template<> \
    bool Parser::canParse<CLASS_NAME>(vector<Token> tokens)

namespace Dorothy {
    class Parser {
        int _currentIndex;
    public:
        Parser(): _currentIndex(0) {}

        template<class T>
        T *parse(vector<Token> tokens);
    protected:
    private:
        template<class T>
        bool canParse(vector<Token> tokens);
    };
}
