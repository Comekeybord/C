#pragma once
#define ROW 9
#define COL 9
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game();
void Getboard(char board[ROW][COL], int row, int col, char w);
void Pboard(char board[ROW][COL], int row, int col);
void Letboard(char board[ROW][COL], int row, int col);
void Playermove(char board[ROW][COL], char board1[ROW][COL], int row, int col);
char Ifwin(char board[ROW][COL], int row, int col);
int Get_num(char board1[ROW][COL],int x, int y);
