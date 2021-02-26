#include<stdio.h>
int main()
{
	int input=0;
printf("请问\n");
printf("徐卓玉是大笨蛋吗？(1/0)>:");
scanf("%d",&input);
if(input==1)
printf("恭喜你猜对了\n");
else
	printf("徐卓玉就是大笨蛋\n");
return 0;
}