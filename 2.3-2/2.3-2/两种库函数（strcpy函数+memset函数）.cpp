#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
//int main()//strcpy函数
//{
//	char arr1[]="bit";
//	char arr2[]="###########";
//	printf("%s\n",arr2);
//	strcpy(arr2,arr1);//(目的地，源头)
//	//strcpy-string copy-字符串拷贝函数
//	//strlen-string length-字符串长度有关
//	printf("%s\n",arr2);
//	return 0;
//}
int main()//memset函数
{ 
	char arr[]="hello world";
	memset(arr,'*',5);//（要填充的地方，要设置的值，设置的字节数）
	//memory set-内存设置
	printf("%s\n",arr);
	return 0;
}