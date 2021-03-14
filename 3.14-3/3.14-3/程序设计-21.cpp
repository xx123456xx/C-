#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
double fun(int n)
{
	int i=0;
	double sum=0;
	for(i=1;i<1000;i++)
	{
		if(i%3==0&&i%7==0)
		{
			sum=sum+i;
		}
	}
	return sqrt(sum);
}
int main()
{
	printf("s=% f\n",fun(1000));
}