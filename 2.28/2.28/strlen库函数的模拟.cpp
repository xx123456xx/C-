#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<assert.h>

//int my_strlen1(const char* str)	//������ʱ����
//{	
//	assert(str!=NULL);
//	int count=0;
//	while(*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int my_strlen2(const char* str)	//�����ĵݹ�
//{
//	assert(str!=NULL);
//	if(*str!='\0')
//	    return 1+my_strlen2(str+1);
//	else
//		return 0;
//}
//
//int my_strlen3(char* str)//ָ������
//{
//	assert(str!=NULL);
//	char*start=str;
//	char*end=str;
//	while (*end!='\0')
//	{
//		end++;
//	}
//	return end-start;
//}
//
//int main()
//{
//	char arr[]="bit";
//	int len1;
//	len1=strlen(arr);
//	printf("%d\n",len1);
//
//	int len2;
//	len2=my_strlen1(arr);
//	printf("%d\n",len2);
//
//	int len3;
//	len3=my_strlen2(arr);
//	printf("%d\n",len3);
//
//	int len4;
//	len4=my_strlen3(arr);
//	printf("%d\n",len4);
//
//	return 0;
//}
int main()
{
	int b=20;
	int a=10;
	const int* pa=&a;///const����*���ʱ�����ε���*pa��Ҳ����˵����ͨ��p���ı�*p��ֵ
	/**pa=20;*///error
	pa=&b;
	
	//int*const pa=&a;//const����*�ұ�ʱ�����ε���paָ�룬pa���ܱ��ı䡣
	////pa=&b;error
	printf("%d\n",a);
	return 0;
}