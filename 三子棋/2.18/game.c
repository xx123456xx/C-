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
		//第一种
	    ////1.打印一行的数据
		////printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);//该处代码有一个很大的缺点,锁死了列数
		////2.打印分割行
		//	if (i<row-1)
		//printf("---|---|---\n");//最后的分割行不打印
		
		//	第二种
			int j=0;
		for(j=0;j<col;j++)
		{
			printf(" %c ",board[i][j]);
			if(j<col-1)
				printf("|");
		}
		printf("\n");
		//2.打印分割行
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
	printf("玩家走:>\n");
	while(1)
	{
		printf("请输入要下的目标:>");
		scanf("%d%d",&x,&y);
		//判断坐标的合法性
		if(x>=1 && x<=ROW && y>=1 && y<=COL)
		{
			if(board[x-1][y-1]==' ')
			{
				board[x-1][y-1]='*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}

}