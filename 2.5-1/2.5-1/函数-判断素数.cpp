#define _CRT_SECURE_NO_WARNINGS
int is_prime(int n)
{
	int j=0;
	for(j=2;j<=n-2;j++)
	{
		if(n%j==0)
			return 0;
	}
	return 1;
}
#include<stdio.h>
//int main()//�ж�һ�����ǲ�������
//{
//	int a=0;
//	scanf("%d",&a);
//	 if(is_prime(a)==1)
//		 printf("������\n");
//	 else
//		  printf("��������\n");
//
//	return 0;
//}
int main()//���1-100�ڵ�����
{
	int i;
	for(i=1;i<100;i++)
	{
	 if(is_prime(i)==1)
		 printf("%d ",i);
	}
	return 0;
}