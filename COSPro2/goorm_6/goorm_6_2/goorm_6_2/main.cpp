#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// papers 배열에서 연속된 조각들을 사용하여 K를 만들 때 필요한 최소한의 조각 개수를 반환하는 함수
int solution(int papers[], int papers_len, int K) {
    int length = papers_len;

    // papers 배열을 순회하면서 K를 만들 때까지 조각을 사용
    for (int i = 0; i < papers_len; i++) {
        K -= papers[i]; // 현재 조각을 사용하여 K를 감소
        if (K <= 0)
            return i; // K가 0 이하가 되면 현재까지 사용한 조각 개수를 반환
    }

    return length; // 모든 조각을 사용하여도 K를 만들지 못하면 배열의 길이를 반환
}

int main() {
    // 첫 번째 테스트 케이스
    int papers1[] = { 2, 4, 3, 2, 1 };
    int papers_len1 = 5;
    int K1 = 10;
    int ret1 = solution(papers1, papers_len1, K1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    // 두 번째 테스트 케이스
    int papers2[] = { 2, 4, 3, 2, 1 };
    int papers_len2 = 5;
    int K2 = 14;
    int ret2 = solution(papers2, papers_len2, K2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);

}
