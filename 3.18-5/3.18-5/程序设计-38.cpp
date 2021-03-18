#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 80
void fun(int a[],int p,int n)
{
	int i,j=0;
	int tmp=0;
	for(i=0;i<=p;i++)
	{
		 tmp=a[0];
		for(j=0;j<=n-2;j++)
		{ 
			a[j]=a[j+1];
		}
		a[n-1]=tmp;
	}
}
int main()
{
int a[N]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int i,p,n=15;
printf("The original data :\n");
for(i=0;i<n;i++)
	printf("%3d",a[i]);
printf("\n\nEnter p:");
scanf("%d",&p);
fun(a,p,n);
printf("\nThe data after moving :\n");
for(i=0;i<n;i++)
	printf("%3d",a[i]);
printf("\n\n");
return 0;
}
