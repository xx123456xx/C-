#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()//����n�Ľ׳�
//{
//	int i=1;
//	int n=1;
//	int ret=1;
//	printf("����=");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//		ret=ret*i;
//	printf("%d�Ľ׳�=%d\n",n,ret);
//	return 0;
//}
//int main()//�㷨1������1��+2��������������+10�����÷��������˷�������ÿ�ν׳˶���������һ�飩
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
int main()//�㷨1������1��+2��������������+10�����÷��������˷�������ÿ�ν׳˶���������һ�飩
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