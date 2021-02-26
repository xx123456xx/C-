#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num=2;
	int count=0;
	int i=0;
	for(i=0;i<32;i++)
	{
		if(1==((num>>i)&1))
			count++;
	}
printf("%d\n",count);
	return 0;
}