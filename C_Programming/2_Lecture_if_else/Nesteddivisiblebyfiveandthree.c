#include<stdio.h>
int main()
{
    int n;
    printf("Enter a value :");
    scanf("%d",&n);

    if(n%5==0)
    {
        if(n%3==0)
        {
            printf("The number is %d divisible by 5 and 3",n);
        }
        else
        {
            printf("The number is %d not divisible by 5 and 3",n);
        }
    }
    else
        {
            printf("The number is %d not divisible by 5 and 3",n);
        }
        return 0;
}