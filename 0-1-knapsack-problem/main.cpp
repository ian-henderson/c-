#define MAX(a,b) (((a)>(b))?(a):(b))
#include "stdio.h"

/*
 * 0/1 Knapsack Problem Implementation
 *
 * https://en.wikipedia.org/wiki/Knapsack_problem#0.2F1_knapsack_problem
 *
 * Expects a file called data to exist in the same directory as main.cpp. Each
 * line consists of two integers. The first line should contain the n and W
 * values. Each of the remaining n lines should consist of an item's value
 * and weight separated by a space.
 *
 * e.g.
 *
 * n W
 * value-1 weight-1
 * value-2 weight-2
 * ...
 * value-n weight-n
 */

int main(int argc, char* argv[])
{
        // Reads data into variables n, W, w[], and v[] from data.
        FILE* fp;
        fp = fopen("data", "r");
        int n, W;
        fscanf(fp, "%d %d", &n, &W);
        int w[n], v[n];
        for (int i = 0; fscanf(fp, "%d %d", &v[i], &w[i]) != EOF; i++);
        fclose(fp);

        int m[n][W];
        for (int j = 0; j < W; j++) m[0][j] = 0;

        for (int i = 1; i < n; i++) {
                for (int j = 0; j < W; j++) {
                        if (w[i] > j) {
                                m[i][j] = m[i-1][j];
                        } else {
                                m[i][j] = MAX(m[i-1][j], m[i-1][j-w[i]] + v[i]);
                        }
                }
        }

        printf("The max value your knapsack can carry is %d.\n", m[n-1][W-1]);

        return 0;
}
