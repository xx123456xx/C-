#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void fun(int a[][3],int t[3][3])
{
	int b[3][3];
	int i=0;
	int j=0;
	for(i=0;i<3;i++)
	{
		for(j=i;j<3;j++)
		{
			b[i][j]=a[j][i];
			b[j][i]=a[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			t[i][j]=a[i][j]+b[i][j];
	
		}
	}

}
void main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},t[3][3];
	int i=0,j=0;
	system("CLS");
	fun(a,t);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%7d",t[i][j]);
		}
		printf("\n");
	}

}
