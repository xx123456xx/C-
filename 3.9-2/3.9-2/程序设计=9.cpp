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
	printf("请输入若干个字符\n");
	gets(ss[i]);//将键盘里敲得字符串给到ss[i]此处是ss[0]
	puts(ss[i]);
	while(!strcmp(ss[i],"****")==0)//用四个*作为结束输入的标志
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
//   char str[20] = "\0";  //字符数组初始化\0
//    printf("请输入字符串：");
//    gets(str);
//    puts(str);
//    return 0;
//}