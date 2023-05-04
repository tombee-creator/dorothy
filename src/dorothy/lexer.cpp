#include "../../include/lexer.hpp"
using namespace Dorothy;
using namespace std;

vector<Token>
Lexer::lex(char *input) {
    while(input[currentIndex] != '\0') {
        if(tokenizeKeywordToken(Token::TK_RET, "return", input)) continue;
        if(tokenizeInteger(input)) continue;
        if(skipSpace(input)) continue;
        cerr << "can't tokenize symbol: " << input[currentIndex] << endl;
        exit(-1);
    }
    return _tokens;
}

bool 
Lexer::skipSpace(char *input) {
    if(input[currentIndex] != ' ' && 
        input[currentIndex] != '\t' && 
        input[currentIndex] != '\r' && 
        input[currentIndex] != '\n') {
            return false;
    }
    currentIndex++;
    return true;
}

bool
Lexer::tokenizeKeywordToken(Token::Type type, char *keyword, char *inputLine) {
    if(strncmp(keyword, inputLine + currentIndex, strlen(keyword)) != 0) return false;
    currentIndex += strlen(keyword);
    _tokens.push_back(Token::createKeywordToken(Token::TK_RET));
    return true;
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
