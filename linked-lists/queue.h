#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include "node.h"

class Queue {
        private:
                node* head;
        public:
                Queue();
                int enqueue(int);
                int dequeue();
                bool is_empty();
                int peek();
                std::string print();
};

#endif
