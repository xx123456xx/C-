#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()//求阶乘相加
//{
//	int n=0;
//	scanf("%d",&n);
//	int i=0;
//	int j=0;
//	int sum=0;
//	for(i=1;i<=n;i++)
//	{
//        int ret=1;
//		for(j=1;j<=i;j++)//F9创建断点，右键选择条件j==3，F5启动调试，直接跳到这里
//		{
//			ret=ret*j;
//		}
//    sum=sum+ret;
//	}
//	printf("n的阶乘: %d\n",sum);
//	return 0;
//}
int main()
{
	int i=0;
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	//for(i=0;i<=12;i++)
	//{
	//	printf("hehe\n");
	//	arr[i]=0;
	//}
	printf("%p\n",&i);
	printf("%p\n",&arr[12]);
	return 0;
}