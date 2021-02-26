#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()//将输入的三个数从大到小进行排序
//{
//	int a;
//	int b;
//	int c;
//scanf("%d%d%d",&a,&b,&c);
//if(a<b)
//{
//	int tmp=a;
//      a=b;
//      b=tmp;
//}
//if(a<c)
//{
//	int tmp=a;
//	a=c;
//	c=tmp;
//}
//if(b<c)
//{
//	int tmp=b;
//	b=c;
//	c=tmp;
//}
//printf("%d %d %d",a,b,c);
//	return 0;
//}
int main()//输出1-100内的3的倍数
{
	int i=0;
	for(i=1;i<100;i++)
	{
		if(i%3==0)
			printf("%d ",i);
	}
	return 0;
}