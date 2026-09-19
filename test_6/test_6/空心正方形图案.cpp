#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
void print(int num)
{
    int i, j;
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            if (i == 0 || i == num - 1 || j == 0 || j == num - 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int num;
    while (scanf("%d", &num) != EOF)//处理多组输入
    {
        print(num);
    }
    return 0;
}
