#include<stdio.h>
int main()
{
    int arr[5] = {5,6,7,8,9};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n",&arr[4]);
    return 0;
}