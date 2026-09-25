#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 整数幂函数，避免 pow() 的浮点精度误差
int ipow(int base, int exp)
{
	int result = 1;
	for (int i = 0; i < exp; i++)
	{
		result *= base;
	}
	return result;
}

// 判断输入的 0~100000 之间的数是否为水仙花数
// 水仙花数：一个 n 位数，其每个位上的数字的 n 次幂之和等于它本身
// 例如 153 = 1^3 + 5^3 + 3^3
int main()
{
	int num = 0;
	printf("请输入一个 0~100000 之间的整数: ");
	if (scanf("%d", &num) != 1)
	{
		printf("输入无效，请输入一个整数。\n");
		return 1;
	}
	if (num < 0 || num > 100000)
	{
		printf("输入超出范围（0~100000）。\n");
		return 1;
	}

	int n = 1;      // 位数
	int z = 10;
	while (num / z) // 判断是几位数
	{
		n++;
		z *= 10;
	}

	int sum = 0;
	int t = num;
	for (int i = 0; i < n; i++) // 逐位取数并累加 n 次幂
	{
		int digit = t % 10;
		sum += ipow(digit, n);
		t /= 10;
	}

	if (sum == num)
	{
		printf("%d 是水仙花数\n", num);
	}
	else
	{
		printf("%d 不是水仙花数\n", num);
	}
	return 0;
}
