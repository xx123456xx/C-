#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
//{     //�ж�һ�����Ƿ�Ϊ����
//	int a;
//scanf("%d",&a);
//int b= a%2;
//if (0==b)
//printf("ż��\n");
//else
//	printf("����\n");
//	return 0;
//}
//{
//	int i=1;//��while+if���ѭ�����1-100֮�������
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
//	int i=1;//��while���ѭ�����1-100֮�������
//	while(i<=100)
//	{
//		i+=2;//˫Ŀ������
//		printf(" %d", i);
//	}
//	
//	return 0;
//}
//{
//	int day;//switch���1
//	scanf("%d",& day);
//	switch(day)
//	{
//		case 1:
//			printf("����һ\n");
//			break;
//	    case 2:
//            printf("���ڶ�\n");
//			break;
//        case 3:
//            printf("������\n");
//			break;
//        case 4:
//            printf("������\n");
//			break;
//        case 5:
//            printf("������\n");
//			break;
//        case 6:
//            printf("������\n");
//			break;
//        case 7:
//            printf("������\n");
//			break;
//		default:
//			printf("�������");
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
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
			break;
	default:
printf("�������");
break;
	}
		return 0;
	}