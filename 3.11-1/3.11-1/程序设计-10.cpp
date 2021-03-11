#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void fun(char* str)//用来删除字符串中所有空格
{
  int i=0;
  char*p=str;//把str存起来
  while(*p)//C语言中没有直接删除字符的操作，一个个的挤
  {
	  if(*p!=' ')
	  {
		  str[i++]=*p;
	  }
	  p++;
  }
  str[i]='\0';
}
int main()
{
	char str[81];
	char Msg[]="Input a string:";
	int n=0;
	printf(Msg);
	gets(str);
	puts(str);
	fun(str);
	printf("*** str:%s\n",str);
	return 0;
}