#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int binary_search(int arr[],int k,int sz)
{
	int mid=0;
	int left=0;
	int right=sz-1;
	while(left<=right)
	{
	mid=(left+right)/2;
		if(arr[mid]<k)
	{
		left=mid+1;
	}
	else if(arr[mid]>k)
	{
		right=mid-1;
	}
	else
	{
			return mid;
	}
	}
	//if(left>right)
		return -1;
	//return 0;
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int k=12;
	int sz=sizeof(arr)/sizeof(arr[1]);
	int ret=binary_search(arr,k,sz);
	if (ret==-1)
		{
			printf("�Ҳ���ָ��������\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���%d\n",ret);
	}
	return 0;
}