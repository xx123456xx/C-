#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void fun(int (*s)[10],int *b,int *n,int mm,int nn)//��M��N�еĶ�ά�����е����ݣ����е�˳��ŵ�һά������
{
	int i=0;
	int j=0;
	int k=0;
	for(i=0;i<mm;i++)
	{
		for(j=0;j<nn;j++)
		{
			b[k]=s[i][j];
			k++;
		}
	}
	*n=k;//ͨ��ָ�뷵��Ԫ�ظ���
}

int main()
{
	int w[10][10]={{33,33,33,33},{44,44,44,44},{55,55,55,55}};
	int i=0;
	int j=0;
	int a[100]={0};
	int n=0;
	printf("The matrix:\n");
	for (i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%3d",w[i][j]);
		}
		printf("\n");
	}
	fun(w,a,&n,3,4);//ע�⣺�˴���ϵ�����Ŀɵã��˴���n�����ֵĸ���
	printf("The A array:\n");
	for(i=0;i<n;i++)
	{
		printf("%3d",a[i]);
	}
	printf("\n\n");
	return 0;
}