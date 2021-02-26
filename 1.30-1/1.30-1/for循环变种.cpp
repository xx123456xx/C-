#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()//for循环变种1
//{
//	int arr[10]={0,1,2,3,4,5,6,7,8,9};
//	int i;
//	for(i=0;i<=9;i++)//for循环语句里面最好前闭后开
//		printf("%d",arr[i]);
//	return 0;
//}
//int main()//for循环变种2
//{
//	int i;
//	for(;;)//可以省略但是判断语句自动默认是真
//		printf("hehe\n");
//	return 0;
//}
//int main()//不能随便省略
//{
//		int i;
//		int j;
//		for(i=0;i<=9;i++)//此处的i=0和j=0不能省略
//		{
//			for(j=0;j<=9;j++)
//				printf("hehe\n");
//		}
//	return 0;
//}
//int main()//for循环可以出现两个变量
//{
//	int x,y;
//	for(x=0,y=0;x<2&&y<5;++x,y++)
//		printf("hehe\n");
//	return 0;
//}
int main()//一道笔试题，问该程序会循环多少次？答案是0次，因为此处的判断语句是赋值，k=0即为假，故直接跳出循环）
{
int i = 0;
int k = 0;
for(i =0,k=0; k=0; i++,k++)
k++;
return 0;
}
