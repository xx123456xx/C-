#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fun(char*a,char*h,char*p)
{
	int i=0;
	char*q=a;//���´�����һ���ַ�������
	while(q<h)//���ַ���ǰ���*���浽a��
	{
		a[i]=*q;
		q++;
		i++;
	}
	while(q<p)//�������*�򱣴浽a��
	{
		if(*q!='*')
		{
			a[i]=*q;
		    i++;
		}
		q++;
	}
	while(*q)//��ĩβ��*���浽a��
	{
		a[i]=*q;
		i++;
		q++;
	}
	a[i]='\0';
}
int main()
{
	char s[81],*t,*f;
	printf("Enter string :\n");
	gets(s);
	t=f=s;
	while(*t)
		t++;//һ���ж��ٸ��ַ�
	t--;
	while(*t=='*')//���һ��*
		t--;//�ַ������һ����ĸ
	while(*f=='*')
		f++;//�ַ���ǰ�����һ����ĸ
	fun(s,f,t);
	printf("The string after deletde :\n");
	puts(s);
	return 0;

}