#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer(void) {
    int n;
    do {
        printf("정수를 입력하세요: ");
        scanf("%d", &n);
    } while (n <= 0);
    return n;
}

int is_prime(int n)
{
    int i;
    if (n <= 1)
    {
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n;
    n = get_integer();

    printf("1부터 %d까지의 소수: ", n);
    for (int i = 2; i <= n; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}