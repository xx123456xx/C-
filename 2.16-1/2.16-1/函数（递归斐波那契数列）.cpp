#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int count=0;
int Fib1(int n)//�ݹ�����
{
	if(n==3)
	{
		count++;//���Ե������Ʋ��������еļ���������ɼ������ɵõ���ʮ�������ض�������ǧ��Σ�������˷�������
	}
	if(n<=2)
		return 1;
	
	else
		 return Fib1(n-1)+Fib1(n-2);
}
int Fib2(int n)//ѭ������������ؽ�ʡ������
{
	int a=1;
	int b=1;
	int c=1;
	int i=1;
	for(i=1;i<n-1;n--)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}
int main()//��Ʋ���������1,1,2,3,5,8,13
{
	int n=0;
	int ret1 =0;
	int ret2=0;
	scanf("%d",&n);
	ret1=Fib1(n);
	ret2=Fib2(n);
	printf("%d\n",ret1);
	printf("%d\n",ret2);
	printf("%d\n",count);
	return 0;
}