#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()//�߼�������
//{
//	int i=0,a=0,b=2,c=3,d=4;
//	//i=a++&&++b&&d++;//�߼��룺ȫΪ���Ϊ�档���һ��Ϊ�٣�����ֱ�Ӳ������ˡ�
//	//printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);//1  2  3  4
//	i=a++||++b||d++;//�߼���ȫΪ�ٲ�Ϊ�١����һ��Ϊ�棬����ֱ�Ӳ�������
//	return 0;
//}
//int main()//����������
//{
//	int a=10;
//	int b=20;
//	int max=0;
//	if(a>b)
//		max=a;
//	else
//		max=b;
//	printf("max=%d\n",max);
//	max=(a<b?a:b);//����������,���ʽ1Ϊ�棬���ʽ2��Ϊ�٣����ʽ3
//	printf("max=%d\n",max);
//	return 0;
//}
int main()//���ű��ʽ
{
	int a=1;
	int b=2;
	int c=(a>b,a=a+b,a,b=a+1);//������������ִ�У��������ʽ�Ľ�������һ�����ʽ�Ľ��
	printf("%d\n",c);
	return 0;
}