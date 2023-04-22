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
IntegerExpression::print(ostream &os) {
    os << _integer;
}
