#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 80
//int fun(char s[])//�Լ���
//{
//	int i=0;
//	int end=sizeof(s)/sizeof(s[1]);
//	if((end+1)/2==0)
//		return 0;
//	else
//	  {
//		  while(i!=end)
//		  {
//			  if(s[i]==s[end])
//			  {
//				  i++;
//				  end--;
//			  }
//			  else
//				  return 0;
//		  }
//		  return 1;
//	  }
//}
int fun(char* str)
{
	int i=0;
	int n=0;
	int fg=1;
	char*p=str;
	while(*p)//��ָ��pָ���ַ���ĩβ����ͳ���ַ���
	{
		n++;
		p++;
	}
	for(i=0;i<n/2;i++)
	{
		if(str[i]==str[n-1-i])//����ͬ����ʲô������
			;
		else//����ͬ����ֱ������ѭ��
	    {
          fg=0;
		  break;
		}
	}
	return fg;
}
int main()
{
	char s[N];
	int i=0;
	printf("Enter a string:");
	gets(s);
	printf("\n\n");
	puts(s);
	if(fun(s))
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}