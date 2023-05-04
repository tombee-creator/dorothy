#include "../../../include/parser.hpp"
using namespace Dorothy;

CREATE_CAN_PARSE_FUNCTION(ReturnStatement) {
    return tokens[_currentIndex].getType() == Token::Type::TK_RET;
}

CREATE_CAN_PARSE_FUNCTION(Statement) {
    if(canParse<ReturnStatement>(tokens)) return true;
    else {
        cerr << "* UNREACHABLE * @" << __FILE__ << ": " << __LINE__ << endl;
        exit(-1);
    }
}

CREATE_CAN_PARSE_FUNCTION(IntegerExpression) {
    return tokens[_currentIndex].getType() == Token::Type::TK_INT;
}

CREATE_CAN_PARSE_FUNCTION(Expression) {
    if(canParse<IntegerExpression>(tokens)) return true;
    else {
        cerr << "* UNREACHABLE * @" << __FILE__ << ": " << __LINE__ << endl;
        exit(-1);
    }
}

CREATE_CAN_PARSE_FUNCTION(Program) {
    return canParse<START_AST_NODE>(tokens);
}
