#pragma once

#include <iostream>
#include "./lexer.hpp"
using namespace std;

namespace Dorothy {
    class ASTNode;
    class IntegerExpression;
    class Expression;

    #define START_AST_NODE IntegerExpression

    class ASTNode {
    public:
        virtual void print(ostream &) = 0;
    protected:
        void printTab(ostream &os, int tab);
    private:
    };

    class Program {
        START_AST_NODE *_program;
    public:
        Program(): _program(NULL) {}
        Program(START_AST_NODE *start):
            _program(start) {}

        virtual void print(ostream &);
    protected:
    private:
    };

    class Expression: public ASTNode {
    public:
    protected:
    private:
    };

    class IntegerExpression: public Expression {
        int _integer;
    public:
        IntegerExpression(): 
            Expression(), _integer(0) {}
        IntegerExpression(int integer): 
            Expression(), _integer(integer) {}
        
        virtual void print(ostream &);

        int getInteger();
    protected:
    private:
    };
}