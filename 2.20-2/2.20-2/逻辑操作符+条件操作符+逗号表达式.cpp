#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()//逻辑操作符
//{
//	int i=0,a=0,b=2,c=3,d=4;
//	//i=a++&&++b&&d++;//逻辑与：全为真才为真。左边一但为假，后面直接不用算了。
//	//printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);//1  2  3  4
//	i=a++||++b||d++;//逻辑或：全为假才为假。左边一但为真，后面直接不用算了
//	return 0;
//}
//int main()//条件操作符
//{
//	int a=10;
//	int b=20;
//	int max=0;
//	if(a>b)
//		max=a;
//	else
//		max=b;
//	printf("max=%d\n",max);
//	max=(a<b?a:b);//条件操作符,表达式1为真，表达式2；为假，表达式3
//	printf("max=%d\n",max);
//	return 0;
//}
int main()//逗号表达式
{
	int a=1;
	int b=2;
	int c=(a>b,a=a+b,a,b=a+1);//从左向右依次执行，整个表达式的结果是最后一个表达式的结果
	printf("%d\n",c);
	return 0;
}