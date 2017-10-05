#include "queue.h"

Queue::Queue()
{
    head = NULL;
}

int Queue::dequeue()
{
    if (head) {
        int value = head->data;
        node* old_head = head;
        head = head->next;
        delete old_head;
        return value;
    }
    throw "Nothing in queue.";
}

int Queue::enqueue(int value)
{
    node* cursor = head;
    if (cursor) {
        while (cursor->next) cursor = cursor->next;
        cursor->next = new node;
        cursor = cursor->next;
    } else {
        cursor = head = new node;
    }
    cursor->data = value;
    cursor->next = NULL;
    return cursor->data;
}

bool Queue::is_empty()
{
  return head ? false : true;
}

int Queue::peek()
{
  if (head) return head->data; else throw "Nothing in queue.";
}

std::string Queue::print()
{
    node* cursor = head;
    std::string output = "";
    while (cursor) {
        output += std::to_string(cursor->data);
        if (cursor->next) output += " ";
        cursor = cursor->next;
    }
    return output;
}
