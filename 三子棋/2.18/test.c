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
	 char ret;
	 //���飬����߳���������Ϣ
	 char board[ROW][COL]={0};//ȫ��ո�
	 InitBoard(board,ROW,COL);//��ʼ������
	 DisplaBoard(board,ROW,COL);//��ӡ����
	 //��ʼ����
	 while(1)
	 {
		 //�������
		 PlayerMove(board,ROW,COL);
		 DisplaBoard(board,ROW,COL);
		 //�ж������Ӯ
		 ret=IsWin(board,ROW,COL);
		 if(ret !='C')
		 {
			 break;
		 }
		 //��������
		 ComputerMove(board,ROW,COL);
		 DisplaBoard(board,ROW,COL);
		 //�ж���Ӯ
		 ret=IsWin(board,ROW,COL);
		 if(ret !='C')
		 {
			 break;
		 }
	 }
	 if(ret == '*')
	 {
		 printf("���Ӯ\n");
	 }
	 else if(ret == '#')
		 printf("����Ӯ\n");
	 else
	 {
		 printf("ƽ��\n");
	 }
 }
void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ�񣺡�");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
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