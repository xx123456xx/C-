#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void  InitBoard(char board[ROW][COL],int row,int col )
{
int i=0;
int j=0;
for(i=0;i<row;i++)
{
	for (j=0;j<col;j++)
	{
		board[i][j]=' ';
	}
}
}
void  DisplaBoard(char board[ROW][COL],int row,int col )
{
	int i=0;
	for (i=0;i<row;i++)
	{
		//��һ��
	    ////1.��ӡһ�е�����
		////printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);//�ô�������һ���ܴ��ȱ��,����������
		////2.��ӡ�ָ���
		//	if (i<row-1)
		//printf("---|---|---\n");//���ķָ��в���ӡ
		
		//	�ڶ���
			int j=0;
		for(j=0;j<col;j++)
		{
			printf(" %c ",board[i][j]);
			if(j<col-1)
				printf("|");
		}
		printf("\n");
		//2.��ӡ�ָ���
		if (i<row-1)
		{
		 int j=0;
		 for(j=0;j<row;j++)
			 {
				 printf("---");
			     if(j<col-1)
			     printf("|");
		     }
		printf("\n");
	    }
	}
}
void PlayerMove(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("�����:>\n");
	while(1)
	{
		printf("������Ҫ�µ�Ŀ��:>");
		scanf("%d%d",&x,&y);
		//�ж�����ĺϷ���
		if(x>=1 && x<=ROW && y>=1 && y<=COL)
		{
			if(board[x-1][y-1]==' ')
			{
				board[x-1][y-1]='*';
				break;
			}
			else
			{
				printf("�����걻ռ��\n");
			}
		}
		else
		{
			printf("����Ƿ������������룡\n");
		}
	}

}