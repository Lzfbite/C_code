#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#define COUNT 5
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222


int main()
{
	int Sn = 0;
	int a = 0;
	scanf("%d", &a);
	int count = COUNT;
	while (count)
	{
		Sn += a;//将a累加到Sn中
		a = a * 10 + a % 10;//将a变为下一个数
		count--;
	}
	printf("%d", Sn);
	return 0;
}