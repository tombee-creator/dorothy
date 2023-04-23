#include "../../../include/parser.hpp"
using namespace Dorothy;

CREATE_CAN_PARSE_FUNCTION(IntegerExpression) {
    return tokens[_currentIndex].getType() == Lexer::Token::Type::TK_INT;
}

CREATE_CAN_PARSE_FUNCTION(Program) {
    return canParse<START_AST_NODE>(tokens);
}
