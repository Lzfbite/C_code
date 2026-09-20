#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int isLeap(int n);

int main()
{
	int year = 0;
	scanf("%d", &year);
	if (isLeap(year))
		printf("ÈòÄê");
	else
		printf("Æ½Äê");
	return 0;
}

int isLeap(int n)
{
	return (n % 4 == 0 && n % 100 != 0) || n % 400 == 0;
}