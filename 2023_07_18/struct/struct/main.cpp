#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student
{
	char name[20];
	int age;
	double grade[3];
};

int main()
{
	struct student person;

	strcpy(person.name, "KIM Tae Min");
	person.age = 20;
	person.grade[0] = 90;
	person.grade[1] = 85;
	person.grade[2] = 77;

	printf("�л� �̸� : %s\n", person.name);
	printf("�л� ���� : %d\n", person.age);
	printf("�л� ���� : %lf\n", person.grade[0]);
	printf("�л� ���� : %lf\n", person.grade[1]);
	printf("�л� ���� : %lf\n", person.grade[2]);
}