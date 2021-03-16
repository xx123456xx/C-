#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 20
void fun(char* s1,char* s2)
{
	int i=0;
	while(s2[i]!='\0')
	{
		s1[i]=s2[i];
		i++;
	}
	s1[i]='\0';
}
int main()
{
	char s1[N];
	char *s2="abcdefghijk";
	fun(s1,s2);
	printf("% s\n",s1);
	printf("% s\n",s2);
	return 0;
}