#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 15
int fun(int*a,int x)
{
	int i=0;
	for(i=0;i<N;i++)
	{
		if(a[i]==x)
			return i;
	}
	return -1;
}
int main()
{
	int a[N]={29,13,5,22,10,9,3,18,22,25,14,15,2,7,27};//有重复数
	int i=0;
	int x=0;
	int index=0;
	printf("a数组种的数据：\n");
	for(i=0;i<N;i++)
		printf("%4d",a[i]);
	printf("\n");
	printf("给x输入待查找的数 ：\n");
	scanf("%d",&x);
	index=fun(a,x);
	printf("index=%d\n",index);
	return 0;
}