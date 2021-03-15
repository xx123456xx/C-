#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fun(char*s)
{
	int i=0;
	int count=0;
	while(s[i]!='\0')
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			count++;
		}
		i++;
	}
	return count;
}
int main()
{
	char *s="2def35adh253kjsdf7/kj8655x";
	printf("% s\n",s);
	printf("% d\n",fun(s));
	return 0;
}