#define _CRT_SECURE_NO_WARNINGS
#include<conio.h>
#include<stdio.h>
#include<string.h>
void fun(char s[100],char t[100])
{
	int i=0;
	int j=0;
	while(s[i]!='\0')
	{
		if(i%2!=0&&s[i]%2!=0)
		{
			t[j]=s[i];
			j++;
		}
		i++;
	}
	t[j]='\0';
}
int main()
{
	char s[100],t[100];
	printf("\nPlease enter string s:");
	scanf("%s",s);
	fun(s,t);
	printf("\nThe result is:%s\n",t);
	return 0;
}