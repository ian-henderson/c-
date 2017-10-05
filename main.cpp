#include <iostream>
#include "queue.h"

using namespace std;

int main(int argc, char *argv[])
{
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

    return 0;
}
