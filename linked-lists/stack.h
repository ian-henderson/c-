#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "node.h"

class Stack {
        private:
                node *head;
        public:
                Stack();
                bool empty();
                int peek();
                int pop();
                std::string print();
                int push(int);
};

#endif
