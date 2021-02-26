#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int num1=1;
//	int num2=2;
//	int a=num1&num2;//按位与，有一个0就是0;
//	int b=num1|num2;//按位或，有一个1就是1;
//	int c=num1^num2;//按位异或。相同为0；相异为1;
//	//00000000000000000000000000000001
//	//00000000000000000000000000000010
////a   00000000000000000000000000000000  0
////b   00000000000000000000000000000011  3
////c   00000000000000000000000000000011  3
//	printf("a=%d\n",a);
//	printf("a=%d\n",b);
//	printf("a=%d\n",c);
//	return 0;
//}
//变态面试题：不创建临时变量，实现两个数的交换
//void swap1(int* a,int* b)//创建临时变量tmp
//{
//	int tmp=0;
//	tmp=*a;
//	*a=*b;
//	*b=tmp;
//}
//void swap2(int* a,int* b)//加减法，容易溢出
//{
//	*a=*a+*b;
//	*b=*a-*b;
//	*a=*a-*b;
//}
//void swap3(int* a,int* b)//异或法
//{
//	*a=*a^*b;
//	*b=*a^*b;
//	*a=*a^*b;
//}
//int main()
//{
//
//	int a=10;
//	int b=20;
//	printf("a=%d b=%d\n",a,b);
//	swap1(&a,&b);
//	printf("a=%d b=%d\n",a,b);
//	swap2(&a,&b);
//	printf("a=%d b=%d\n",a,b);
//	swap3(&a,&b);
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}
//求一个整数中储存在内存中的二进制中有几个一
int search_1_1(int num)//不能算负数
{
	int count=0;
	while(num)
	{
		
		if(num%2==1)
			count++;
		num=num/2;
	}
		return count;
}
int search_2_1(int num)//都能算
{
	int count=0;
	int i=0;
	for(i=0;i<32;i++)
	{
		if(1==((num >> i)&1))
			count=count+1;
	}
	return count;
}
int main()
{
	int num=0;
	int a=0;
	int b=0;
	scanf("%d",&num);
	a=search_1_1(num);
//00000000000000000000000000000010  2
	printf("有%d个1\n",a);
	b=search_2_1(num);
	printf("有%d个1\n",b);
	return 0;
}