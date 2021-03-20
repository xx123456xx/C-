#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
void fun(char *a,int n)
{
	char *b=a;
	char *c=a;
	int count=0;
	int i=0;
	while(*b=='*')
	{
		count++;
		b++;
    }
	if(count>n)
	{
		i=count-n;
		int j=0;
		while(*c)
		{
			a[j]=c[i];
			j++;
			c++;
		}
		a[j]='\0';
	}
	else
		a=b;

}
int main()
{
	char s[81];
	int n=0;
	printf("Enter a string  :\n");
	gets(s);
	printf("Enter n :\n ");
	scanf("%d",&n);
	fun(s,n);
	printf("The string after deleted :\n");
	puts(s);
	return 0;
}