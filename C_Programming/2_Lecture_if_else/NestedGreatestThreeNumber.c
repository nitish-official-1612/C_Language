#include<stdio.h>
int main()
{
    int a,b,c;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("A is Greatest");
        }
        else
        {
            printf("C is Greatest");
        }
    }
    else
    {
        if(b>c)
        {
            printf("B is Greatest");
        }
        else{
            printf("C is Greatest");
        }
    }
    return 0;
}