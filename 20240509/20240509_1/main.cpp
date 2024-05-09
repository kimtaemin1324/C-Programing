#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 20

void select_sort(int data[], int n);

void main()
{
	int i, n;
	int data[MAX];
	printf("������ �� : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("%i\ ��° : ", i + 1);
		scanf("%d", &data[i]);
	}
	select_sort(data, n);
	printf("\n���ĵ� ������ : ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n");
}

void select_sort(int data[], int n)
{
	int i, j, k, temp;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (data[k] > data[j])
			{
				k = j;
			}
		}
		temp = data[i];
		data[i] = data[k];
		data[k] = temp;
	}
}