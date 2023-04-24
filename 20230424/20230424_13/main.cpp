#include <stdio.h>

void main()
{
	int sum = 0;
	int i = 0;

	while (1)
	{
		sum += i;
		if (sum > 10000)
			break;
		i++;
	}
	printf("1ºÎÅÍ %d±îÁöÀÇ ÇÕÀÌ %dÀÔ´Ï´Ù.\n", i - 1, sum - i);
}