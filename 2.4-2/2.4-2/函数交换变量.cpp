#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Swap1(int a, int b)//��ֵ���ã��βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ�졣
{
	int tmp;
	tmp=b;
	b=a;
	a=tmp;
}
void Swap2(int* a, int* b)//��ַ���ã������ڲ�ֱ�Ӳ��������ⲿ�ı���
{
	int tmp;
	tmp=*b;
	*b=*a;
	*a=tmp;
}
int main()
{
	int a=1;
	int b=2;
	printf("a=%d b=%d\n",a,b);
	Swap1(a,b);
	printf("a=%d b=%d\n",a,b);
	Swap2(&a,&b);
	printf("a=%d b=%d\n",a,b);
	return 0;
}