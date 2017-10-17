#include "queue.h"

Queue::Queue()
{
        head = NULL;
}

int Queue::enqueue(int data)
{
        node* cursor = head;
        if (head) {
                while (cursor->next) cursor = cursor->next;
                cursor->next = new node;
                cursor = cursor->next;
        } else {
                cursor = head = new node;
        }
        cursor->data = data;
        cursor->next = NULL;
        return cursor->data;
}

int Queue::dequeue()
{
        if (head) {
                int data = head->data;
                node* old_head = head;
                head = head->next;
                delete old_head;
                return data;
        }
        throw "Nothing in queue.";
}

bool Queue::is_empty()
{
        return head ? false : true;
}

int Queue::peek()
{
        if (head) return head->data;
        throw "Nothing in queue.";
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