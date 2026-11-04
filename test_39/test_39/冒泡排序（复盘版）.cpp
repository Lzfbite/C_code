#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void bubblesort(int*arr,int sz)
{
	for (int i = 0;i < sz-1;i++)
	{
		int swapped = 0;
		for (int j=0;j<sz-1-i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				swapped = 1;
			}
		}
		if (swapped == 0) break;
	}
}
void print_arr(int* arr, int sz)
{
	for (int i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void scanf_arr(int* arr,int n)
{
	printf("请依次输入数组的各个元素：\n");
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &arr[i]);
	}
}
int main()
{
	int sz = 0;
	printf("请输入整型数组的个数：");
	scanf("%d", &sz);
	int arr[100] = { 0 };
	scanf_arr(arr,sz);
	print_arr(arr,sz);
	bubblesort(arr, sz);
	print_arr(arr, sz);
	return 0;
}