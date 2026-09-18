#include <stdio.h>

int main()
{
    double sum = 0.0;
    int sign = 1;
    for (int i = 1; i <= 100; i++)
    {
        sum += sign * 1.0 / i;
        sign = -sign;
    }
    printf("sum = %f\n", sum);
    return 0;
}
