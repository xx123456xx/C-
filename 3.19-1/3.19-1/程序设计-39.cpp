#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define M 3
#define N 4
void fun(char w[M][N],char a[100])
{
	int i,j,k=0;
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			a[k++]=w[j][i];
		}
	}
	a[k]='\0';
}
int main()
{
	char a[100],w[M][N]={{'W','W','W','W'},{'S','S','S','S'},{'H','H','H','H'}};
	int i,j=0;
	printf("The matrix :\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
			printf("%3c",w[i][j]);
		printf("\n");
	}
	fun(w,a);
	printf("The A string :\n");
	puts(a);
	printf("\n\n");

	return 0;
}