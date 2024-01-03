#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �־��� �ݾ����� ������� �󸶳� ���� ������ �� �ִ��� ����ϴ� �Լ�
int solution(int money, int price, int n) {
    int answer = 0;

    // �ʱ� �� ���� ������ ����Ͽ� answer�� ����
    int empty_bottle = answer = money / price;

    // �� ���� n�� �̻��� ��쿡 ����ؼ� ������� ���� �� �ֵ��� �ݺ�
    while (n <= empty_bottle) {
        empty_bottle = empty_bottle - n; // �� ������ n���� ����
        answer++; // ������ ����� ������ ������Ŵ
        empty_bottle++; // ���ο� �� ���� ����
    }

    return answer; // ���������� ������ ����� ������ ��ȯ
}

// ���� �Լ�
int main() {
    // ù ��° �׽�Ʈ ���̽�
    int money1 = 8;
    int price1 = 2;
    int n1 = 4;
    int ret1 = solution(money1, price1, n1);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

    // �� ��° �׽�Ʈ ���̽�
    int money2 = 6;
    int price2 = 2;
    int n2 = 2;
    int ret2 = solution(money2, price2, n2);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);

    return 0;
}
