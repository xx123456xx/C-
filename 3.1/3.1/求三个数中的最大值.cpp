#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int get_max(int a,int b,int c)
{
	int max;
	if(a>b)
		max=a;
<<<<<<< HEAD
	else
		max=b;
	if(a>c)
		max=a;
	else
		max=c;
	if(b>c)
		max=b;
	else
		max=c;
	return max;
=======

>>>>>>> 68617667d2a908f076f3474f9ec001ec47e65c03
}
int main()
{
	int a=10;
<<<<<<< HEAD
	int b=12;
=======
	int b=9;
>>>>>>> 68617667d2a908f076f3474f9ec001ec47e65c03
	int c=11;
	int max=0;
	max=get_max(a,b,c);
	printf("%d\n",max);
	return 0;
}