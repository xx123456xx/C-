#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
double fun(double b[10],int n)//�Լ��Ĵ�
{
	double min=b[0];
	double max=b[0];
	double sum=0;
	int i=0;
	for(i=0;i<n;i++)
	{
		if(min>b[i])
		{
			min=b[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(max<b[i])
		{
			max=b[i];
		}
	}
	for(i=0;i<n;i++)
	{
		sum=sum+b[i];
	}
	return (sum-min-max)/(n-2);
}
double fun(double b[10],int n)//�𰸵����
{
	double sum=0;
	double max=b[0];
	double min=b[0];
	int i=0;
	for(i=0;i<n;i++)
	{
		sum=sum+b[i];
		if(max<b[i])max=b[i];
		if(min>b[i])min=b[i];
	}
	return (sum-min-max)/(n-2);
}
int main()
{
	double b[10];
	double r=0;
	int i=0;
	printf("����10����������b�����У�");
	for (i=0;i<10;i++)
	{
		scanf("%lf",&b[i]);
	}
	printf("�����10�������ǣ�");
	for (i=0;i<10;i++)
	{
		printf("%4.1lf",b[i]);
	}
	printf("\n");
	r=fun(b,10);
	printf("ȥ����߷ֺ���ͷֺ��ƽ���֣�%f\n",r);
	return 0;
}