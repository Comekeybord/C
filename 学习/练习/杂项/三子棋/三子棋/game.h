#define _CRT_SECURE_NO_DEPRECATE
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void game();
void InitBoard(char board[ROW][COL], int row, int col);
void Playermove(char board[ROW][COL], int row, int col);
void Display(char board, int row, int col);
void Computermove(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);
int Isfull(char board[ROW][COL], int row, int col);