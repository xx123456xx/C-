#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
 void menu()
 {
	 printf("****************************\n");
	 printf("**** 1. play     0. exit****\n");
	 printf("****************************\n");
 }
 //��Ϸ�������㷨ʵ��
 void game()
 {
	 //���飬����߳���������Ϣ
	 char board[ROW][COL]={0};//ȫ��ո�
	 InitBoard(board,ROW,COL);//��ʼ������
	 DisplaBoard(board,ROW,COL);//��ӡ����
 }
void test()
{
	int input=0;
	do
	{
		menu();
		printf("��ѡ�񣺡�");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			printf("������Ϸing������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
		
	}
	while(input);
}
int main()
{
	test();
	return 0;
}