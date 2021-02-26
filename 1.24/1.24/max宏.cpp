#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX(X,Y) (X>Y?X:Y)
int main()
{
int a=10;
int b=20;
scanf("%d%d",&a,&b);
int max=MAX(a,b);
printf("max=%d\n",max);
	return 0;
}
