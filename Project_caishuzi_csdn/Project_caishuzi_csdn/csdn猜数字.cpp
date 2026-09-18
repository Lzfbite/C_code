#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_COUNT 5 //最多猜的次数
void game()//游戏函数
{
	int count = 0;
	int num = 0;
	int guess = 0;
	clock_t start_time = clock(); //记录游戏开始时间
	double elapsed = 0.0; //游戏用时（秒）
	num = rand() % 100 + 1; //生成1-100之间的随机数
	while(1)
	{
		if (count >= MAX_COUNT)
		{
			printf("你已经猜了%d次，游戏结束！\n", count);
			printf("正确答案是：%d\n", num);
			break;
		}
		printf("请输入你猜的数字(1-100)：");
		scanf("%d", &guess);
		if (guess < 1 || guess > 100)
		{
			printf("输入错误，请重新输入！\n");
			continue;
		}
		if (guess < num)
		{
			count++;
			printf("你已经猜了%d次\n", count);
			printf("猜小了，请再试一次！\n");
		}
		else if (guess > num)
		{
			count++;
			printf("你已经猜了%d次\n", count);
			printf("猜大了，请再试一次！\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			printf("正确答案是：%d\n", num);
			break;
		}
	}
	elapsed = (double)(clock() - start_time) / CLOCKS_PER_SEC; //计算本局用时
	printf("本局用时：%.1f 秒\n", elapsed);
}

int main()
{
	srand((unsigned int)time(NULL));
	int a = 0;
	do
	{
		printf("--------------\n");
		printf("----猜数字----\n");
		printf("----1.play----\n");
		printf("----0.exit----\n");
		printf("--------------\n");
		printf("请输入你的选择：");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			{
				int again = 0;
				do
				{
					game();//调用游戏函数
					printf("----1.再玩一局----\n");
					printf("----0.返回主菜单----\n");
					printf("请输入你的选择：");
					scanf("%d", &again);
				} while (again == 1);
			}
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (a);
	return 0;
}
