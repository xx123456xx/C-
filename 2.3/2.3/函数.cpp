#define use _CRT_SECURE_NO_WARNINGS.
#include<stdio.h>
int Add(int x,int y)
{int z;
z=x+y;
return z;
}
int main()
{
	int a;
int b;
int sum;
scanf("%d%d",&a,&b);
sum=Add(a,b);
printf("sum= %d \n",sum);
return 0;
}