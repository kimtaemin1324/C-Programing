#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 7

int main() {
    srand(time(NULL));
    int arr[SIZE] = { rand() % 100 };
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("ÃÖ´ñ°ª = %d\n", max);
    printf("ÃÖ¼Ú°ª = %d\n", min);

    return 0;
}