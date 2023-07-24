#include <stdio.h>
#define SIZE 3

int main()
{
	int arr[SIZE][SIZE] =
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 }

	};
	int max = arr[0][0];
	int min = arr[0][0];
	for (int i = 0; i < SIZE; i++) 
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
			if (arr[i][j] < min) min = arr[i][j];
		}
	} 
	printf("max = %d\n", max); 
	printf("min = %d\n", min);
}

