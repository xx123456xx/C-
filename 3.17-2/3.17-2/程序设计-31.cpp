#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void fun(int* x,int n,int*max,int*in)
{
	int i=0;
	*max=x[0];
	for(i=0;i<=10;i++)
	{
		if(*max<x[i])
		{
			*max=x[i];
			*in=i;
		}
	}
}
int main()
{
   int i=0;
   int x[20];
   int max=0;
   int index=0;
   int n=10;
   srand((unsigned)time(NULL));
   for(i=0;i<=n;i++)
   {
	   x[i]=rand()%50;
	   printf("%4d",x[i]);//输出一个随机数组
   }
   printf("\n");
   fun(x,n,&max,&index);
   printf("Max=%5d,Index=%4d\n",max,index);
   return 0;
}