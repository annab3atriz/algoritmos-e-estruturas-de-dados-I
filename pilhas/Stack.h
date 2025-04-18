//Anna Beatriz Souza e Silva - 13694103
#include <iostream>
#include <string>
using namespace std;

#ifndef STACK_H
#define STACK_H

typedef char StackEntry;

class Stack{
    public:
        Stack();
        ~Stack();
        void push(StackEntry x);
        void pop(StackEntry &x);
        bool empty();
        bool full();
        void clear();
        int size();
        void getTop(StackEntry &x);
    public:
        struct StackNode;
        typedef StackNode (* StackPointer);

        struct StackNode {
            StackEntry entry;
            StackPointer nextNode;
        };

        StackPointer top;
        int count;
};

#endif