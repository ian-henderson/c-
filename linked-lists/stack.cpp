#include "stack.h"

Stack::Stack()
{
        head = NULL;
}

bool Stack::empty()
{
        return head ? false : true;
}

int Stack::peek()
{
        if (head) return head->data;
        throw "Nothing in stack.";
}

int Stack::pop()
{
        if (head) {
                int data = head->data;
                node* old_head = head;
                head = head->next;
                delete old_head;
                return data;
        }
        throw "Nothing in stack.";
}

std::string Stack::print()
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

int Stack::push(int data)
{
        node* cursor = new node;
        cursor->data = data;
        cursor->next = head;
        head = cursor;
        return head->data;
}
