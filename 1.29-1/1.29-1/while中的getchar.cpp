#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int ch;
	int ret;
	char password[20];
	printf("�������룺\n");
	scanf("%s",password);//�������룬�������password������
	//��������ʣһ����\n��
	//��ѭ����ȡ���������������ַ�
	while( (ch=getchar()) !='\n' )
	{  ;
	}
	printf("��ȷ�ϣ�Y/N��\n");
ret=getchar();
if(ret=='Y')
	printf("ȷ�ϳɹ�\n");
else
	printf("����ȷ��\n");
	return 0;
}