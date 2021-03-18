#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void fun(int w[10][10],int a[100],int* n,int x,int y)
{
	int i=0,j=0,k=0;;
	for(i=0;i<y;i++)
	{
		for(j=0;j<x;j++)
		{
			a[k]=w[j][i];
			k++;
		}
	}
	*n=k;
}
int main()
{
	int w[10][10]={{33,33,33,33},{44,44,44,44},{55,55,55,55}};
	int i=0,j=0;
	int a[100]={0},n=0;
	printf("The matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%3d",w[i][j]);
		}
		printf("\n");
	}
	fun(w,a,&n,3,4);
	printf("Thr A array :\n");
	for(i=0;i<n;i++)
		printf("%3d",a[i]);
}