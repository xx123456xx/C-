#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int my_strlen1(char* arr)//正常函数求字符长度
//{
//	int count=0;
//	while(*arr!='\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int my_strlen2(char* arr)//递归法求字符长度，没有创建临时变量
//{
//	if (*arr!='\0')
//		return 1+my_strlen2(arr+1);
//	else
//		return 0;
//}
//int main()//用函数字符串长度
//{
//	char arr[10]="xuxuxu";
//	//int len=strlen(arr);
//	//printf("%d\n",len);
//	/*int len=my_strlen1(arr);*/
//	int len=my_strlen2(arr);
//	printf("%d\n",len);
//	return 0;
//}
int Fac1(int n)//函数求n的阶乘
{
	int i=0;
	int ret=1;
	for(i=1;i<=n;i++)
	{
		ret=ret*i;
	}
	return ret;
}
int Fac2(int n)//递归算法求n的阶乘
{
	if (n<=1)
		return 1;
	else
		return n*Fac2(n-1);
}

int main()
{
	int n=0;
	scanf("%d",&n);
	int ret1=0;
	int ret2=0;
	ret1=Fac1(n);
	ret2=Fac2(n);
	printf("%d\n",ret1);
	printf("%d\n",ret2);
	return 0;
}