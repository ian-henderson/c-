#include <iostream>

struct node
{
    int data;
    node* next;
};

class Queue
{
    private:
        node* head;

    public:
        Queue();
        int dequeue();
        int enqueue(int);
        bool is_empty();
        int peek();
        std::string print();
};
