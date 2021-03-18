#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#define M 3
#define N 20
void fun(char w[M][N],char a[100])
{
	int i=0;
	int j=0;
	int k=0;
	for(i=0;i<M;i++)
		for(j=0;w[i][j]!='\0';j++)
			a[k++]=w[i][j];
	a[k]='\0';
}
int main()
{
	char w[M][N]={"AAAA","BBBBBBB","CC"};
	char a[100]={"##############"};
	int i=0;
	printf("Thr string :\n");
	for(i=0;i<M;i++)
	{
		puts(w[i]);
	}
	printf("\n");
	fun(w,a);
	printf("The A string :\n");
	printf("%s",a);
	printf("\n\n");
	return 0;
}