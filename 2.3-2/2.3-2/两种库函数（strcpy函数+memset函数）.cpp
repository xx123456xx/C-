#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
//int main()//strcpy����
//{
//	char arr1[]="bit";
//	char arr2[]="###########";
//	printf("%s\n",arr2);
//	strcpy(arr2,arr1);//(Ŀ�ĵأ�Դͷ)
//	//strcpy-string copy-�ַ�����������
//	//strlen-string length-�ַ��������й�
//	printf("%s\n",arr2);
//	return 0;
//}
int main()//memset����
{ 
	char arr[]="hello world";
	memset(arr,'*',5);//��Ҫ���ĵط���Ҫ���õ�ֵ�����õ��ֽ�����
	//memory set-�ڴ�����
	printf("%s\n",arr);
	return 0;
}