#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
//{     //判断一个数是否为奇数
//	int a;
//scanf("%d",&a);
//int b= a%2;
//if (0==b)
//printf("偶数\n");
//else
//	printf("奇数\n");
//	return 0;
//}
//{
//	int i=1;//用while+if语句循环输出1-100之间的奇数
//	while(i<=100)
//	{
//		if (i%2==1)
//		printf(" %d", i);
//		i++;
//	}
//
//	return 0;
//}
//{
//	int i=1;//用while语句循环输出1-100之间的奇数
//	while(i<=100)
//	{
//		i+=2;//双目操作符
//		printf(" %d", i);
//	}
//	
//	return 0;
//}
//{
//	int day;//switch语句1
//	scanf("%d",& day);
//	switch(day)
//	{
//		case 1:
//			printf("星期一\n");
//			break;
//	    case 2:
//            printf("星期二\n");
//			break;
//        case 3:
//            printf("星期三\n");
//			break;
//        case 4:
//            printf("星期四\n");
//			break;
//        case 5:
//            printf("星期五\n");
//			break;
//        case 6:
//            printf("星期六\n");
//			break;
//        case 7:
//            printf("星期天\n");
//			break;
//		default:
//			printf("输入错误");
//				break;
//	}	
//	return 0;
//}
	{
		int day;
scanf("%d",& day);
	switch(day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
			break;
	default:
printf("输入错误");
break;
	}
		return 0;
	}