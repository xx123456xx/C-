#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()//史上最简答的递归应用
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
void print(int n)
{
	if(n>9)
	{
		print(n/10);
    }
	printf("%d ",n%10);
}
int main()
{
unsigned int num=0;
scanf("%d",&num);
print(num);
	return 0;
}