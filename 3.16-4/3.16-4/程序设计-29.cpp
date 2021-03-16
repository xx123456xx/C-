#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdio.h>
#include<string.h>
long fun(char * s)//要把一个数字字符转化为相应的数字，只要将他的ASCII值减去48或者‘0’即可
{
	int i=0;
	int len=0;
	long sum=0;
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		sum=sum*10+*s-'0';
		s++;
	}
	return sum;
}
int main()
{
	char s[10];
	long r;
	printf("请输入一个长度不超过9个字符的数字字符串 ：");
	gets(s);
	r=fun(s);
	printf("r=%1d\n",r);
	return 0;
}