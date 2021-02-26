#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int ch;
	int ret;
	char password[20];
	printf("请输密码：\n");
	scanf("%s",password);//输入密码，并存放在password数组中
	//缓冲区还剩一个‘\n’
	//死循环读取掉缓冲区的所有字符
	while( (ch=getchar()) !='\n' )
	{  ;
	}
	printf("请确认（Y/N）\n");
ret=getchar();
if(ret=='Y')
	printf("确认成功\n");
else
	printf("放弃确认\n");
	return 0;
}