#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void func(char* str)//实现字符串的左旋操作
{
	int n = 0;
	printf("请输入左旋的字符个数");
	scanf("%d", &n);
	while (n)
	{
		int temp = *str;
		*str = *(str + 1);
		*(str + 1) = *(str + 2);
		*(str + 2) = *(str + 3);
		*(str + 3) = temp;
		n--;
	}
}
void print(char* str, int sz)
{
	for (int i = 0;i < sz;i++)
	{
		printf("%c", *str);
		str++;
	}
}
int main()
{
	char ch[] = "ABCD";
	func(ch);
	int sz = sizeof(ch) / sizeof(ch[0]);
	print(ch, sz);//输出左旋后的字符串
	return 0;
}