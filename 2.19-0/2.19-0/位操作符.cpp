#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int num1=1;
//	int num2=2;
//	int a=num1&num2;//��λ�룬��һ��0����0;
//	int b=num1|num2;//��λ����һ��1����1;
//	int c=num1^num2;//��λ�����ͬΪ0������Ϊ1;
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
//��̬�����⣺��������ʱ������ʵ���������Ľ���
//void swap1(int* a,int* b)//������ʱ����tmp
//{
//	int tmp=0;
//	tmp=*a;
//	*a=*b;
//	*b=tmp;
//}
//void swap2(int* a,int* b)//�Ӽ������������
//{
//	*a=*a+*b;
//	*b=*a-*b;
//	*a=*a-*b;
//}
//void swap3(int* a,int* b)//���
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
//��һ�������д������ڴ��еĶ��������м���һ
int search_1_1(int num)//�����㸺��
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
int search_2_1(int num)//������
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
	printf("��%d��1\n",a);
	b=search_2_1(num);
	printf("��%d��1\n",b);
	return 0;
}