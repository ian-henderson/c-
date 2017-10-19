#include "queue.h"

Queue::Queue()
{
        head = NULL;
}

int Queue::dequeue()
{
        if (head) {
                int data = head->data;
                node *old_head = head;
                head = head->next;
                delete old_head;
                return data;
        }
        throw "Nothing in queue.";
}

bool Queue::empty()
{
        return head ? false : true;
}

int Queue::enqueue(int data)
{
        node *cursor = head;
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

int Queue::length()
{
        if (head) {
                node *cursor = head;
                int length = 1;
                while (cursor->next) {
                        cursor = cursor->next;
                        length++;
                }
                return length;
        }
        return 0;
}

int Queue::peek()
{
        if (head) return head->data;
        throw "Nothing in queue.";
}

std::string Queue::print()
{
        node *cursor = head;
        std::string output = "";
        while (cursor) {
                output += std::to_string(cursor->data);
                if (cursor->next) output += " ";
                cursor = cursor->next;
        }
        return output;
}

int Queue::remove(int index)
{
        if (head) {
                node *cursor = head;
                if (index == 0) {
                        node *old_head = cursor;
                        head = cursor->next;
                        delete old_head;
                        return 0;
                }
                for (int i = 0; i < (index - 1); i++) cursor = cursor->next;
                if (!cursor->next) throw "Index out of bounds.";
                node *old_node = cursor->next;
                cursor->next = cursor->next->next;
                delete old_node;
                return 0;
        }
        throw "Nothing in queue.";
}
