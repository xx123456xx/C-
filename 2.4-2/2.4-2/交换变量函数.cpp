#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Swap(int* pa,int *pb)
{
	int tmp=0;
	tmp=*pb;
	*pa=*pb;
	*pb=tmp;
}
//void swap(int x,int y)//��ֵ���ã��βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ�졣
//  {
//	  int tmp;
//	  tmp=x;
//	  x=y;
//	  y=tmp;
//  }
//int main()//�Ǻ�����������������
//{
//	int a=1;
//	int b=2;
//	/*swap(a,b);*/
//	int tmp;
//	  tmp=b;
//	  b=a;
//	  a=tmp;
//	printf("a=%d\nb=%d\n",a,b);
//	return 0;
//}
int main()
{
	int a=1;
	int b=2;
	int* pa=&a;
	int* pb=&b;
	Swap(&a,&b);
	printf("a=%d\nb=%d\n",a,b);
}

