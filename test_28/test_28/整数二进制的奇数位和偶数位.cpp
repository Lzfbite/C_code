#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
void print(int n)
{
	int i, j;
	printf("ÆæÊý£º");
	for (i = 0;i < 32;i += 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	printf("Å¼Êý£º");
	for (j = 1;j < 32;j += 2)
	{
		printf("%d ", (n >> j) & 1);
	}
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}