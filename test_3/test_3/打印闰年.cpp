#include<stdio.h>

//写代码，实现打印1000~2000年间的闰年
int main()
{
	int i = 0;
	for (i = 1000; i <= 2000;i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
		{
			printf("%d ", i);
		}
	}
	return 0;
}