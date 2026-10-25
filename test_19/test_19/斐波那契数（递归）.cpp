#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//递归求斐波那契数
//输入一数n，输出第n个斐波那契数

int Fac(int n)
{
	if ((n == 1) || (n == 2))
	{
		return 1;
	}
	else
	{
		return Fac(n - 1) + Fac(n - 2);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Fac(n);
	printf("%d", Fac(n));
	return 0 ;
}