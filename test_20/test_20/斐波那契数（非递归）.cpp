#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	if ((n == 1) || (n == 2))
	{
		printf("1\n");
	}
	else
	{
		int a = 1, b = 1, c = 0;
		for (n;n > 2;n--)
		{
			c = a + b;
			a = b;
			b = c;
		}
		printf("%d\n", c);
	}
	return 0;
}