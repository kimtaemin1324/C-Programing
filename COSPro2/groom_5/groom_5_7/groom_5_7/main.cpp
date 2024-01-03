#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 물건의 크기 배열을 기반으로 크기가 3보다 큰 물건과 크기가 3 이하인 물건을 비교하여 큰 값을 반환하는 함수
int solution(int stuffs[], int stuffs_len) {
    int answer = 0;

    // 크기가 3보다 큰 물건의 합을 저장하는 변수
    int general_counter = 0;

    // 크기가 3 이하인 물건의 합을 저장하는 변수
    int small_counter = 0;

    // 배열을 순회하면서 크기가 3보다 큰 물건과 크기가 3 이하인 물건을 구분하여 합을 계산
    for (int i = 0; i < stuffs_len; i++) {
        if (stuffs[i] > 3)
            general_counter += stuffs[i];
        else
            small_counter += stuffs[i];
    }

    // 크기가 3보다 큰 물건과 크기가 3 이하인 물건 중 큰 값을 최종 결과로 설정
    if (small_counter > general_counter)
        answer = small_counter;
    else
        answer = general_counter;

    return answer;
}

int main() {
    // 물건의 크기 배열
    int stuffs[6] = { 5, 3, 4, 2, 3, 2 };
    int stuffs_len = 6;

    // solution 함수를 호출하고 반환값을 출력
    int ret = solution(stuffs, stuffs_len);
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);

    return 0;
}
