#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//void fun(int x,int pp[90],int*n)//�Լ�
//{
// int i=0;
// int j=0;
// for(i=1;i<=x;i++)
// {
//	 if(x%i==0&&i%2==1)//ɵ�ˣ���/��%Ū����
//	 {
//		 pp[j++]=i;
//	 }
// }
// *n=j;
//}
void fun(int x,int pp[90],int*n)//��
{
	int i=0;
	int j=0;
	for(i=1;i<=x;i=i+2)//��ʼֵ��1������Ϊ2��ȷ��iΪ����
	{
		if(x%i==0)
		{
			pp[j++]=i;
		}
	}
	*n=j;
}

int main()
{
	int x=0;
	int aa[1000];
	int n=0;
	int i=0;
	system("CLS");
	printf("\nPlease enter an integer number : \n");
	scanf("%d",&x);
	fun(x,aa,&n);
	for(i=0;i<n;i++)
	{
		printf("%d ",aa[i]);
		printf("\n");
	}
}