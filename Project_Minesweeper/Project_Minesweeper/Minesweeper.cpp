#define _CRT_SECURE_NO_WARNINGS
#include "game.h"


void menu()//打印游戏菜单
{
	printf("******************************\n");
	printf("********** 1.play ************\n");
	printf("********** 0.exit ************\n");
	printf("******************************\n");
	printf("请选择：");
}

void game()//游戏函数
{
	char mine[ROWS][COLS];//存放布置好的雷
	char show[ROWS][COLS];//存放排查出的雷的信息
	//初始化棋盘
	//1. mine数组最开始全'0'
	//2. show数组最开始全'*'
	startboard(mine, ROWS, COLS, '0');
	startboard(show, ROWS, COLS, '*');
	//打印棋盘
	printboard(show, ROW, COL);
	//布置雷
	setmine(mine, ROW, COL);
	//排查雷
	playmine(mine, show, ROW, COL);
}

int main()
{
	int choice = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//游戏菜单打印
		scanf("%d", &choice);
		if (choice == 1)
		{
			game();//进行游戏
		}
		else if (choice != 0 && choice != 1)
		{
			printf("选择错误，请重新输入：");
		}
		else
		{
			printf("退出游戏!\n");
		}
	} while (choice != 0);
	return 0;
}
