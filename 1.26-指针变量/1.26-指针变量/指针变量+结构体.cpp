#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//int a=10;
//   int* p=&a;
//   printf("%d\n",p);
//      printf("%d\n",*p);
//	     printf("%d\n",a);
//   *p=20;
//     printf("%d\n",p);
//   printf("%d\n",*p);
//	     printf("%d\n",a);
//	return 0;
//}

	struct book  //创建一个结构体类型
	{
		char name   [20];//c语言程序设计
		short price;//55
		int page;//10000
	};
	int main()
{	
	//struct book  = {"c语言程序设计",55,1000};忘了创建一个变量，struct book是一个类型，我需要创建一个变量
	struct book b1 = {"c语言程序设计",55,1000};
	 struct book* pb=&b1;
	 strcpy( b1.name,"c++");
	 b1.price=100;
	/*printf("书名:%s\n",(*pb).name);*/
	// printf("书名:%s\n",pb->name);//->简洁
	printf("书名:%s\n",b1.name);//注意此处用的.它指出了结构体的成员
	printf("价格:%d\n",b1.price);
	//printf("页数:%d\n",b1.page);
	//b1.price=30;
	//printf("修改后的价格:%d\n",b1.price);
	return 0;
}