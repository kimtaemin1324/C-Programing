#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Ȧ�� ��° �ε����� ���ڸ� �����ϴ� �Լ�
char* func_a(char* bundle, int start, int n) {
    char* answer = (char*)malloc(sizeof(char) * n); // ����� ������ ���� �Ҵ� �迭 ����

    // Ȧ�� ��° �ε����� ���ڸ� �����Ͽ� ��� �迭�� ����
    for (int i = 0; i < n; i++)
        answer[i] = bundle[start + i * 2];

    return answer; // ����� ���� �迭 ��ȯ
}

// �� ���� ������ ���ϰ� ����� �迭�� ��ȯ�ϴ� �Լ�
int* func_b(int score1, int score2) {
    int* answer = (int*)malloc(sizeof(int) * 2); // ����� ������ ���� �Ҵ� �迭 ����

    // �� ������ ���Ͽ� ��� �迭�� ����
    if (score1 > score2) {
        answer[0] = 1;      // ù ��° �÷��̾� �¸� ǥ��
        answer[1] = score1; // �¸��� ���� ����
    }
    else if (score1 < score2) {
        answer[0] = 2;      // �� ��° �÷��̾� �¸� ǥ��
        answer[1] = score2; // �¸��� ���� ����
    }
    else {
        answer[0] = 0;      // ���º� ǥ��
        answer[1] = score1; // ���º��� ��� �� �÷��̾��� ���� ����
    }

    return answer; // ��� �迭 ��ȯ
}

// ���� �迭�� �� ���ڿ� ���� ���ڰ��� �ջ��ϴ� �Լ�
int func_c(char* card, int card_length) {
    int answer = 0;

    // ���� �迭�� �� ���ڿ� ���� ���ڰ��� �ջ�
    for (int i = 0; i < card_length; i++) {
        answer += card[i] - 'a' + 1; // 'a'�� 1�� �����Ͽ� �ջ�
    }

    return answer; // �ջ� ��� ��ȯ
}

// �־��� ���鿡�� ���� ���ǿ� ���� ��� ����ϴ� �Լ�
int* solution(int n, char* bundle) {
    // �� �÷��̾��� ī�� ���� ����
    char* a_cards = func_a(bundle, 0, n);
    char* b_cards = func_a(bundle, 0, n);

    // ī�忡 ���� ���ڰ� �ջ�
    int a_score = func_c(a_cards, n);
    int b_score = func_c(b_cards, n);

    // �� �÷��̾��� ���� �� �� ��� ��ȯ
    int* answer = func_b(a_score, b_score);

    return answer; // ��� �迭 ��ȯ
}

int main() {
    // ���� �Է�
    int n = 4;
    char* bundle = "cacdbdedccbb";

    // ��� ��� �� ���
    int* ret = solution(n, bundle);
    printf("solution �Լ��� ��ȯ ���� [%d, %d] �Դϴ�.\n", ret[0], ret[1]);

}