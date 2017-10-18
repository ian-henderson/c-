#include <iostream>
#include "queue.h"
#include "stack.h"

using namespace std;

int main(int argc, char *argv[])
{
        // Queue tests
        Queue q;
        for (int i = 1; i < argc; i++) {
                cout << "Queue: " << q.print() << endl;
                cout << "Enqueued " << q.enqueue(atoi(argv[i])) << endl;
                if (!q.is_empty()) cout << "Head: " << to_string(q.peek()) << endl;
                cout << "New Queue: " << q.print() << endl << endl;
        }
        for (int i = 1; i < argc; i++) {
                cout << "Queue: " << q.print() << endl;
                cout << "Dequeued " << q.dequeue() << endl;
                if (!q.is_empty()) cout << "Head: " << to_string(q.peek()) << endl;
                cout << "New Queue: " << q.print() << endl << endl;
        }

        // Stack tests
        Stack s;
        for (int i = 1; i < argc; i++) {
                cout << "Stack: " << s.print() << endl;
                cout << "Pushed " << s.push(atoi(argv[i])) << endl;
                if (!s.is_empty()) cout << "Head: " << to_string(s.peek()) << endl;
                cout << "New Stack: " << s.print() << endl << endl;
        }
        for (int i = 1; i < argc; i++) {
                cout << "Stack: " << s.print() << endl;
                cout << "Popped " << s.pop() << endl;
                if (!s.is_empty()) cout << "Head: " << to_string(s.peek()) << endl;
                cout << "New Stack: " << s.print() << endl << endl;
        }

        return 0;
}
