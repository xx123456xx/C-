#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//int a=10;
//   int* p=&a;
//   printf("%d\n",p);
//      printf("%d\n",*p);
//	     printf("%d\n",a);
//   *p=20;
//     printf("%d\n",p);
//   printf("%d\n",*p);
//	     printf("%d\n",a);
//	return 0;
//}

	struct book  //����һ���ṹ������
	{
		char name   [20];//c���Գ������
		short price;//55
		int page;//10000
	};
	int main()
{	
	//struct book  = {"c���Գ������",55,1000};���˴���һ��������struct book��һ�����ͣ�����Ҫ����һ������
	struct book b1 = {"c���Գ������",55,1000};
	 struct book* pb=&b1;
	 strcpy( b1.name,"c++");
	 b1.price=100;
	/*printf("����:%s\n",(*pb).name);*/
	// printf("����:%s\n",pb->name);//->���
	printf("����:%s\n",b1.name);//ע��˴��õ�.��ָ���˽ṹ��ĳ�Ա
	printf("�۸�:%d\n",b1.price);
	//printf("ҳ��:%d\n",b1.page);
	//b1.price=30;
	//printf("�޸ĺ�ļ۸�:%d\n",b1.price);
	return 0;
}