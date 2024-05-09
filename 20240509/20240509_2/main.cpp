#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 20

void bubble_sort(int data[], int n);

void main()
{
	int i, n;
	int data[MAX];
	printf("데이터 수 : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("%i\ 번째 : ", i + 1);
		scanf("%d", &data[i]);
	}
	bubble_sort(data, n);
	printf("정렬된 데이터 : ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n");
}

void bubble_sort(int data[], int n)
{
	int i, j, temp;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 1; j < n - i; j++)
		{
			if (data[j - 1] > data[j])
			{
				temp = data[j - 1];
				data[j - 1] = data[j];
				data[j] = temp;
			}
		}
	}
}