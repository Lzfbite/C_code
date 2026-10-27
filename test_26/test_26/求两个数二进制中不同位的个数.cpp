#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
// 求两个数二进制中不同位的个数
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int c = 0;
	c = a ^ b;//异或运算，得到不同位为1，相同位为0
    //然后将问题转化为求C的二进制中1的个数
    int count = 0;
    while (c)
    {
        //Kernighan算法
		c = c & (c - 1);//消去最右边的1
        count++;
    }
    printf("%d", count);
    return 0;
}