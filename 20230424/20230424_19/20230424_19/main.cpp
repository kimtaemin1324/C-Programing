#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <time.h>
#include <stdlib.h>
#include <math.h>
#define MAX_CAPACITY 500

void main()
{
    int i, n, count = 0;
    double x, y, pi; 
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;
        if (x * x + y * y <= 1) count++;
        printf("반복 횟수: %d\n", (double)count / i * 4, i + 1);
    }
    pi = (double)count / n * 4;
    printf("파이: \n", n, pi);
}