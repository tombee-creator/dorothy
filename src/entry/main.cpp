#include <iostream>
#include <fstream>
#include "../../include/parser.hpp"
using namespace std;
using namespace Dorothy;

int
main(int argc, char** argv) {
    int tokenLength;
    Lexer lexer;
    Parser parser;
    auto tokens = lexer.lex(argv[1]);
    Program *program = parser.parse<Program>(tokens);
    program->printLL(cout);
    return 0;
}
