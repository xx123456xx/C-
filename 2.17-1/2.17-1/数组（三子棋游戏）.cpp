#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	//printf("%p\n",arr);//������������������Ԫ�صĵ�ַ
//	//printf("%d\n",arr[0]);
//	//printf("%p\n",&arr[0]);
//	//printf("%p\n",&arr);//&arr���������飬����ӡ��������Ԫ�ص�ַ��ͬ
//	//
//	//֤�����������������Ԫ�ص�����
//	printf("%p\n",arr);
//	printf("%p\n",arr+1);
//
//    printf("%p\n",&arr[0]);
//    printf("%p\n",&arr[0]+1);
//
//    printf("%p\n",&arr);//���߲���4*10��
//    printf("%p\n",&arr+1);
//	
//	//printf("%p\n",arr);
//	//printf("%p\n",arr);
//	//printf("%p\n",arr);
//	return 0;
//}
 void menu()
 {
	 printf("****************************\n");
	 printf("**** 1. play     0. exit****\n");
	 printf("****************************\n");
 }
void test()
{
	int input=0;
	do
	{
		menu();
		printf("��ѡ�񣺡�");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			printf("������Ϸing������\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
		
	}
	while(input);
}
int main()
{
	test();
	return 0;
}