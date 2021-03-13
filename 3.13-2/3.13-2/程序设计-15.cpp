#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void fun(int a,int b,long*c)
{
	*c=(a%10)*1000+(b%10)*100+(a/10)*10+(b/10);//只能取两位正整数
}
int main()
{
	int a=0;
	int b=0;
	long c=0;
	printf("Input a,b:");
	scanf("%d%d",&a,&b);
	fun(a,b,&c);
	printf("The result is: %ld\n",c);
	return 0;
}