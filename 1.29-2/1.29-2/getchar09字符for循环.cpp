#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()//输出0-9的字符
//{
//	int ch;
//	while((ch=getchar())!=EOF)//一定要用英文输入法！！！
//	/*{putchar(ch);}*/
//	{if(ch<'0'||ch>'9')
//	continue;
//	putchar(ch);
//	}
//	return 0;
//}
int main()//while循环输出1-10
{
	int i=1;
	while(i<=10)
		{
			printf("%d ",i);
			if (i==5)
			continue;
	i++;
	}
	return 0;
}
//int main()//for循环输出1-10
//{
//	int i;
//	for(i=1;i<=10;i++)
//		{if (i==5)
//			continue;
//	printf("%d ",i);}
//	return 0;
//}