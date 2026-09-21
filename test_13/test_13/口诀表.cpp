#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void koujuebiao(int n)
{
	int i, j;
	for (i = 1;i <= n;i++)
	{
		for (j = 0;j <= n;j++)
		{
			printf("%d*%d=%d", i, j, i * j);
			printf("\t");
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	koujuebiao(n);
	return 0;
}