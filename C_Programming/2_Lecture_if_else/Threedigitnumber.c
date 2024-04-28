#include<stdio.h>
int main()
{
    int n;
    printf("Enter a numbr :");
    scanf("%d",&n);
    if(n>99 && n<1000)
    {
        printf("Its a three digit Numer.");
    }
    else{
        printf("Its not a three digit Number.");
    }
}