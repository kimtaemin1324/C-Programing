#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �� �迭 ���� �ִ� ���̸� ����ϴ� �Լ�
int func_a(int scores1[], int scores2[], int scores_len) {
    int answer = 0;

    // �� �ε������� �� �迭�� ���̸� ����ϸ鼭 �ִ� ���̸� ������Ʈ
    for (int i = 0; i < scores_len; i++)
        if (answer < scores2[i] - scores1[i])
            answer = scores2[i] - scores1[i];

    return answer;
}

// �� �迭 ���� �ּ� ���̸� ����ϴ� �Լ�
int func_b(int scores1[], int scores2[], int scores_len) {
    int answer = 0;

    // �� �ε������� �� �迭�� ���̸� ����ϸ鼭 �ּ� ���̸� ������Ʈ
    for (int i = 0; i < scores_len; i++)
        if (answer > scores1[i] - scores2[i])
            answer = scores1[i] - scores2[i];

    return answer;
}

// �߰� ���� �迭�� �⸻ ���� �迭�� �޾� �ִ�, �ּ� ���̸� ����ϴ� �Լ�
int* solution(int mid_scores[], int mid_scores_len, int final_scores[], int final_scores_len) {
    int* answer = (int*)malloc(sizeof(int) * 2);

    // func_a: �߰� ���� �迭�� �⸻ ���� �迭 ���� �ִ� ���� ���
    answer[0] = func_a(mid_scores, final_scores, mid_scores_len);

    // func_b: �߰� ���� �迭�� �⸻ ���� �迭 ���� �ּ� ���� ���
    answer[1] = func_b(final_scores, mid_scores, mid_scores_len);

    return answer;
}

int main() {
    // ���� �Է�
    int mid_scores[] = { 20, 50, 40 };
    int final_scores[] = { 10, 50, 70 };

    // solution �Լ� ȣ�� �� ��� ���
    int* ret = solution(mid_scores, 3, final_scores, 3);
    printf("solution �Լ��� ��ȯ ���� [%d, %d] �Դϴ�.\n", ret[0], ret[1]);      
}