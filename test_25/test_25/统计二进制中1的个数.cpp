#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
// 统计二进制中1的个数

//方法一：使用除2取余法
//缺点：当输入负数时，输出结果不正确
int main()
{
	int n = 0;
	scanf("%d", &n);
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n /= 2;
	}
	printf("%d", count);
	return 0;
}

//方法二：使用位运算
//缺点：必须要循环32次，效率不高
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int count = 0;
	for (i = 0;i < 32;i++)
	{
		if ((n & 1) == 1)
		{
			count++;
		}
				n >>= 1;
	}
	printf("%d", count);
	return 0;
}

//方法三：使用Kernighan 算法
//此方法同时弥补了前两种方法的缺点，效率高，且输入负数时也能正确输出结果
//原理：每次循环将n的二进制表示中最右边的1变为0，直到n为0时，循环结束
//据说是后面数据结构中的重要知识点，值得升入研究
int main()
{
	int n = 0;
	int count = 0;
	scanf("%d", &n);
	while (n)
	{
		//Kernighan 算法
		n = n & (n - 1);//每次循环将n的二进制表示中最右边的1变为0
		count++;
	}
	printf("%d", count);
	return 0;
}