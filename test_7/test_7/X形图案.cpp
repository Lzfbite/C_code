#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{ 
	int num = 0;
	while (scanf("%d", &num) != EOF)
	{
		int i, j;
		for (i = 1;i <= num;i++)
		{
			for (j = 1;j <= num;j++)
			{
				if ((i == j) || (i == (num - j)+1))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}