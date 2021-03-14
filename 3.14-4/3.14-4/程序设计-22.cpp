#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
double fun(int n)
{
	double i=0;
	double sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+1/i/(i+1);//必须得有浮点型的
	}
	return sum;
}
int main()
{
	system("CLS");
	printf("% f\n",fun(10));
	return 0;
}