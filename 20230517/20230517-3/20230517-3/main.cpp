#include <stdio.h> 

int main(void) {

	int i, j, x;

	for (i = 2; i <= 100; i++) {

		x = 1;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				x = 0;
				break;
			}
		}
		if (x == 1) {
			printf("%d ", i);
		}
	}

	return 0;
}