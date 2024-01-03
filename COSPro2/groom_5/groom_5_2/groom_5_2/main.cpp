#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// ���� �ʰ� �����ϴ� ������ �ε����� ã�� �Լ�
int func_a(int time_table[], int time_table_len) {
    int answer = 0;
    for (int i = time_table_len - 1; i >= 0; i--) {
        if (time_table[i] == 1) {
            answer = i;
            break;
        }
    }
    return answer;
}

// �� ���� ���̿� ��� �ִ� ������ ������ ã�� �Լ�
int func_b(int time_table[], int class1, int class2) {
    int answer = 0;
    for (int i = class1; i < class2; i++)
        if (time_table[i] == 0)
            answer++;
    return answer;
}

// ���� ���� �����ϴ� ������ �ε����� ã�� �Լ�
int func_c(int time_table[], int time_table_len) {
    int answer = 0;
    for (int i = 0; i < time_table_len; i++) {
        if (time_table[i] == 1) {
            answer = i;
            break;
        }
    }
    return answer;
}

// �־��� �ð�ǥ���� ���ӵ� ���� �� ��� �ִ� ������ ���� ����ϴ� �Լ�
int solution(int time_table[], int time_table_len) {
    int answer = 0;

    // ���� ���� �����ϴ� ������ ���� �ʰ� �����ϴ� ������ �ε����� ã��
    int first_class = func_c(time_table, time_table_len);
    int last_class = func_a(time_table, time_table_len);

    // �� ���� ������ ��� �ִ� ������ ������ ���
    answer = func_b(time_table, first_class, last_class);

    return answer;
}

int main() {
    int time_table[] = { 1, 1, 0, 0, 1, 0, 1, 0, 0, 0 };
    int time_table_len = 10;

    // solution �Լ��� ȣ���ϰ� ��ȯ���� ���
    int ret = solution(time_table, time_table_len);
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);

    return 0;
}