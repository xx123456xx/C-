#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	//printf("%p\n",arr);//数组名就是数组中首元素的地址
//	//printf("%d\n",arr[0]);
//	//printf("%p\n",&arr[0]);
//	//printf("%p\n",&arr);//&arr是整个数组，但打印出来和首元素地址相同
//	//
//	//证明整个数组和数组首元素的区别
//	printf("%p\n",arr);
//	printf("%p\n",arr+1);
//
//    printf("%p\n",&arr[0]);
//    printf("%p\n",&arr[0]+1);
//
//    printf("%p\n",&arr);//两者差了4*10个
//    printf("%p\n",&arr+1);
//	
//	//printf("%p\n",arr);
//	//printf("%p\n",arr);
//	//printf("%p\n",arr);
//	return 0;
//}
 void menu()
 {
	 printf("****************************\n");
	 printf("**** 1. play     0. exit****\n");
	 printf("****************************\n");
 }
void test()
{
	int input=0;
	do
	{
		menu();
		printf("请选择：》");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			printf("进入游戏ing···\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误。请重新选择！\n");
			break;
		}
		
	}
	while(input);
}
int main()
{
	test();
	return 0;
}