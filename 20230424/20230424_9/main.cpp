#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
	int N, M;
	int min;
	int max;
	int i;
	int result; 
	int result2; 

	scanf("%d %d", &N, &M);

	if (N > M) {
		max = N;
		min = M;
	}
	else {
		max = M;
		min = N;
	}

	for (i = min; i >= 1; i--) {
		if (max % i == 0 && min % i == 0) {
			result = i;
			break;
		}
	}
	printf("%d\n", result);

	result2 = (max * min) / result; 

	for (i = 1; i <= N * M; i++) { 
		if (i % N == 0 && i % M == 0) {
			result2 = i;
			break;
		}
	}

	printf("%d\n", result2);


	return 0;
}