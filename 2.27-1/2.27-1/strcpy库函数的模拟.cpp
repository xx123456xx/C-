#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<assert.h>
void my_strcpy1(char* des,char* str)//6�ְ汾
{
	while(*str!='\0')
	{
		*des=*str;
		des++;
		str++;
	}
	* des=* str;
}
void my_strcpy2(char* des,char* str)//7�ְ汾
{
	while(* des++=* str++)
	{
		;
	}
}
void my_strcpy3(char* des,char* str)//8�ְ汾
{
	/*if(des!=NULL&&str!=NULL)
	{
		 while(* des++=* str++)
	  {
		 ;
	  }
	}*/
	assert(des!=NULL);//���ԣ�Ϊ�ٵ�ʱ�򣬱�������λ��
	assert(str!=NULL);
	while(* des++=* str++)
	  {
		 ;
	}
}
//const  
//�޶�һ�������������ı䣬������̬���á�ʹ��const��һ���̶��Ͽ�����߳���İ�ȫ�ԺͿɿ��ԡ�
//�˴���strcpy�����ǽ�ԭ�ַ���������Ŀ���ַ�������������ϣ��ԭ�ַ��������ı�
void my_strcpy4(char* des,const char* str)//9�ְ汾
{
	assert(des!=NULL);
	assert(str!=NULL);
	while(* des++=* str++)
	  {
		 ;
	  }
}
char* my_strcpy5(char* des,const char* str)//10�ְ汾
{
	char* tmp;
	tmp=des;
	assert(des!=NULL);
	assert(str!=NULL);
	while(* des++=* str++)
	  {
		 ;
	  }
	return tmp;
}
int main()
{
	char arr1[]="********************";
	printf("%s\n",arr1);
	char arr2[]="bit";
	//strcpy�⺯��
	//�ַ�����������-��arr2�е��ַ���������arr1�У��������еġ�\0��
	strcpy(arr1,arr2);
	printf("%s\n",arr1);

	my_strcpy1(arr1,arr2);
	printf("%s\n",arr1);

	my_strcpy2(arr1,arr2);
	printf("%s\n",arr1);
	my_strcpy3(arr1,arr2);

	printf("%s\n",arr1);
	my_strcpy4(arr1,arr2);

	printf("%s\n",arr2);
	printf("%s\n",(my_strcpy5(arr1,arr2)));

	return 0;
}