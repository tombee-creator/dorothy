#pragma once

#include <iostream>
#include "./lexer.hpp"
using namespace std;

namespace Dorothy {
    class ASTNode;
    class Statement;
    class ReturnStatement;
    class IntegerExpression;
    class Expression;

    #define START_AST_NODE Statement

    class ASTNode {
    public:
        virtual void print(ostream &) = 0;

        virtual void printLL(ostream &) = 0;
    protected:
        void printTab(ostream &os, int tab);
    private:
    };

    class Program {
        START_AST_NODE *_program;
    public:
        Program(START_AST_NODE *start):
            _program(start) {}

        virtual void print(ostream &);
        virtual void printLL(ostream &);
    protected:
    private:
    };

    class Statement: public ASTNode {
    public:
    protected:
    private:
    };

    class ReturnStatement: public Statement {
        Expression *_expr;
    public:
        ReturnStatement(Expression *expr): 
            Statement(), _expr(expr) {}

        virtual void print(ostream &);
        virtual void printLL(ostream &);

        Expression *getExpression();
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
        
        virtual void print(ostream &);
        virtual void printLL(ostream &);

        int getInteger();
    protected:
    private:
    };
}