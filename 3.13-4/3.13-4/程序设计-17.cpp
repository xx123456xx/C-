#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//void fun(int x,int pp[90],int*n)//自己
//{
// int i=0;
// int j=0;
// for(i=1;i<=x;i++)
// {
//	 if(x%i==0&&i%2==1)//傻了，把/和%弄混了
//	 {
//		 pp[j++]=i;
//	 }
// }
// *n=j;
//}
void fun(int x,int pp[90],int*n)//答案
{
	int i=0;
	int j=0;
	for(i=1;i<=x;i=i+2)//初始值是1，步长为2，确保i为奇数
	{
		if(x%i==0)
		{
			pp[j++]=i;
		}
	}
	*n=j;
}

int main()
{
	int x=0;
	int aa[1000];
	int n=0;
	int i=0;
	system("CLS");
	printf("\nPlease enter an integer number : \n");
	scanf("%d",&x);
	fun(x,aa,&n);
	for(i=0;i<n;i++)
	{
		printf("%d ",aa[i]);
		printf("\n");
	}
}