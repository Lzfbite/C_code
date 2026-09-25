#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。
int main()
{
	int money = 0;
	scanf("%d", &money);
	int total_bottles = money;//初始喝的汽水数量
	int empty_bottles = money;//初始空瓶数量
	while (empty_bottles >= 2)
	{
		empty_bottles /= 2;
		total_bottles += empty_bottles;
	}
	printf("%d\n", total_bottles);
	return 0;
}