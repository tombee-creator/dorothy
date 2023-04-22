#pragma once

#include <iostream>
#include "./lexer.hpp"
using namespace std;

namespace Dorothy {
    class ASTNode;
    class Expression;

    class ASTNode {
    public:
        virtual void print(ostream &) = 0;
    protected:
        void printTab(ostream &os, int tab);
    private:
    };

    class Program {
        ASTNode *_program;
    public:
        Program():
            _program(NULL) {}

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
        IntegerExpression(int integer): 
            Expression(), _integer(integer) {}
    protected:
        virtual void print(ostream &);
    private:
    };
}