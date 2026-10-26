#include <stdio.h>

static unsigned int digit_sum(unsigned int n)
{
    unsigned int sum = 0;

    do {
        sum += n % 10;
        n /= 10;
    } while (n != 0);

    return sum;
}

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "输入无效\n");
        return 1;
    }

    /* 按数字本身求和，负号不参与计算；这样也能安全处理 INT_MIN */
    unsigned int value =
        (unsigned int)(n < 0 ? -(long long)n : n);

    printf("%u\n", digit_sum(value));
    return 0;
}