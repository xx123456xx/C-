#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fun(char tt[81])
{
	int i=0;
	for(i=0;i<strlen(tt);i++)
	{
		if(i%2==1&&tt[i]>='a'&&tt[i]<='z')//下标为奇数，还必须得是小写字母（先大写字母，后小写字母，相同字母大小写相差32）
		{
			tt[i]=tt[i]-32;
		}
	}
}
int main()
{
	char tt[81];
	char s[81]="abc4efg";
	system("CLS");
	printf("\nPlease enter an string within 80 character:\n");
	gets(tt);
	printf("\n\nAfter changing,thr string\n %s",tt);
	fun(tt);
	printf("\nbecomes\n %s\n",tt);
	return 0;
}