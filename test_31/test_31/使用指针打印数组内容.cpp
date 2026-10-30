#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//实现使用指针打印数组内容
void print_arr(int* arr, int sz)
{
	for (int i = 0;i < sz;i++)
	{
		printf("%d ", *arr);
		arr++;
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组中元素个数
	print_arr(arr, sz);
	return 0;
}