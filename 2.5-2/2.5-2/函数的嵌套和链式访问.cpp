#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i=0;
//	for(i=0;i<3;i++)
//	{
//		new_line();
//	}
//}
//int main()//������Ƕ��
//{
//	three_line();
//	return 0;
//}
//int main()//��������ʽ����
//{
//	printf("%d",printf("%d",printf("%d",43)));//printf�����ķ���ֵ���ַ����ܸ���4321
//	return 0;
//}
int main()
{
	char arr[20]="hello";
	int ret=strlen(strcat(arr," bit"));//strcat�ַ����
	printf("%d\n",ret);
	printf("%s\n",arr);

	return 0;
}