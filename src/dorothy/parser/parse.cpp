#include "../../../include/parser.hpp"
using namespace Dorothy;

CREATE_PARSE_FUNCTION(IntegerExpression) {
    auto expr = new IntegerExpression(tokens[_currentIndex].getInteger());
    _currentIndex++;
    return expr;
}

CREATE_PARSE_FUNCTION(Expression) {
    if(canParse<IntegerExpression>(tokens)) return parse<IntegerExpression>(tokens);
    else {
        cerr << "* UNREACHABLE * @" << __FILE__ << ": " << __LINE__ << endl;
        exit(-1);
    }
}

CREATE_PARSE_FUNCTION(ReturnStatement) {
    if(tokens[_currentIndex].getType() != Token::TK_RET) {
        cerr << "* UNREACHABLE * @" << __FILE__ << ": " << __LINE__ << endl;
        exit(-1);
    }
    _currentIndex++;
    return new ReturnStatement(parse<Expression>(tokens));
}

CREATE_PARSE_FUNCTION(Statement) {
    if(canParse<ReturnStatement>(tokens)) return parse<ReturnStatement>(tokens);
    else {
        cerr << "* UNREACHABLE * @" << __FILE__ << ": " << __LINE__ << endl;
        exit(-1);
    }
}

CREATE_PARSE_FUNCTION(Program) {
    if(canParse<Program>(tokens)) {
        return new Program(
            parse<START_AST_NODE>(tokens));
    }
}
