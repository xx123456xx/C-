#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()//正常方法查找一个数组里面的数
//{
//	int arr[]={1,2.3,4,5,6,7,8,9,10};
//	int k=11;//寻找的那个数
//	int n;
//	int i=0;
//	n=sizeof(arr)/sizeof(arr[1]);
//	while(i<=n)
//	{
//		if(k==arr[i])
//			{printf("找到了，下标是%d\n",i);
//		break;
//		}
//		i++;
//		}
//	if(i==n+1)
//		printf("无法找到\n");
//	return 0;
//}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int k=100;
	int left=0;
	int right=sizeof(arr)/sizeof(arr[1])-1;
	while(left<=right)
	{
		int mid= (left+right)/2;
	    if (arr[mid]>k)
	    {
	       right=mid-1;
		}
		else if(arr[mid]<k)
		{
		    left=mid+1;
		}
		else
		{
		    printf("找到了,下标是：%d\n",mid);
		    break;
		}
	}
	if (left>right)
		printf("无法找到\n");
	return 0;
}