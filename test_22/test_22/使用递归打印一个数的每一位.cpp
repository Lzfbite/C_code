#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 递归函数：打印一个整数的每一位
void print(int n)//void 表示“不返回值”，但函数依然会“返回
{
	if (n < 10)                 // 递归终止条件：只剩一位
	{
		printf("%d ", n);
		return; // 不带值地返回控制权
	}

	print(n / 10);               // 调用自己
	printf("%d ", n % 10);      // 递归返回后，再打印最后一位
}
//1. 返回值：把计算结果交给调用者，比如 int 函数 return 5;
//2. 返回控制权：函数执行完，程序回到调用它的那一行继续执行
//void 只是没有第 1 种；第 2 种永远存在。否则一个函数调用完，程序就不知道该回哪去了。所谓“递归”，本质上就是函数调用自己，它关心的是控制流（调用 → 返回 → 继续），不关心有没有值。
int main()
{
	int n = 0;

	scanf("%d", &n);
	print(n);
	printf("\n");

	return 0;
}
