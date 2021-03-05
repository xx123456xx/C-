#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 3
void fun(int a[3][3],int m)
{
	int i=0;
	for (i=0;i<N;i++)
	{
		int j=0;
		for (i=0;j<=i;j++)
		{
			a[i][j]=a[i][j]*m;
		}
	}

}
int main()
{
	int a[N][N]={1,2,3,4,5,6,7,8,9};
	int m;
	int i;
	int j;
	printf("****The array****\n");
	/*for (i=0;i<N;i++)
	{
		for (j=0;j<N;j++)
		{
			a[i][j]=rand()%20;
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}*/
	m=2;
	printf("m=%d\n",m);
	fun(a,m);
	printf("The result\n");
for (i=0;i<N;i++)
	{
		for (j=0;j<N;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}