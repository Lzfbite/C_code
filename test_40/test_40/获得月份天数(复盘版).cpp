#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int is_leapyear(int years)
{
	return(
		(years % 4 == 0 && years % 100 != 0) || (years % 400 == 0)
		);
}
void days_of_months(int*arr, int years, int months)
{
	int r = is_leapyear(years);
	if (r)
	{
		if (months == 2)
		{
			printf("29Ìì\n");
		}
		else
			printf("%dÌì\n", arr[months]);
	}
	else
	{
		printf("%dÌì\n", arr[months]);
	}
}
int main()
{
	int years = 0;
	int months = 0;
	int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	while (scanf("%d %d", &years, &months) == 2) {
		days_of_months(arr, years, months);
	}
	return 0;
}