#include<stdio.h>
//1~100中有几个9？
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1;i <= 100;i++)
	{
		if ((i % 10 == 9)||(i / 10 == 9))
		{
			count++;
			if ((i / 10 == 9)&&(i % 10 == 9))
			{
				count++;
			}
			else
				continue;
		}
	}
	printf("一共有%d个9", count);
	return 0;
}