#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);

    int b;
    printf("Enter the value of b : ");
    scanf("%d",&b);

     a = a + b;
     b = a - b;
     a = a - b;

    // printf("The value of a is %d\n",a);
    // printf("The value of b is %d",b);

    printf("The value after swapping are %d %d",a,b);

    return 0;

}