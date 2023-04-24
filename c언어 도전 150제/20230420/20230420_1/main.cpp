#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int n, m, rand_num;

    printf("n과 m의 값을 입력하세요:");
    scanf("%d %d", &n, &m);

    srand(time(NULL));
    rand_num = rand() % (m - n + 1) + n;

    printf("n에서 m까지의 난수: %d\n", rand_num);


}