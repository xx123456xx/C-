#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void fun(char s[],char t[])
{
	int i=0;
	int k=0;
	for(i=0;i<strlen(s);i++)
	{
		if(i%2==1||s[i]%2==0)
		{
			t[k]=s[i];
			k++;
		}
		else
			;
	}
	t[k]=0;//不用k+1了，上面的k++已经自己+了
//	
//	int i=0;//标准答案
//	int j=0;
//	for(i=0;i<strlen(s);i++)
//	{
//		if(!((i%2)==0&&(s[i]%2)))
//		{
//			t[j++]=s[i];
//		}
//		t[j]=0;
//	}
}
int main()
{
	char s[100];
	char t[100];
	printf("\nPlaease enter string s:");
	scanf("%s",s);
	fun(s,t);
	printf("\nThe result is:%s\n",t);

}