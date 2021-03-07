#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
float fun(float a)
{
	int tmp=0;
	tmp=(int)(a*1000+5)/10;//单精度数a乘以1000后再加5，相当于对a中的第三位小数进行四舍五入，除以10后将其赋给一个长整型时，就把第三位小数后的数全部截取
	return (float)tmp/100.0;//除以100，保留两位小数
}
int main()
{
	float a;
	system("CLS");
	printf("Enter a: ");
	scanf("%f",&a);
	printf("The oringinal data is :");
	printf("%f\n\n",a);
	printf("The result :%f\n",fun(a));
}