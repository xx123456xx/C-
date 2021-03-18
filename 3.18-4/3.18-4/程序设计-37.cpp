#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define LEN 20
void fun(char a[],char b[],int n)
{
	int i=0;
	int k=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(i==n)
			;
		else
		{
		   b[k++]=a[i];
		}
	}
	b[k]='\0';
}
int main()
{
	char str1[LEN],str2[LEN];
	int n=0;
	system("CLS");
	printf("Enter the string :\n");
	gets(str1);
	printf("Enter the position of the string deleted: ");
	scanf("%d",&n);
	fun(str1,str2,n);
	printf("The new string is:%s\n",str2);
	return 0;
}