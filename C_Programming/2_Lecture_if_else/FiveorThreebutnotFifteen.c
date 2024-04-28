#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the value of n :");
    scanf("%d",&n);

    if(n%3==0 || n%5==0)
    {
        if(n%15!=0)
        {
            printf("Number is divisible by 3 or 5 but not fifteen");
        }
        else
        {
            printf("Numbert is divisible by Fifteen");
        }
    }
    else{
        printf("Number is not divisible by 3 or 5");
    }
}