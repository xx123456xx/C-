#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//void fun(int a[3][3])//自己的做法
//{
//	int i=0;
//	int j=0;
//	int tmp=a[0][0];
//		for(j=0;j<3;j++)
//		{
//		tmp=a[i][j];
//	    a[i][j]=a[j][i];
//		a[j][i]=tmp;
//		}
//	tmp=a[1][2];
//	a[1][2]=a[2][1];
//	a[2][1]=tmp;
//}
void fun(int a[3][3])//标准答案(将上三角和下三角进行调换)
{
	int i=0;
	int j=0;
	int tmp=a[0][0];
		for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
		tmp=a[i][j];
		a[i][j]=a[j][i];
		a[j][i]=tmp;
		}
	}	
}
int main()
{
	int i=0;
	int j=0;
	int array[3][3]={{100,200,300},{400,500,600},{700,800,900}};
	system("CLS");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%7d",array[i][j]);
		}
		printf("\n");
	}
	fun(array);
	printf("Coverted array:\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%7d",array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
