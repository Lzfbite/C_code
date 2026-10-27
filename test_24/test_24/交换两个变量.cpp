#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//交换两个变量(不创建临时变量)

//方法一：使用异或运算符
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("交换前a=%d,b=%d\n", a, b);//交换前
	//可以使用异或运算符来交换两个变量的值，而不需要创建临时变量
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("交换后a=%d,b=%d\n", a, b);//交换后
	return 0;
}
//方法二：使用加减运算符
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("交换前a=%d,b=%d\n", a, b);//交换前
	a = a + b;
	b = a - b;
	a = a - b;
	printf("交换后a=%d,b=%d\n", a, b);//交换后
	return 0;
}