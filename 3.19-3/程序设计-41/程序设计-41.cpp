#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<string.h>
void fun(char*s,char t[])
{
	int len=strlen(s);
	int i=0,j=0;
	for(i=0;i<len;i++)
	{
		if(s[i]%2==0)
		{
			t[j++]=s[i];
		}
	}
	t[j]='\0';

}
int main()
{
	char s[100],t[100],Msg[]="Please enter string s:";
	printf(Msg);
	scanf("%s",s);
	fun(s,t);
	printf("\nThe result is:%s\n",t);
	return 0;
}