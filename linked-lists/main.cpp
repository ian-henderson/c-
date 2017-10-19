#include <iostream>
#include "queue.h"
#include "stack.h"

using namespace std;

/*
 * TODO: Write length and remove functions for stack lib
 */

int main(int argc, char *argv[])
{
        FILE *fp = fopen("data", "r");
        if (fp == NULL) {
                fprintf(stderr, "Could not open data file!\n");
                return 1;
        }
        int k;
        fscanf(fp, "%d", &k);
        if (k < 0) {
                fprintf(stderr, "k must be positive.\n");
                return 1;
        }
        Queue q;
        for (int i; fscanf(fp, "%d", &i) != EOF; q.enqueue(i));
        q.remove(q.length() - k);
        std::cout << q.print() << "." << std::endl;
        fclose(fp);

        return 0;
}
