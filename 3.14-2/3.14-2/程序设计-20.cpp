#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float fun(int m,int n)
{
	int i=0;
	float ret=1;
	float rec=1;
	float rey=1;
    for(i=1;i<=m;i++)
	ret=ret*i;
    for(i=1;i<=n;i++)
	rec=rec*i;
	for(i=1;i<=(m-n);i++)
	rey=rey*i;
	return ret/rec/rey;
}
int main()
{
	int i=0;
	int m=0;
	int n=0;
	float s=0.0;
	printf("p=% f\n",fun(12,8));

	return 0;
}