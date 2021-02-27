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

	assert(des!=NULL);
	assert(str!=NULL);
	while(* des++=* str++)
	  {
		 ;
	}
}
int main()
{
	char arr1[]="********************";
	printf("%s\n",arr1);
	char arr2[]="bit";
	strcpy(arr1,arr2);
	printf("%s\n",arr1);
	my_strcpy1(arr1,arr2);
	printf("%s\n",arr1);
	my_strcpy2(arr1,arr2);
	printf("%s\n",arr1);
	my_strcpy3(arr1,NULL);
	printf("%s\n",arr1);
	return 0;
}