#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 'X'�� �ε����� ã�� �Լ�
int* solution(char* schedule[], int schedule_len) {
    // 'X'�� �߻� Ƚ���� ���� ����
    int x_count = 0;
    for (int i = 0; i < 10; i++)
        if (schedule[i][0] == 'X')
            x_count++;

    // 'X'�� �ε����� ������ �迭 ���� �Ҵ�
    int* answer = (int*)malloc(sizeof(int) * x_count);

    // 'X'�� �ε����� �迭�� ����
    for (int i = 0, j = 0; i < 10; i++) {
        if (schedule[i][0] == 'X') {
            answer[j++] = i + 1; // 'X'�� �ε��� (1���� ����)�� �迭�� ����
        }
    }
    return answer; // 'X'�� �ε����� ���� ���� �Ҵ� �迭 ��ȯ
}

int main() {
    // ���� ���� �迭
    char* schedule[] = { "O", "X", "X", "O", "O", "O", "X", "O", "X", "X" };

    // solution �Լ� ȣ��
    int* ret = solution(schedule, 10);

    // ��� ���
    printf("solution �Լ��� ��ȯ ���� ");
    for (int i = 0; i < 5; i++)
        printf("%d, ", ret[i]);
    printf("�Դϴ�.");
}