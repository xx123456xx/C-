#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
float fun(float a)
{
	int tmp=0;
	tmp=(int)(a*1000+5)/10;//��������a����1000���ټ�5���൱�ڶ�a�еĵ���λС�������������룬����10���丳��һ��������ʱ���Ͱѵ���λС�������ȫ����ȡ
	return (float)tmp/100.0;//����100��������λС��
}
int main()
{
	float a;
	system("CLS");
	printf("Enter a: ");
	scanf("%f",&a);
	printf("The oringinal data is :");
	printf("%f\n\n",a);
	printf("The result :%f\n",fun(a));
}