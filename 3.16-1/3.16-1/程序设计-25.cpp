#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 50
#define M 11
void fun(int a[N],int d[M])
{
int count=0;
int i=0;
int j=0;
for(i=0;i<=9;i++)
 {
	 count=0;
     for(j=0;j<N;j++)
   {
	  if(a[j]>=(i*10)&&a[j]<=(i*10+9))
		count++;
   }
	 d[i]=count;
 }
	 count=0;
     for(j=0;j<N;j++)
   {
	  if(a[j]>=100)
		count++;
	    d[10]=count;
	}
}
double rnd()
{
	static int t=29,c=27,m=1024,r=0;
	r=(r*t+c)%m;
	return ((double)r/m);
}
int main()
{
	int age[N];
	int i=0;
	int d[M];
	int b[N]={32,45,15,12,86,49,97,3,44,52,17,95,63};
	int sum=0;
	for(i=0;i<N;i++)
	{
		age[i]=(int)(115*rnd());//产生一个随机的年龄数组
	}
	printf("The original data :\n");
	for(i=0;i<N;i++)
	{
		printf((i+1)%10==0?"%4d\n":"%4d",age[i]);//每行输出10个数
	}
	    printf("\n\n");
		fun(age,d);
		for(i=0;i<10;i++)
		{
			printf("%4d---%4d :%4d\n",i*10,i*10+9,d[i]);

		}
		printf("Over 100 :%4d\n",d[10]);
		for(i=0;i<=10;i++)
			sum=sum+d[i];
		printf("%d\n",sum);
	return 0;
}