#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* fun(char(*a)[81],int num,char*max)
{
	int i=0;
	max=a[0];
	for(i=0;i<num;i++)
	{
		if(strlen(max)<strlen(a[i]))
			max=a[i];
	}
	return max;
}
	
int main()
{
	char ss[10][81];
	char*ps=NULL;
	char *p=NULL;
	int i=0;
	int n;
	system("CLS");
	printf("���������ɸ��ַ�\n");
	gets(ss[i]);//���������õ��ַ�������ss[i]�˴���ss[0]
	puts(ss[i]);
	while(!strcmp(ss[i],"****")==0)//���ĸ�*��Ϊ��������ı�־
	{
		i++;
		gets(ss[i]);
		puts(ss[i]);
	}
	n=i;
	ps=fun(ss,n,ps);
	printf("\nmax=%s\n",ps);
	return 0;
}
//int main()
//{
//   char str[20] = "\0";  //�ַ������ʼ��\0
//    printf("�������ַ�����");
//    gets(str);
//    puts(str);
//    return 0;
//}