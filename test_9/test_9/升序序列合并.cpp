#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//升序序列合并
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int i, j;
	int a[100], b[100];
	for (i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}
	for (j = 0;j < m;j++)
	{
		scanf("%d", &b[j]);
	}

	int c[200];          //结果数组，最多容纳 n+m 个元素
	int k = 0;           //结果数组的下标
	i = 0;               //指针 i 指向数组 a 的当前元素
	j = 0;               //指针 j 指向数组 b 的当前元素

	//双指针归并：每次取两边较小的元素放入结果数组
	while (i < n && j < m)
	{
		if (a[i] <= b[j])//a 的当前元素更小（相等时先取 a）
		{
			c[k] = a[i];
			i++;
		}
		else             //b 的当前元素更小
		{
			c[k] = b[j];
			j++;
		}
		k++;
	}

	//收尾：把 a 中剩余的元素全部搬过去
	while (i < n)
	{
		c[k] = a[i];
		i++;
		k++;
	}

	//收尾：把 b 中剩余的元素全部搬过去
	while (j < m)
	{
		c[k] = b[j];
		j++;
		k++;
	}

	//输出合并后的升序序列，元素之间用空格分隔
	for (i = 0;i < k;i++)
	{
		printf("%d ", c[i]);
	}

	return 0;
}
