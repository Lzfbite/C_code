#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int jiecheng(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	return jiecheng(n - 1) * n;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d",jiecheng(num));
	return 0;
}