#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void print(int* arr, int sz)
{
	for (int i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void find_twosingledog(int* arr, int sz,int* out1,int* out2)
{
	int all = 0;
	for (int i = 0; i < sz; i++)
		all ^= arr[i];

	if (all == 0)
	{
		*out1 = 0;
		*out2 = 0;
		return;
	}
	int lowbit = all & (-all);

	int x = 0, y = 0;
	for (int i = 0; i < sz; i++)
	{
		if ((arr[i] & lowbit) != 0)
			x ^= arr[i];
		else
			y ^= arr[i];
	}
	*out1 = x;
	*out2 = y;
}
int main()
{
	int a, b;
	int arr[10] = { 1,2,3,4,5,1,2,3,4,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	find_twosingledog(arr, sz, &a, &b);
	printf("%d %d", a, b);
	return 0;
}