#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdio.h>
#include<string.h>
long fun(char * s)//Ҫ��һ�������ַ�ת��Ϊ��Ӧ�����֣�ֻҪ������ASCIIֵ��ȥ48���ߡ�0������
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
	printf("������һ�����Ȳ�����9���ַ��������ַ��� ��");
	gets(s);
	r=fun(s);
	printf("r=%1d\n",r);
	return 0;
}