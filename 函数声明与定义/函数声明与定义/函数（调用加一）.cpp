#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Add(int* p)
{
	(*p)++;//*p++;这是一个优先级的问题
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