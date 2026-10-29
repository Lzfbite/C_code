#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//字符串逆序
int main()
{
	char str[]="hello nowcoder";
	//不要问我为什么不能输入，问就是还没学输入方法
	char* p = str;//这里是指针好吧，指向数组的首地址
	int i = 0;
	int sz = 0;
	sz = sizeof(str) / sizeof(str[0]);
	for (i = sz - 1;i >= 0;i--)
	{
		printf("%c", *(p + i));
	}
	return 0;
}