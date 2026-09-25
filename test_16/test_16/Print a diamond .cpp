#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
void startboard(char board[13][13])
{
	int c, r;
	for (c = 0;c < 13;c++)
	{
		for (r = 0;r < 13;r++)
		{
			board[c][r] = ' ';
		}
	}
}
void diamond(char board[13][13])
{
	int i, j;
	int count = 0;
	for (i = 1;i <= 13;i++)
	{
			if(i<=7)
			{
				count = (i * 2 - 1) / 2;
				board[i-1][6] = '*';
				while (count)
				{
					board[i-1][6 + count] = '*';
					board[i-1][6 - count] = '*';
					count--;
				}
			}
			else
			{
				j = 14 - i;
				count = (j * 2 - 1) / 2;
				board[i-1][6] = '*';
				while (count)
				{
					board[i-1][6 + count] = '*';
					board[i-1][6 - count] = '*';
					count--;
				}
			}
	}
}
//打印一个菱形图案
int main()
{
	char board[13][13] ;
	startboard(board);
	diamond(board);
	int i, j;
	for (i = 0;i < 13;i++)
	{
		for (j = 0;j < 13;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	return 0;
}