#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
//int main()//ָ���󱿵��Ĵ���
//{
//	int i=1;
//	while(i<=10000)
//	{
//		if(i==5)
//		{
//			printf(" ��һ���󱿵�\n");
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
	int right=sizeof(arr1)/sizeof(arr1[0])-2;//�˴�Ϊʲô-2����Ϊarr1�е��ַ������һ��\n
	while(left<=right)
	{
		printf("%s\n",arr2);
		Sleep(1000);//��Ϣһ��
		system("cls");//ִ��ϵͳ�����һ������-�����Ļ
		arr2[left]=arr1[left];
		arr2[right]=arr1[right];
		left++;
		right--;
	}
	printf("%s\n",arr1);
	return 0;
}