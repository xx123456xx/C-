#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fun(char*a,char*h,char*p)
{
	int i=0;
	char*q=a;//重新创建了一个字符串数组
	while(q<h)//将字符串前面的*保存到a中
	{
		a[i]=*q;
		q++;
		i++;
	}
	while(q<p)//如果不是*则保存到a中
	{
		if(*q!='*')
		{
			a[i]=*q;
		    i++;
		}
		q++;
	}
	while(*q)//将末尾的*保存到a中
	{
		a[i]=*q;
		i++;
		q++;
	}
	a[i]='\0';
}
int main()
{
	char s[81],*t,*f;
	printf("Enter string :\n");
	gets(s);
	t=f=s;
	while(*t)
		t++;//一共有多少个字符
	t--;
	while(*t=='*')//最后一个*
		t--;//字符串后第一个字母
	while(*f=='*')
		f++;//字符串前面最后一个字母
	fun(s,f,t);
	printf("The string after deletde :\n");
	puts(s);
	return 0;

}