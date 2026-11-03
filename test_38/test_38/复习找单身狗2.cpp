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
//void find_singledog(int* arr, int size,int* x,int* y)
//{
//
//}
int main()
{
	int arr[10] = { 1,2,3,4,5,1,2,3,4,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	int all = 0;
	for (int i = 0; i < sz; i++) 
		all ^= arr[i];      

	int lowbit = all & (-all);                           

	int x = 0, y = 0;
	for (int i = 0; i < sz; i++)                      
	{
		if ((arr[i] & lowbit) != 0) 
			x ^= arr[i];
		else                        
			y ^= arr[i];
	}
	printf("%d %d", x, y);
	return 0;
}