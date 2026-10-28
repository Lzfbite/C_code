#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#include <stdio.h>

int find_single_dog(int arr[], int sz)
{
    int ret = 0;
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        ret ^= arr[i];
    }
    return ret;
}
int main()
{
    int arr[] = { 1,2,3,4,5,1,2,3,4 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int dog = find_single_dog(arr, sz);
    printf("%d\n", dog);


    return 0;
}