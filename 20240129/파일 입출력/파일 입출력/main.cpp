#pragma warning(disable :4996)//  4996�̶�� ��� �����ϵ��� ����
#define MAX_LEN 100//�ִ� ���ڿ� ���̸� ��Ÿ����, 100���� ����
#include <stdio.h>

int main()
{   
    FILE* fs;// ���� ������ ���� ����
    fs = fopen("test.txt", "r");// "test.txt" ������ �б� ���� ����

    while (feof(fs) == 0)// ������ ���� ������ ������ �ݺ�
    {
        char str[MAX_LEN];// ���ڿ��� ������ �迭�� ����
        fgets(str, MAX_LEN, fs);// ���Ͽ��� �� ���� �о str�� �����Ѵ�
        printf("%s", str);// ���ڿ� ���
    }
}
