#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �ð� ���̺�� ���ǽ� ���� ����Ͽ� ���� ���� �̿� �ð��� ���� ���ǽ��� �̿� �ð��� ��ȯ�ϴ� �Լ�
int solution(int time_table[], int time_table_len, int n) {
    int answer = 0;
    int* arr = (int*)malloc(sizeof(int) * n); // ���ǽǺ� �̿� �ð��� �����ϴ� �迭 ���� �Ҵ�

    // �ʱ�ȭ: ���ǽǺ� �̿� �ð��� 0���� ����
    for (int i = 0; i < n; i++) {
        arr[i] = 0;
    }

    // �ð� ���̺��� ��ȸ�ϸ鼭 ���ǽǺ� �̿� �ð��� ����ϰ� �ִ� �̿� �ð��� ������Ʈ
    for (int i = 0; i < time_table_len; i++) {
        arr[i % n] += time_table[i]; // �ð� ���̺��� �� ���Ҹ� ���ǽǿ� �Ҵ�
        if (arr[i % n] > answer) answer = arr[i % n]; // �ִ� �̿� �ð� ������Ʈ
    }

    // ���� �Ҵ�� �迭 �޸� ����
    free(arr);

    return answer;
}

int main() {
    // ù ��° �׽�Ʈ ���̽�
    int time_table1[] = { 1, 5, 1, 9 };
    int time_table_len1 = 4;
    int n1 = 3;
    int ret1 = solution(time_table1, time_table_len1, n1);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

    // �� ��° �׽�Ʈ ���̽�
    int time_table2[] = { 4, 8, 2, 5, 4, 6, 7 };
    int time_table_len2 = 7;
    int n2 = 4;
    int ret2 = solution(time_table2, time_table_len2, n2);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);

    
}
