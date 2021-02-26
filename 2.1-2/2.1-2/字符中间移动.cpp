#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
//int main()//指定大笨蛋的次数
//{
//	int i=1;
//	while(i<=10000)
//	{
//		if(i==5)
//		{
//			printf(" 是一个大笨蛋\n");
//			continue;
//		}
//		i++;
//	}
//	return 0;
//}
int main()
{
	char arr1[]="welcome to school!!!!!";
	char arr2[]="######################";
	int left=0;
	/*int right=strlen(arr1)-1;*/
	/*printf("%d",right);*/
	int right=sizeof(arr1)/sizeof(arr1[0])-2;//此处为什么-2，因为arr1中的字符最后还有一个\n
	while(left<=right)
	{
		printf("%s\n",arr2);
		Sleep(1000);//休息一秒
		system("cls");//执行系统命令的一个函数-清空屏幕
		arr2[left]=arr1[left];
		arr2[right]=arr1[right];
		left++;
		right--;
	}
	printf("%s\n",arr1);
	return 0;
}