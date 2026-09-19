#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int arr[10] = { 0 };
	int sum = 0;
	int i;

	printf("请输入10个整数：\n");
	for (i = 0; i < 10; i++)
	{
		if (scanf("%d", &arr[i]) != 1)
		{
			printf("输入错误！\n");
			return 1;
		}
		sum += arr[i];
	}

	printf("平均值为：%.2f\n", sum / 10.0);
	return 0;
}