#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()//�������룬�������������
{
	int i=1;
	char password[20]={0};
	for(i=0;i<3;i++)
    {
	printf("����������:");
	scanf("%s",password);
	if(strcmp(password,"123456")==0)
		{
			printf("��¼�ɹ�\n");
			break;
	    }
	else
	{
		printf("�������\n");
	}
	}
	if(i==3)
		printf("��������������˳�����\n");
	return 0;
}