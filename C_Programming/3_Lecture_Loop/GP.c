#include<stdio.h>
int main()
{
    int a,i,n;
    printf("Enter no :");
    scanf("%d",&n);
    // 1,2,4,8,16,32,.....
    //we are going to used extra variable.
    a = 1;
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        a = a*2;
    }
}