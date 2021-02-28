#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<assert.h>
void my_strcpy1(char* des,char* str)//6分版本
{
	while(*str!='\0')
	{
		*des=*str;
		des++;
		str++;
	}
	* des=* str;
}
void my_strcpy2(char* des,char* str)//7分版本
{
	while(* des++=* str++)
	{
		;
	}
}
void my_strcpy3(char* des,char* str)//8分版本
{
	/*if(des!=NULL&&str!=NULL)
	{
		 while(* des++=* str++)
	  {
		 ;
	  }
	}*/
	assert(des!=NULL);//断言；为假的时候，报错并报出位置
	assert(str!=NULL);
	while(* des++=* str++)
	  {
		 ;
	}
}
//const  
//限定一个变量不允许被改变，产生静态作用。使用const在一定程度上可以提高程序的安全性和可靠性。
//此处的strcpy函数是将原字符串拷贝到目的字符串，所以我们希望原字符串不被改变
void my_strcpy4(char* des,const char* str)//9分版本
{
	assert(des!=NULL);
	assert(str!=NULL);
	while(* des++=* str++)
	  {
		 ;
	  }
}
char* my_strcpy5(char* des,const char* str)//10分版本
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
	//strcpy库函数
	//字符串拷贝函数-把arr2中的字符串拷贝到arr1中，包含其中的‘\0’
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