#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int even_array[10];
    int odd_array[10];
    int even_count = 0;
    int odd_count = 0;

    
    srand(time(NULL));

    while (1) {
     
        int random_number = rand() % 100 + 1;

      
        if (random_number % 2 == 0) {
            even_array[even_count++] = random_number;
            printf("¦�� �迭: ");
            for (int i = 0; i < even_count; i++) {
                printf("%d ", even_array[i]);
            }
            printf("\n");
        }
        
        else {
            odd_array[odd_count++] = random_number;
            printf("Ȧ�� �迭: ");
            for (int i = 0; i < odd_count; i++) {
                printf("%d ", odd_array[i]);
            }
            printf("\n");
        }

        if (even_count == 10 || odd_count == 10) {
            break;
        }
    }

    printf("¦�� �迭�� ������ ����: %d\n", even_count);
    printf("Ȧ�� �迭�� ������ ����: %d\n", odd_count);

    return 0;
}
