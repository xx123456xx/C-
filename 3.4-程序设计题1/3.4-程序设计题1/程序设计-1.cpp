#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define N 80
int fun(char *s)
{
	int i=0;
	int j=0;
	while(*s!=' '&&*s!='\0')
	{
		j++;
		s++;
	}
	return j;
}
void main()
{
	char*S;
	char line[N];
	int num=0;
	printf("Enter a string :\n");
	gets(line);
	S=line;
	printf("%c\n",*(S+1));
	num=fun(line);
	printf("The num of words is:%d\n\n",num);
}