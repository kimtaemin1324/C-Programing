#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Ư�� ������ �����ϴ��� Ȯ���ϴ� �Լ�
int func_a(int passed, int non_passed) {
    return (passed > 1 && non_passed == 0);
}

// �� ������ ������ �޾Ƽ� Ư�� ������ �����ϴ� ��츦 ����ϴ� �Լ�
int func_b(int scores[3]) {
    int answer = 0;
    if (scores[0] < 40) {
        answer++;
    }
    if (scores[1] < 44) {
        answer++;
    }
    if (scores[2] < 35) {
        answer++;
    }
    return answer;
}

// �� ������ ������ �޾Ƽ� Ư�� ������ �����ϴ� ��츦 ����ϴ� �Լ�
int func_c(int scores[3]) {
    int answer = 0;
    if (scores[0] >= 80) {
        answer++;
    }
    if (scores[1] >= 88) {
        answer++;
    }
    if (scores[2] >= 70) {
        answer++;
    }
    return answer;
}

// ���� ������ ������ �޾Ƽ� Ư�� ������ �����ϴ� ��츦 ����ϴ� �Լ�
int solution(int scores[][3], int scores_len) {
    int answer = 0;
    for (int i = 0; i < scores_len; i++) {
        // func_c: ���񺰷� 80 �̻��� ��츦 ī��Ʈ
        int passed = func_c(scores[i]);

        // func_b: ���񺰷� Ư�� ������ �����ϴ� ��츦 ī��Ʈ
        int non_passed = func_b(scores[i]);

        // func_a: Ư�� ������ �����ϴ� ��츦 ī��Ʈ�ϰ� ����� ����
        answer += func_a(passed, non_passed);
    }
    return answer;
}

int main() {
    // ���� 1
    int scores1[2][3] = {
        {30, 40, 100},
        {97, 88, 95}
    };
    int ret1 = solution(scores1, 2);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

    // ���� 2
    int scores2[6][3] = {
        {90, 88, 70},
        {85, 90, 90},
        {100, 100, 70},
        {30, 90, 80},
        {40, 10, 20},
        {83, 88, 80}
    };
    int ret2 = solution(scores2, 6);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);
}
