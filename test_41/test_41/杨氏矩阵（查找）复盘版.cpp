#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//本题错点，二维数组传参没掌握
int find_num(int arr[][5],int rows,int cols, int num)
{
	int x = rows - 5;
	int y = cols - 1;
	while (x<rows && y>=0)
	{
		if (arr[x][y] == num)
		{
			return 1;
		}
		else if (arr[x][y] > num)
		{
			y--;//向左查找
		}
		else
		{
			x++;//向下查找
		}
	}
	return 0;
}
int main()
{
	int arr[5][5] =
	{
		{ 1,  4,  7, 11, 15},
		{ 2,  5,  8, 12, 19},
		{ 3,  6,  9, 16, 22},
		{10, 13, 14, 17, 24},
		{18, 21, 23, 26, 30}
	};// 5*5的二维数组
	int num = 0;
	printf("请输入要查找的数字：");
	if (scanf("%d", &num) != 1)//判断输入是否有效
	{
		printf("输入无效\n");
		return 1;
	}
	int found = find_num(arr, 5, 5, num);//调用函数查找数字
	if (found == 1)
	{
		printf("找到了\n");
	}
	else
		printf("没找到\n");
	return 0;
}