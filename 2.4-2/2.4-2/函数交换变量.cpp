#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Swap1(int a, int b)//传值调用：形参和实参分别占有不同内存块，对形参的修改不会影响。
{
	int tmp;
	tmp=b;
	b=a;
	a=tmp;
}
void Swap2(int* a, int* b)//传址调用：函数内部直接操作函数外部的变量
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