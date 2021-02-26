#define _CRT_SECURE_NO_WARNINGS
int is_prime(int n)
{
	int j=0;
	for(j=2;j<=n-2;j++)
	{
		if(n%j==0)
			return 0;
	}
	return 1;
}
#include<stdio.h>
//int main()//判断一个数是不是质数
//{
//	int a=0;
//	scanf("%d",&a);
//	 if(is_prime(a)==1)
//		 printf("是素数\n");
//	 else
//		  printf("不是素数\n");
//
//	return 0;
//}
int main()//输出1-100内的质数
{
	int i;
	for(i=1;i<100;i++)
	{
	 if(is_prime(i)==1)
		 printf("%d ",i);
	}
	return 0;
}