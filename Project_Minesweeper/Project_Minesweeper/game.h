#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define COUNT 10

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

//初始化棋盘
void startboard(char board[ROWS][COLS], int rows, int cols, char set);
//打印棋盘
void printboard(char board[ROWS][COLS], int rows, int cols);
//布置雷
void setmine(char board[ROWS][COLS], int rows, int cols);
//统计周围雷的个数
int getminecount(char board[ROWS][COLS], int rows, int cols);
//排查雷
void playmine(char mine[ROWS][COLS], char show[ROWS][COLS], int rows, int cols);
