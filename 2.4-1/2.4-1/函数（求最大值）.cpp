#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 int Max(int x,int y)
{
	if(x>y)
		return x;
	 else if(x<y)
		return y;
}
int main()
{
	int a=2;
	int b=3;
	scanf("%d%d",&a,&b);
	if (a==b)//千万注意==与=的区别
	{
		printf("没有最大值\n");
	}
	else
	{
		int max=Max(a,b);
	printf("max=%d\n",max);
	}
	return 0;
}
