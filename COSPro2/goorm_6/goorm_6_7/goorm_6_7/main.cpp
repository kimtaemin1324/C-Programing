#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 주어진 예산 내에서 가장 비싼 가구 조합을 찾아 반환하는 함수
int solution(int money, int chairs[], int chairs_len, int desks[], int desks_len) {
    int answer = 0;

    // 모든 의자와 책상의 조합을 확인하면서
    for (int i = 0; i < chairs_len; i++) {
        for (int j = 0; j < desks_len; j++) {
            int price = chairs[i] + desks[j];

            // 현재까지의 최고 가격보다 높으면서 예산 내에 있는 경우
            if (answer < price && price <= money)
                answer = price; // 최고 가격을 업데이트
        }
    }

    return answer; // 가장 비싼 가구 조합의 가격을 반환
}

int main() {
    // 첫 번째 테스트 케이스
    int money1 = 7;
    int chairs1[] = { 2, 5 };
    int chairs_len1 = 2;
    int desks1[] = { 4, 3, 5 };
    int desks_len1 = 3;
    int ret1 = solution(money1, chairs1, chairs_len1, desks1, desks_len1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    // 두 번째 테스트 케이스
    int money2 = 7;
    int chairs2[] = { 3 };
    int chairs_len2 = 1;
    int desks2[] = { 5 };
    int desks_len2 = 1;
    int ret2 = solution(money2, chairs2, chairs_len2, desks2, desks_len2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);

    return 0;
}
