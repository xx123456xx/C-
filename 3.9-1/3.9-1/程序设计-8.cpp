#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int fun(int lim,int aa[MAX])//���С�ڵ���lim����������
{
int i=0;
int j=0;
int k=0;
for(i=2;i<=lim;i++)//���С�ڻ��ߵ���lim��ȫ������
{
	for(j=2;j<i;j++)
	{
		if(i%j==0)
			break;
	}
		if(j==i)//����������������������
		aa[k++]=i;
}
return k;
}
int main()
{
	int limit=0;
	int i=0;
	int sum=0;
	int aa[MAX];
	system("CLS");
	printf("������һ��������");
	scanf("%d",&limit);
	sum=fun(limit,aa);
	for(i=0;i<sum;i++)
	{
		if(i%10==0&&i!=0)
			//mÿ�����10����
			printf("\n");
		printf("%5d",aa[i]);
	}
}