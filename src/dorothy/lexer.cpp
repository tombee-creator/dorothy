#include "../../include/lexer.hpp"
using namespace Dorothy;
using namespace std;

vector<Token>
Lexer::lex(char *inputLine) {
    while(inputLine[currentIndex] != '\0') {
        if(tokenizeInteger(inputLine)) continue;
    }
    return _tokens;
}

bool
Lexer::tokenizeInteger(char *inputLine) {
    int startIndex;
    int endIndex;
    
    if(!isDigit(inputLine[currentIndex])) {
        return false;
    }
    startIndex = currentIndex;
    while(isDigit(inputLine[currentIndex])) {
        currentIndex++;
    }
    endIndex = currentIndex;
    
    int length = endIndex - startIndex + 1;
    char *newString = new char[length];
    copyString(&inputLine[startIndex], newString, length);
    int intValue = atoi(newString);
    delete[] newString;
    
    _tokens.push_back(Token::createInteger(intValue));

    return true;
}

void Lexer::copyString(char *from, char *to, int length) {
    for(int i = 0; i < length; i++) {
        to[i] = from[i];
    }
}

bool 
Lexer::isDigit(char c) {
    return '0' <= c && c <= '9';
}
