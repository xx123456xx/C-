#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int num1;
	int num2;
	scanf("%d%d",&num1,&num2);
	if (num1>num2)
	printf("max=%d\n",num1);
	else
		printf("max=%d\n",num2);

	return 0;
}
