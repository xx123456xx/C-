#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
long fun(char *p)
{
	long n=0;
	int flag=1;
	if(*p=='-')
	{
		p++;
		flag=-1;
	}
	else if(*p=='+')
	{
		p++;
	}
	while(*p!='\0')
	{
		n=n*10+*p-'0';
		p++;
	}
	return n*flag;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
}
int main()
{
	char s[6];
	long n;
	printf("Enter a string :\n");
	gets(s);
	n=fun(s);
	printf("%1d\n",n);
	return 0;
}
