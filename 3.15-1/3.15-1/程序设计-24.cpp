#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 80
void fun(char* a,int m)
{
	int i=0;
	int j=0;
	char t;
	for(i=0;i<m;i++)
	{
		t=a[0];
		for(j=1;a[j]!='\0';j++)
		{
			a[j-1]=a[j];
		}
		a[j-1]=t;
	}
}
int main()
{
	char a[N]="ABCDEFGHIJK";
	char b[N]="ABCDEFGHIJK";
	int m=0;
	printf("Thr original string:\n");
	puts(a);
	printf("\n\nEnter m:");
	scanf("%d",&m);
	fun(a,m);
	printf("\nThr string after moving:\n");
	puts(a);
	printf("\n\n");
	return 0;
}