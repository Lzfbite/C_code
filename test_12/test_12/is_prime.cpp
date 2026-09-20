#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int is_prime(int n)
{
	int i = 0;
	for (i = 2;i <= n / 2;i++)
	{
		if (n % i == 0)
		{
			return 0;

		}
		else
			return 1;
	}
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int r = is_prime(num);
	if (r)
	{
		printf("%d is a prime number\n", num);
	}
	else
	{
		printf("%d is not a prime number\n", num);
	}
	return 0;
}

