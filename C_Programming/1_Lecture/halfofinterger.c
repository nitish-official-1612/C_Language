#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    float x2 = x;
    float y = x2/2;
    printf("%.2f",y);
    return 0;
}