#include "../../include/ast.hpp"
using namespace Dorothy;

void
ASTNode::printTab(ostream &os, int tab) {
    for(int i = 0; i < tab; i++) {
        os << "\t";
    }
}

void 
Program::print(ostream &os) {
    _program->print(os);
    os << endl;
}

bool 
Program::canParse(vector<Lexer::Token> tokens, int currentIndex) {
    START_AST_NODE ast;
    return ast.canParse(tokens, currentIndex);
}

void
IntegerExpression::print(ostream &os) {
    os << _integer;
}

bool 
IntegerExpression::canParse(vector<Lexer::Token> tokens, int currentIndex) {
    return tokens[currentIndex].getType() == Lexer::Token::Type::TK_INT;
}
