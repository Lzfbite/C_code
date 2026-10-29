#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void Func(int arr[], int n)
{
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        // 从左往右:是奇数就跳过,直到遇到偶数(或两人相遇)
        while (left < right && arr[left] % 2 != 0)
            left++;

        // 从右往左:是偶数就跳过,直到遇到奇数(或两人相遇)
        while (left < right && arr[right] % 2 == 0)
            right--;

        // 左边是偶数、右边是奇数,交换
        if (left < right)
        {
            int t = arr[left];
            arr[left] = arr[right];
            arr[right] = t;
            left++;
            right--;
        }
    }
}

int main(void)
{
    int arr[100], n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    Func(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}