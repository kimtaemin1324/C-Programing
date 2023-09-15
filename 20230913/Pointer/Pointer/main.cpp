#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h>

int ReturnPlusOne(int n)//1번 
{
	return n + 1;
}

int main()
{
	int number = 3;
	printf("%d\n", number);

	number = 5;
	printf("%d\n", number);

	number = ReturnPlusOne(number);
	printf("%d\n", number);
}
/*
void ChangePlusOne(int n)//2번
{
   n += 1;
}

int main()
{
   int number = 3;
   printf("%d\n", number);

   number = 5;
   printf("%d\n", number);

   ChangePlusOne(number);
   printf("%d\n", number);

}






void ChangePlusOne(int* n)//3번
{
   *n += 1;
}
int main()
{
   int number = 3;
   printf("%d\n", number);

   number = 5;
   printf("%d\n", number);

   ChangePlusOne(&number);
   printf("%d\n", number);
}




int main() //4번
{
   int num1 = 3;
   int num2 = 6;
   int* num1Pointer = &num1;
   int* num2Pointer = &num2;

   printf("%d, %d\n", num1, *num1Pointer);
   printf("%d, %d\n", num2, *num2Pointer);

}


void ChangeDouble(int* p)//5번
{
   *p = *p * 2;
}



int main()
{
   int num;

   printf("숫자 입력 : ");
   scanf("%d", &num);

   ChangeDouble(&num);

   printf("%d\n", num);


}*/
