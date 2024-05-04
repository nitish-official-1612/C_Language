#include<stdio.h>
int power(int a,int b)
{
     int x = 1;
     for(int i=1;i<=b;i++)
     {
        x = x*a;
     }
     return x;
}
int main()
{
    int a;
    printf("Enter a base :");
    scanf("%d",&a);

    int b;
    printf("Enter a power :");
    scanf("%d",&b);


     int p = power(a,b);
     printf("%d raise t0 power %d is %d",a,b,p);

    return 0;
}