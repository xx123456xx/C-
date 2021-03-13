#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int fun(int score[9],int m,int below[9])
//{
//	int i=0;
//	int sum=0;
//	int average=0;
//	int k=0;
//	for(i=0;i<m;i++)
//	{
//      sum=sum+score[i];
//	}
//	average=sum/m;
//	for(i=0;i<m;i++)
//	{
//		if(score[i]<average)
//		{
//			below[k]=score[i];
//			k++;
//		}
//	}
//	return k;
//}
int fun(int score[9],int m,int below[9])
{
	int i=0;
	int j=0;
	float av=0;
	for(i=0;i<m;i++)
		av=av+score[i]/m;
	for(i=0;i<m;i++)
		if(score[i]<av)
			below[j++]=score[i];
	return j;
}
int main()
{
	int i=0;
	int n=0;
	int below[9];
	int score[9]={10,20,30,40,50,60,70,80,90};
	system("CLS");
	n=fun(score,9,below);
	printf("\nBelow the average score are:");
	for(i=0;i<n;i++)
		printf("% d",below[i]);
	return 0;
}