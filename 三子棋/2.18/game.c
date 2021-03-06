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
void ComputerMove(char board[ROW][COL],int row,int col)
{
	int x=0;
    int y=0;
    printf("������:>\n");
	while(1)
	{
		x=rand() % row;
		y=rand() % col;
		if(board[x][y]==' ')
		{
			board[x][y]='#';
				break;
		}
	}
}
//����1��ʾ��������
//����0��ʾ����û��
int IsFull(char board[ROW][COL],int row,int col)
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if (board[i][j]==' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
char IsWin (char board[ROW][COL],int row,int col)
{
	int i=0;
    //������
	for(i=0;i<row;i++)
	{
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1]!=' ')//��������Ҳ����ڿո�
		{
			return board[i][1];
		}
	}
    //������
	for(i=0;i<col;i++)
	{
		if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[1][i]!=' ')//��������Ҳ����ڿո�
		{
			return board[1][i];
		}
	}
    //�����Խ���
	 if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')
		{
			return board[1][1];
		}
     if(board[0][2]==board[1][1]&&board[1][1]==board[2][2]&&board[2][0]!=' ')
		{
			return board[1][1];
		}
	//�ж��Ƿ�ƽ��
	 if(1==IsFull(board,ROW,COL))
	 {
		 return 'Q';
	 }
	 return 'C';
}