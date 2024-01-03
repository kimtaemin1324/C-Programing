#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �־��� �ӵ��� �ڵ������� �ӵ��� ���Ͽ� ������ ����ϴ� �Լ�
int solution(int speed, int cars[], int cars_len) {
    int answer = 0;

    // �� �ڵ����� ���� �־��� �ӵ� ������ ���� ������ �ο�
    for (int i = 0; i < cars_len; i++) {
        // �־��� �ӵ��� 11/10���� ũ�ų� ���� 12/10���� ���� ���
        if (cars[i] >= speed * 11 / 10 && cars[i] < speed * 12 / 10)
            answer += 3;
        // �־��� �ӵ��� 12/10���� ũ�ų� ���� 13/10���� ���� ���
        else if (cars[i] >= speed * 12 / 10 && cars[i] < speed * 13 / 10)
            answer += 5;
        // �־��� �ӵ��� 13/10���� ū ���
        else if (cars[i] >= speed * 13 / 10)
            answer += 7;
    }

    return answer;
}

int main() {
    int speed = 100;
    int cars[] = { 110, 98, 125, 148, 120, 112, 89 };
    int cars_len = 7;

    // solution �Լ��� ȣ���ϰ� ��ȯ���� ���
    int ret = solution(speed, cars, cars_len);
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);

    return 0;
}