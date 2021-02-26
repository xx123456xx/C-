#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Add(int x,int y)
{
	return x+y;
}
int main()
{
int a=10;
int b=20;
int sum=Add(a,b);
printf("sum=%d\n",sum);
}	