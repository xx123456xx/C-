#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
float fun(int n)
{
	float a=0.0,b=0.0;
	int i=0;
	int j=0;
	for(i=1;i<=n;i++)
	{
		b=0.0;
		for(j=1;j<=i;j++)
		{
			b=b+j;
		}
		a=a+1/b;
	}
	return a;
}
int main()
{
	int n=0;
	float s;
	system("CLS");
	printf("\nPlease enter N:");
	scanf("%d",&n);
	s=fun(n);
	printf("The result is:%f\n",s);
	return 0;
}