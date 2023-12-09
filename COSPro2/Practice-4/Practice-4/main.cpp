#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len) {
	int count = 0;

	
	for (int i = 0; i < height_len; i++) {  // 각 행에 대해 반복한다

		for (int j = 0; j < 4; j++) {  // 현재 행의 각 열에 대해 반복한다

			if (height[i][j] < height[i + 1][j] && height[i][j] < height[i][j + 1]) {  // 현재 높이가 오른쪽과 아래의 높이보다 작은지 확인하는 것
				
				if (height[i][j] < height[i - 1][j] && height[i][j] < height[i][j - 1]) { // 현재 높이가 왼쪽과 위의 높이보다 작은지 확인하는 것
					count++; // 두 조건이 모두 참이면 골짜기이므로 count를 증가시킨다
				}
			}
		}
	}
	return count; // 골짜기의 총 개수를 반환
}

int main() {
	int height[4][4] = { {3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9} };
	int height_len = 4;
	int ret = solution(height, height_len = 4);// 주어진 배열과 길이로 solution 함수를 호출하는 것

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
