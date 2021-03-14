#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void fun(int* s,int t,int *k)
{
	int i=0;
	int max=s[0];
	for(i=0;i<t;i++)
	{
		if(max<s[i])
			{
				max=s[i];
		         *k=i;
		     }
		else
			;
	}
}
int main()
{
	int a[100]={876,675,896,101,301,401,980,431,451,777};
	int k=0;
	system("CLS");
	fun(a,10,&k);
	printf("% d,% d\n",k,a[k]);
	return 0;
}