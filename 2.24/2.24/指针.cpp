#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����Ұָ��
//int main()
//{
//	int arr[10]={0,2,2,3,4,5,6,7,8,8,};
//	int i=0;
//	int* pa=arr;
//	printf("%d\n",*(pa+1));
//	for(i=0;i<12;i++)
//	{
//		printf("%d\n",(*(pa+i)));//�˴�������Ұָ�룬ָ��Խ�����
//	}
//	return 0;
//}
//�ġ�ָ������
//1.ָ��+-����
//int main()
//{
//	int arr[10]={0,1,2,3,45,65,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int i=0;
//	int *p=arr;//arr���������һ��Ԫ�صĵ�ַ
//	//for(i=0;i<10;i++)
//	//{
//	//	printf("%d ",*p);
//	//	p=p+1;
//	//}
//	for(i=0;i<4;i++)
//	{
//		printf("%d ",*p);
//		p+=2;//p=p+2;
//	}
//	return 0;
//}
//2.ָ��-ָ��
//int main()
//{
//	int arr[10]={0,1,2,3,45,65,7,8,9,10};
//	printf("%d\n",&arr[9]-&arr[0]);//ָ��-ָ��Ľ����ָ��֮��Ԫ�صĸ���
//	return 0;
//}
//int my_strlen(char* arr)//strlen��ģ������
//{
//	char* start=arr;
//	char* end=arr;
//	while(*end!='\0')
//	{
//		end++;
//	}
//	return end-start;
//}
//int main()//strlen��ģ������
//{
//	char arr[]="bit";
//	int len=my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}

//3.ָ��Ĺ�ϵ����
//int main()
//{
//	int arr[10]={0,1,2,3,45,65,7,8,9,10};
//	int* vp=arr;
//	int i=0;
//	for(vp=&arr[10];vp>&arr[0];)//��׼�涨������ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ�
//		                       //���ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽϡ�             
//	{
//	vp=(vp-1);
//		*vp=0;
//		/**--vp=0;*/
//	}
//	for(vp==&arr[9];vp>=&arr[0];vp--)
//	{
//		*--vp=0;
//	}
//
//	int *p=arr;
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",*p);
//		p=p+1;
//	}
//	return 0;
//}
//�塢ָ�������
//int main()
//{
//	int arr[10]={0};
//	int *p=arr;
//	int i=0;
//	for(i=0;i<10;i++)
//	{
//		printf("%p  ========  %p\n",p+i,&arr[i]);
//	}
//	return 0;
//}
//��������ָ��
//int main()
//{
//	int a=10;
//	int* pa=&a;
//	int* *ppa=&pa;//ppa���Ƕ���ָ��
//	**ppa=20;
//	printf("%d\n",**ppa);
//	printf("%d\n",a);
//	return 0;
//}
//�ߡ�ָ������
int main()
{
	int a=20;
	int b=30;
	int c=40;
	int * pa=&a;
	int * pb=&b;
	int * pc=&c;
	int * arr[3]={pa,pb,pc};
	int i=0;
	for(i=0;i<3;i++)
		printf("%d\n",*(arr[i]));
	return 0;
}
