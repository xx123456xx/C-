#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void bubble_sort(int arr[],int sz) 
{
	//ȷ��ð�����������
	int i=0;
	for(i=0;i<sz;i++)
	{
		int j=0;
		int flag=1;//������һ��Ҫ����������Ѿ�����
		//ÿһ��ð������
		for(j=0;j<sz-1-i;j++)
		{
			if (arr[j]>arr[j+1])
			{
				int tmp;
				tmp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=tmp;
				flag=0;//���������������ʵ����ȫ����
			}
		}
		 if (flag==1)
			 {
				 break;
		     }
	}
}
int main()
{
	int arr[]={9,10,7,8,6,5,4,3,2,1};
	int sz;
	int i=0;
	sz=sizeof(arr)/sizeof(arr[0]);
	//��arr���������ų�����
	bubble_sort(arr,sz);//ð��������
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}