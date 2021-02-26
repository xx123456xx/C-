#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//一维数组
//int main()
//{
//	int i=0;
//	//字符型数组
//	char arr1[]="abc";
//	char arr2[]={'a','b','c'};
//	char arr3[]={'a',98,'c'};
//	printf("%c\n",(arr1[1]));//b
//	printf("%c\n",arr2[1]);//b
//	printf("%c\n",arr3[1]);//b
//	printf("%d\n",sizeof(arr1));//4
//	printf("%d\n",sizeof(arr2));//3
//	printf("%d\n",strlen(arr1));//3
//	printf("%d\n",strlen(arr2));//随机
//	//打印数组里面所有的字符
//	int len=strlen(arr1);
//	for(i=0;i<len;i++)
//	printf("%c\n",(arr1[i]));
//	for(i=0;i<3;i++)
//	printf("%c\n",(arr1[i]));
//	int arr[]={1,2,3,4,5,6,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[1]);
//	//打印数组中所有字符的地址
//	for(i=0;i<sz;i++)
//	{
//		printf("%d\n",(arr[i]));
//	printf("&arr[%d]=%p\n",i,&arr[i]);
//	}	
//	return 0;
//}
////二维数组
int main()
{
	int arr[3][4]={1,2,3,4,5};
	//打印数组里面左右的数+所有地址
	int i=0;
	int j=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d &arr[%d][%d]=%p \n",arr[i][j],i,j,&arr[i][j]);
			/*printf("&arr[%d][%d]=%p \n",i,j,&arr[i][j]);*/
		}
		printf("\n");
	}
	return 0;
}