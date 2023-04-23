#include "../../../include/parser.hpp"
using namespace Dorothy;

CREATE_PARSE_FUNCTION(IntegerExpression) {
    return new IntegerExpression(tokens[_currentIndex].getInteger());
}

CREATE_PARSE_FUNCTION(Program) {
    if(canParse<Program>(tokens)) {
        Program *program = new Program(
            parse<START_AST_NODE>(tokens));
    }
}
