#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Add(int* p)
{
	(*p)++;//*p++;����һ�����ȼ�������
}
int main()
{
	int num=0;
	Add(&num);
	printf("%d\n",num);
	Add(&num);
	printf("%d\n",num);
	Add(&num);
	printf("%d\n",num);
	Add(&num);
	printf("%d\n",num);
	return 0;
}