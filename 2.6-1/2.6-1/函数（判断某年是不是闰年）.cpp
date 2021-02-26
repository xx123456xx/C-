#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int is__leap_year(int y)
{
	if((y%4==0&&y%100!=0)||(y%400==0))
		return 1;
	else
		return 0;
}
//int main()//判断某年是否为闰年
//{
//	int year;
//	scanf("%d",&year);
//	if  (1== is__leap_year(year))
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//	return 0;
//}
int main()//输出2000-2500中的闰年
{
	int i;
	for(i=2000;i<=2500;i++)
	{
		if(1== is__leap_year(i))
			printf("%d ",i);
	}
	return 0;
}