#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a=0;
	int b=0;
	int c=0;
	scanf("%d%d",&a,&b);
	while(a%b !=0)
	{
	c=a%b;
	a=b;
	b=c;
	}
	printf("最大公约数：%d",b);
	return 0;
}