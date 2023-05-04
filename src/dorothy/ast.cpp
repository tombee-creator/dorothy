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

void
ReturnStatement::print(ostream &os) {
    printTab(os, 1);
    os << "return ";
    _expr->print(os);
    os << endl;
}

Expression * 
ReturnStatement::getExpression() {
    return _expr;
}

void
IntegerExpression::print(ostream &os) {
    os << _integer;
}

int 
IntegerExpression::getInteger() {
    return _integer;
}
