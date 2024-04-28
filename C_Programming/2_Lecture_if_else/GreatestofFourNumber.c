#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the value of a=");
    scanf("%d",&a);
     printf("Enter the value of b=");
    scanf("%d",&b);
    printf("Enter the value of c=");
    scanf("%d",&c);
     printf("Enter the value of d=");
    scanf("%d",&d);

    
    if(a>b && a>b && a>d)
    {
        printf("a is greatest");
    }
    if(b>a && b>c && b>d)
    {
        printf("b is greatest");
    }
    if(c>a && c>b && c>d)
    {
        printf("c is greatest");
    }
    if(d>a && d>b && d>c)
    {
        printf("d is greatest");
    } 
    return 0;
}