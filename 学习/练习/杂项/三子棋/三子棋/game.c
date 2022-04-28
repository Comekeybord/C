#define _CRT_SECURE_NO_DEPRECATE
#include"game.h"
void game()
{
	char board[ROW][COL] = { 0 };//��������
	InitBoard(board, ROW, COL);//��ʼ������,��������
	//��ӡ����
	Display(board, ROW, COL);
	//��ʼ����
	while (1)
	{
		//�������
		Playermove(board, ROW, COL);
		//�ж���Ӯ
		if (Iswin(board, ROW, COL)=='Q')
		{
			printf("ƽ��!\n");
			break;
		}
		else if (Iswin(board, ROW, COL) == '*')
		{
			printf("��ϲ��Ӯ������Ϸ!\n");
			break;
		}
		//��������
		Computermove(board, ROW, COL);
		//�ж���Ӯ
		if (Iswin(board, ROW, COL) == 'Q')
		{
			printf("ƽ��!\n");
			break;
		}
		else if (Iswin(board, ROW, COL) == '#')
		{
			printf("��ϲ��Ӯ������Ϸ!\n");
			break;
		}
	}
}
void Display(char board[ROW][COL], int row, int col)//��ӡ����
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)//�����̴�ӡ����
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
}//��ӡ����
void InitBoard(char board[ROW][COL],int row,int col)//���̳�ʼ��
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)//Ԫ�ض���ֵΪ�ַ��ո�
	{
		for ( j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}//
void Playermove(char board[ROW][COL],int row,int col)//�������
{
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("�ֵ����:");
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
				printf("�벻Ҫ���Ѿ�������ĵط�����!\n");
			}
		}
		else
		{
			printf("����Ƿ�����������!\n");
		}
	}
	Display(board,ROW,COL);
}
void Computermove(char board[ROW][COL], int row, int col)//��������
{
	int x = 0;
	int y = 0;
	printf("�ֵ�����:\n");
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
	//���Ӯ  *
	//����Ӯ  #
	//ƽ��    Q
	//����    E
	//�ж���
	int i = 0;
	for ( i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//�ж���
	for (i = 0; i < COL; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�ж϶Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//�ж��Ƿ�������
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
int Isfull(char board[ROW][COL], int row, int col)//�ж������Ƿ�����
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
