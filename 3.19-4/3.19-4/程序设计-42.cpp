#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 80
int fun(int a[N],int n)
{
	int i=1;
	int k=1;
	for(i=1;i<n-1;i++)
	{
		if(a[k-1]!=a[i])
			a[k++]=a[i];
	}
	return k;
}
int main()
{
	int a[N]={2,2,2,3,4,4,5,6,6,6,6,7,7,8,9,9,10,10,10,10},i,n=20;
	printf("The original data:\n ");
	for(i=0;i<n;i++)
		printf("%3d",a[i]);
	n=fun(a,n);
	printf("\n\nThe data after deteled ;");
	for(i=0;i<n;i++)
		printf("%3d",a[i]);
	printf("\n\n");
	return 0;
}