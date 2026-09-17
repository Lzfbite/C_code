#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_CHANCE 5

void playRound()
{
	int count = 0;//实现计数功能
	int guess = 0;//猜数字
	int n = rand() % 100 + 1;//生成1~100的随机数
	printf("请输入你猜的数字：\n");
	printf("你一共有%d次机会\n", MAX_CHANCE);
	while (1)
	{
		if (count >= MAX_CHANCE)
		{
			printf("次数用完，游戏失败！正确答案是%d\n", n);
			break;
		}
		if (scanf("%d", &guess) != 1)
		{
			printf("输入无效，请输入一个整数！\n");
			while (getchar() != '\n');
			continue;
		}
		if (guess > n)
		{
			count++;
			printf("猜大了\n");
			printf("你现在已经使用了%d次机会\n", count);
		}
		else if (guess < n)
		{
			count++;
			printf("猜小了\n");
			printf("你现在已经使用了%d次机会\n", count);
		}
		else
		{
			printf("恭喜你猜对了！！！\n");
			break;
		}
		if (count < MAX_CHANCE)
			printf("请再次输入：");
	}
}

void game()
{
	int again = 0;
	do
	{
		playRound();
		printf("是否再来一局？(1.是 0.否，返回主菜单)：\n");
		if (scanf("%d", &again) != 1)
		{
			printf("输入无效，请输入一个整数！\n");
			while (getchar() != '\n');
			again = 0;
		}
	} while (again == 1);
}
int main()
{
	srand((unsigned int)time(NULL));//初始化随机数
	int a = 0;
	do
	{
		printf("----------------\n");
		printf("-----1.play-----\n");
		printf("-----0.exit-----\n");
		printf("----------------\n");
		printf("请选择：\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (a);
	return 0;
}