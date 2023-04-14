#include <stdio.h>

void main()
{
	int i = 2000000000;
	int j = 3000000000;

	printf("i:%d\n", i);
	printf("j:%d\n\n", j);
	printf("j 값이 다르게 출력되는 이유는 int 변수는 표현 가능한 가능한 범위가 제한되어 있어서 오버플로우가 발생했기 때문이다\n\n");
}