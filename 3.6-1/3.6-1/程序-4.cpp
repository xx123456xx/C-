#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define N 5
double fun(int w[N][N])
{
	int i=0;
	int j=0;
	double sum=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(i==0||i==N-1||j==0||j==N-1)
			{
				sum=sum+w[i][j];
			}
		}
	}
	return sum/(4*N-4);
}
int main()
{
	int a[N][N]={0,1,2,7,9,1,9,7,4,5,2,3,8,3,1,4,5,6,8,2,5,9,1,4,1};
	int i;
	int j;
	double s;
	system("CLS");
	printf(" *** The array ***\n");
	for (i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	s=fun(a);
	printf(" *** The result *** \n");
	printf("The sum is:%lf\n",s);
	return 0;
}