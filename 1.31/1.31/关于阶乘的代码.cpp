#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()//计算n的阶乘
//{
//	int i=1;
//	int n=1;
//	int ret=1;
//	printf("输入=");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//		ret=ret*i;
//	printf("%d的阶乘=%d\n",n,ret);
//	return 0;
//}
//int main()//算法1；计算1！+2！，，，，，，+10！（该方法过于浪费算力，每次阶乘都得重新算一遍）
//{
//	int i=1;
//	int n=3;
//	int ret=1;
//	int sum=0;
//	for(n=1;n<=10;n++)
//	{
//	ret=1;
//		for(i=1;i<=n;i++)
//		ret=ret*i;
//	sum=sum+ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}
int main()//算法1；计算1！+2！，，，，，，+10！（该方法过于浪费算力，每次阶乘都得重新算一遍）
{
	int i=1;
	int n=3;
	int ret=1;
	int sum=0;
	for(n=1;n<=4;n++)
	{
	ret=ret*n;
	sum=sum+ret;
	}
	printf("%d\n",sum);
	return 0;
}