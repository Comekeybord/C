#define _CRT_SECURE_NO_DEPRECATE
#include"game.h"
void game()
{
	char board[ROW][COL] = { 0 };//创建棋盘
	InitBoard(board, ROW, COL);//初始化棋盘,加载棋盘
	//打印棋盘
	Display(board, ROW, COL);
	//开始下棋
	while (1)
	{
		//玩家下棋
		Playermove(board, ROW, COL);
		//判断输赢
		if (Iswin(board, ROW, COL)=='Q')
		{
			printf("平局!\n");
			break;
		}
		else if (Iswin(board, ROW, COL) == '*')
		{
			printf("恭喜你赢得了游戏!\n");
			break;
		}
		//电脑下棋
		Computermove(board, ROW, COL);
		//判断输赢
		if (Iswin(board, ROW, COL) == 'Q')
		{
			printf("平局!\n");
			break;
		}
		else if (Iswin(board, ROW, COL) == '#')
		{
			printf("恭喜你赢得了游戏!\n");
			break;
		}
	}
}
void Display(char board[ROW][COL], int row, int col)//打印棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)//把棋盘打印出来
	{
		for (j = 0; j < col; j++)
		{
			if (j<col - 1)
			{
				printf(" %c |", board[i][j]);
			}
			else if (j >= col - 1)
			{
				printf(" %c\n", board[i][j]);
			}
		}
		if (i<row - 1)
		{
			for (j = 0; j < col; j++)
			{
				if (j<col - 1)
				{
					printf("---|");
				}
				else if (j >= col - 1)
				{
					printf("---\n");
				}
			}
		}
	}
}//打印棋盘
void InitBoard(char board[ROW][COL],int row,int col)//棋盘初始化
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)//元素都赋值为字符空格
	{
		for ( j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}//
void Playermove(char board[ROW][COL],int row,int col)//玩家下棋
{
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("轮到玩家:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x-1][y-1]==' ')
			{
				board[x - 1][y - 1] = '*';
				break;         
			}
			else
			{
				printf("请不要在已经下了棋的地方下棋!\n");
			}
		}
		else
		{
			printf("坐标非法请重新输入!\n");
		}
	}
	Display(board,ROW,COL);
}
void Computermove(char board[ROW][COL], int row, int col)//电脑下棋
{
	int x = 0;
	int y = 0;
	printf("轮到电脑:\n");
	while (1)
	{
		x = rand() % ROW;
		y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
	Display(board, ROW, COL);
}
char Iswin(char board[ROW][COL], int row, int col)
{
	//玩家赢  *
	//电脑赢  #
	//平局    Q
	//继续    E
	//判断行
	int i = 0;
	for ( i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//判断列
	for (i = 0; i < COL; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//判断是否满棋盘
	int ret = Isfull(board, ROW, COL);
	if (ret==0)
	{
		return 'Q';
	}
	else
	{
		return 'E';
	}
}
int Isfull(char board[ROW][COL], int row, int col)//判断棋盘是否满棋
{
	int i = 0;
	int j = 0;
	int l = 0;
	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			if (board[i][j]!='0')
			{
				l++;
			}
		}
	}
	return l;
}
