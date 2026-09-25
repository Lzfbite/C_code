#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//·ÇµÝ¹éÇó½×³Ë
int main()
{
	int num = 0;
	int sum = 1;
	scanf("%d" ,&num);
	while (num)
	{
		sum *= num;
		num--;
	}
	printf("%d\n", sum);
	return 0;
}