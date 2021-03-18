#define _CRT_SECURE_NO_WARNINGS
#include<conio.h>
#include<stdio.h>
void fun(int a,int b,long* c)
{
	*c=(b%10)*10+(b/10)*1000+a/10+(a%10)*100;
}
int main()
{
	int a=0,b=0;
	long c=0;
	printf("Input a,b:");
	scanf("%d%d",&a,&b);
	printf("%2d%2d",a,b);
	fun(a,b,&c);
	printf("The result is:%ld\n",c);
	return 0;
}
