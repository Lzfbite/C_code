#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void startboard(char board[ROWS][COLS], int rows, int cols, char set)//初始化棋盘
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void printboard(char board[ROWS][COLS], int rows, int cols)
{
	int i, j, m;
	printf("-----扫雷游戏-----\n");
	for (m = 0; m <= cols; m++)
	{
		printf("%d ", m);
	}
	printf("\n");
	for (i = 1; i <= rows; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= cols; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void setmine(char board[ROWS][COLS], int rows, int cols)
{
	int count = COUNT;//布置雷的个数
	while (count)
	{
		int r = rand() % rows + 1;
		int c = rand() % cols + 1;
		if (board[r][c] == '0')
		{
			board[r][c] = '1';
			count--;
		}
	}
}

int getminecount(char board[ROWS][COLS], int rows, int cols)//统计周围雷的个数
{
	return (board[rows - 1][cols] + board[rows - 1][cols - 1] + board[rows - 1][cols + 1] +
		board[rows][cols - 1] + board[rows][cols + 1] +
		board[rows + 1][cols - 1] + board[rows + 1][cols] + board[rows + 1][cols + 1]) - 8 * '0';
}

void playmine(char mine[ROWS][COLS], char show[ROWS][COLS], int rows, int cols)
{
	int x, y;
	int win = 0;
	while (win < rows * cols - COUNT)//排查非雷的个数
	{
		scanf("%d %d", &x, &y);
		if (x < 1 || x > rows || y < 1 || y > cols)
		{
			printf("坐标非法，请重新输入\n");
			continue;
		}
		if (show[x][y] != '*')
		{
			printf("坐标重复输入\n");
			continue;
		}
		if (mine[x][y] == '1')
		{
			printf("你被炸了，游戏结束\n");
			break;
		}
		win++;
		show[x][y] = (char)(getminecount(mine, x, y) + '0');
		printboard(show, rows, cols);
	}
	if (win == rows * cols - COUNT)
	{
		printf("恭喜你，扫雷成功！\n");
	}
}
