#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Printf1(char arr[3])//�β�������ʵ���������ͻ�һ��
{
	int i=0;
	for(i=0;i<3;i++)
	{
		printf("%c ",arr[i]);
	}
}
void Printf2(char* arr)//���β�����������Ϊһ��ָ�����
{
	int i=0;
	for(i=0;i<3;i++)
	{
		printf("%c ",*(arr));
		arr++;
	}
}

int main()
{
	char arr[3]={'a','b','c'};
	Printf1(arr);
	Printf2(arr);
	return 0;
}