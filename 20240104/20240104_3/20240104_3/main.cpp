#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    srand(time(NULL));

    int num[10];
    for (int i = 0; i < 10; ++i) {
        num[i] = rand() % 100 + 1; 
    }

    printf("발생한 난수: ");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", num[i]);
    }
    printf("\n");

    qsort(num, 10, sizeof(int), compare);

    printf("정렬된 배열: ");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}
