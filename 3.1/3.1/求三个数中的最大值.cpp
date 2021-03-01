#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int get_max(int a,int b,int c)
{
	int max;
	if(a>b)
		max=a;

}
int main()
{
	int a=10;
	int b=9;
	int c=11;
	int max=0;
	max=get_max(a,b,c);
	printf("%d\n",max);
	return 0;
}