#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of 1st side=");
    scanf("%d",&a);
    printf("Enter the value of 2nd side=");
    scanf("%d",&b);
    printf("Enter the value of 3rd side=");
    scanf("%d",&c);

     if(a+b>c && b+c>a && a+c>b)
     {
        printf("Valid Triangle");
     }
     else
     {
        printf("Invalid Triangle");
     }
    
    return 0;
}