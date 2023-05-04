#include "../../../include/parser.hpp"
using namespace Dorothy;

void
Program::printLL(ostream &os) {
    os << "target triple = \"arm64-apple-macosx13.0.0\"" << endl;
    os << "define i32 @main()" << endl;
    os << "{" << endl;
    _program->printLL(os);
    os << "}" << endl;
}

void
ReturnStatement::printLL(ostream &os) {
    os << "ret ";
    _expr->printLL(os);
    os << endl;
}

void
IntegerExpression::printLL(ostream &os) {
    os << "i32 " << _integer;
}
