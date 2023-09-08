#include <stdio.h>

int main()
{
	int num = 123;
	int* ptr = &num;
	printf("%d\n", *ptr);
}