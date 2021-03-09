#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int fun(int lim,int aa[MAX])//输出小于等于lim的所有素数
{
int i=0;
int j=0;
int k=0;
for(i=2;i<=lim;i++)//求出小于或者等于lim的全部素数
{
	for(j=2;j<i;j++)
	{
		if(i%j==0)
			break;
	}
		if(j==i)//将求出的素数放入带数组中
		aa[k++]=i;
}
return k;
}
int main()
{
	int limit=0;
	int i=0;
	int sum=0;
	int aa[MAX];
	system("CLS");
	printf("请输入一个整数：");
	scanf("%d",&limit);
	sum=fun(limit,aa);
	for(i=0;i<sum;i++)
	{
		if(i%10==0&&i!=0)
			//m每行输出10个数
			printf("\n");
		printf("%5d",aa[i]);
	}
}