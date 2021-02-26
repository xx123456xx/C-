#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Swap(int* pa,int *pb)
{
	int tmp=0;
	tmp=*pb;
	*pa=*pb;
	*pb=tmp;
}
//void swap(int x,int y)//传值调用：形参和实参分别占有不同内存块，对形参的修改不会影响。
//  {
//	  int tmp;
//	  tmp=x;
//	  x=y;
//	  y=tmp;
//  }
//int main()//非函数，交换两个变量
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

