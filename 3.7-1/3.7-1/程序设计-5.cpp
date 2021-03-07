#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define M 4
#define N 5
int fun(int a[M][N])
{
	int sum=0;
	int i=0;
	int j=0;
	for(i=0;i<M;i++)
	{
		 for(j=0;j<N;j++)
	  {
		  if(i==0||i==M-1||j==0||j==N-1)
		{
			sum=sum+a[i][j];
		}
	  }
    }
	return sum;
}
int main()
{
  int aa[M][N]={{1,3,5,7,9},{2,9,9,9,4},{6,9,9,9,8},{1,3,5,7,0}};
  int i;
  int j;
  int y;
  printf("The original datais :\n");
  for (i=0;i<M;i++)
  {
	  for(j=0;j<N;j++)
	  {
		  printf("%6d",aa[i][j]);
	  }
	  printf("\n");
  }
  y=fun(aa);
  printf("\nThe sum:%d\n",y);
  printf("\n");
}