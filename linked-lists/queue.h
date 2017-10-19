#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include "node.h"

class Queue {
        private:
                node *head;
        public:
                Queue();
                int dequeue();
                bool empty();
                int enqueue(int);
                int length();
                int peek();
                std::string print();
                int remove(int);
};

#endif
