#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//递归实现n的k次方
int pow(int x, int y)
{
	if (y == 0)
	{
		return 1;
	}
	else
	{
		return x * pow(x, y - 1);
	}
}
int main()
{
	int n, k;//输入n和k
	scanf("%d %d", &n, &k);
	printf("%d", pow(n, k));//输出n的k次方
	return 0;
}