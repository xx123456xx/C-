#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()//��������������Ӵ�С��������
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
int main()//���1-100�ڵ�3�ı���
{
	int i=0;
	for(i=1;i<100;i++)
	{
		if(i%3==0)
			printf("%d ",i);
	}
	return 0;
}