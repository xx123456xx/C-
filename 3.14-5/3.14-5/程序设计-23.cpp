#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double fun(double x,int n)
{
	double i=0;
	double j=0;
	double ret=1;
	double sum=1;
	for(i=1;i<=n;i++)
	{
		double ret=1;
		for(j=1;j<=i;j++)
		{
			ret=ret*j;//此处是乘以j，不是i
		}
		sum=sum+pow(x,i)/ret;
	}
	return sum;
}
int main()
{
	system("CLS");
	printf("%f",fun(0.3,10));
	return 0;
}