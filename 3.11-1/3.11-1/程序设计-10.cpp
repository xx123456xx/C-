#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void fun(char* str)//����ɾ���ַ��������пո�
{
  int i=0;
  char*p=str;//��str������
  while(*p)//C������û��ֱ��ɾ���ַ��Ĳ�����һ�����ļ�
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