#include<stdio.h>
int main()
{
    int a,i,n;
    printf("Enter no :");
    scanf("%d",&n);
    // 4 7 10 13 17 20.....
    //we are going to used extra variable.
    a = 4;
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        a = a+3;
    }
}