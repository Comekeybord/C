#define _CRT_SECURE_NO_DEPRECATE
#include"game.h"
void game()
{
	srand((unsigned int)time(NULL));
	char board[ROW][COL] = { 0 };
	char board1[ROW][COL] = { 0 };
	Getboard(board, ROW, COL,'#');//������#
	Getboard(board1, ROW, COL,'#');//�ȶ�������#
	Pboard(board, ROW, COL);//��ӡ����
	Letboard(board1, ROW, COL);//���̷���
	while (1)
	{
		Playermove(board, board1, ROW, COL);//���ɨ��
		Pboard(board, ROW, COL);
		if (Ifwin(board1,ROW,COL)=='V')
		{
			printf("��ϲ��ʤ����!!!\n");
			break;
		}
		else if (Ifwin(board1, ROW, COL) == 'D')
		{
			printf("�ٽ�����!!!\n");
			break;
		}
	}
}
void Getboard(char board[ROW][COL], int row,int col,char w)//�����ÿ�
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			board[i][j] = w;
		}
	}
}
void Pboard(char board[ROW][COL], int row, int col)//��ӡ����
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			if (j < col - 1)
				printf(" %c |", board[i][j]);
			else
			{
				printf(" %c\n", board[i][j]);
			}
		}
		if (i<row-1)
		{
			int t = 0;
			for (t = 0;t < col; t++)
			{
				if (t<col-1)
				{
					printf("---|");

				}
				else
				{
					printf("---");
				}
			}
			printf("\n");
		}
	}
}
void Letboard(char board[ROW][COL], int row, int col)//����
{
	int x = 0;
	int y = 0;
	int i = 0;
	for ( i = 0; i < 0.3*row*col; i++)
	{
		x = rand() % row;
		y = rand() % col;
		board[x][y] = '*';
	}
}
void Playermove(char board[ROW][COL], char board1[ROW][COL],int row, int col)//���ɨ��
{
	int x = 0;
	int y = 0;
	printf("��ѡ��:");
	scanf("%d%d", &x, &y);
	if (1<=x && x<=row && 1<=y && y<=col)
	{
		if (board1[x - 1][y - 1] == '*') 
		{
			Getboard(board1, ROW, COL, '*');
			Getboard(board, ROW, COL, '*');
		}
		else if (board1[x - 1][y - 1] == '#')
		{
			int num =Get_num(board1, x, y);
			board[x - 1][y - 1] = num + '0';
			board1[x - 1][y - 1] = num + '0';
		}
		else if (board1[x - 1][y - 1] != '*' && board1[x - 1][y - 1] != '#')
		{
			printf("�벻Ҫ���Ѿ��¹��ĵط���!\n");
		}
	}
	else
	{
		printf("�Ƿ�����!!\n");
	}
}
char Ifwin(char board[ROW][COL], int row, int col)//�ж���Ӯ
{
	int i = 0;
	int j = 0;
	int c = 0;//������#��
	int t = 0;//������*��
	int l = 0;//������ ��
	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j]=='#')
			{
				c++;
			}
			else if (board[i][j]=='*')
			{
				t++;
			}
			else if (board[i][j]==' ')
			{
				l++;
			}
		}
	}
	//'*'return D
	//
	if (t==row*col)
	{
		return 'D';
	}
	else if (t<row*col && c==0 && l!=0)
	{
		return 'V';
	}
}
int Get_num(char board1[ROW][COL], int x, int y)//����׵�����
{
	int num = 0;
	int t = x - 1;
	int d = y - 1;
	if (x>1 && y>1 && x<ROW && y<COL)
	{
		if (board1[t - 1][d] == '*')
		{
			num++;
		}
		else if (board1[t - 1][d-1] == '*')
		{
			num++;
		}
		else if (board1[t - 1][d + 1] == '*')
		{
			num++;
		}
		else if (board1[t][d - 1] == '*')
		{
			num++;
		}
		else if (board1[t ][d + 1] == '*')
		{
			num++;
		}
		else if (board1[t + 1][d - 1] == '*')
		{
			num++;
		}
		else if (board1[t + 1][d] == '*')
		{
			num++;
		}
		else if (board1[t + 1][d + 1] == '*')
		{
			num++;
		}
		return num;
	}
	else if (x==1 && y==1)
	{
		if (board1[t][d + 1]=='*')
		{
			num++;
		}
		else if(board1[t-1][d+1]=='*')
		{
			num++;
		}
		else if (board1[t - 1][d] == '*')
		{
			num++;
		}
		return num;
	}
	else if (x == 1 && y == COL)
	{
		if (board1[t][d -1] == '*')
		{
			num++;
		}
		else if (board1[t - 1][d - 1] == '*')
		{
			num++;
		}
		else if (board1[t - 1][d] == '*')
		{
			num++;
		}
		return num;
	}
	else if (x == ROW && y == COL)
	{
		if (board1[t][d - 1] == '*')
		{
			num++;
		}
		else if (board1[t + 1][d - 1] == '*')
		{
			num++;
		}
		else if (board1[t + 1][d] == '*')
		{
			num++;
		}
		return num;
	}
	else if (x == ROW && y == 1)
	{
		if (board1[t][d + 1] == '*')
		{
			num++;
		}
		else if (board1[t + 1][d + 1] == '*')
		{
			num++;
		}
		else if (board1[t + 1][d] == '*')
		{
			num++;
		}
		return num;
	}
	else if (x==1 && 1<y && y<COL)
	{
		if (board1[t - 1][d] == '*')
		{
			num++;
		}
		else if (board1[t - 1][d - 1] == '*')
		{
			num++;
		}
		else if (board1[t - 1][d + 1] == '*')
		{
			num++;
		}
		else if (board1[t][d - 1] == '*')
		{
			num++;
		}
		else if (board1[t][d + 1] == '*')
		{
			num++;
		}
		return num;
	}
	else if (x==ROW && y>1 && y<COL)
	{
		if (board1[t][d - 1] == '*')
		{
			num++;
		}
		else if (board1[t][d + 1] == '*')
		{
			num++;
		}
		else if (board1[t + 1][d - 1] == '*')
		{
			num++;
		}
		else if (board1[t + 1][d] == '*')
		{
			num++;
		}
		else if (board1[t + 1][d + 1] == '*')
		{
			num++;
		}
		return num;
	}
	else if (y == 1 && 1<x && x<ROW)
	{
		if (board1[t + 1][d] == '*')
		{
			num++;
		}
		else if (board1[t-1][d]=='*')
		{
			num++;
		}
		else if (board1[t - 1][d+1] == '*')
		{
			num++;
		}
		else if (board1[t][d+1] == '*')
		{
			num++;
		}
		else if (board1[t + 1][d+1] == '*')
		{
			num++;
		}
		return num;
	}
	else if (y == COL && 1 < x && x < ROW)
	{
		if (board1[t + 1][d] == '*')
		{
			num++;
		}
		else if (board1[t - 1][d] == '*')
		{
			num++;
		}
		else if (board1[t - 1][d - 1] == '*')
		{
			num++;
		}
		else if (board1[t][d - 1] == '*')
		{
			num++;
		}
		else if (board1[t + 1][d - 1] == '*')
		{
			num++;
		}
		return num;
	}
}