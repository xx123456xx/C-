#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 10
typedef struct ss
{
	char num[10];
	int s;
}STU;
 void fun(STU a[],STU* s)
{
	int i=0;
	*s=a[0];//假设第一个元素最小
	for(i=0;i<N;i++)
	{
		if(s->s>a[i].s)
			*s=a[i];
	}
}
int main()
{
	STU a[N]={{"A01",81},{"A02",89},{"A03",66},{"A04",87},{"A05",77},{"A06",90},{"A07",79},{"A08",61},{"A09",80},{"A10",71}},m;
	int i;
	system("cls");//清屏
	printf("****The original data****\n ");
	for(i=0;i<10;i++)
	{
		printf("NO=%s Mark=%d\n",a[i].num,a[i].s);
	}
		fun(a,&m);
		printf("****The Result****\n");
		printf("The lowest:%s,%d\n",m.num,m.s);
	return 0;
}