#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "node.h"

class Stack {
        private:
                node* head;
        public:
                Stack();
                int push(int);
                int pop();
                bool is_empty();
                int peek();
                std::string print();
};

#endif
