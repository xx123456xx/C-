#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Add(int,int);
int main()
{
	int a=0;
	int b=0;
	scanf("%d%d",&a,&b);
	int sum;
	sum=Add(a,b);
	printf("sum=%d",sum);
	return 0;
}
int Add(int x,int y)
	{
		return x+y;
	}


