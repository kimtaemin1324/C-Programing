#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	FILE* fp;
	fp = fopen("Sunday.txt", "w");
	fputs("hello world", fp);
	fclose(fp);
}