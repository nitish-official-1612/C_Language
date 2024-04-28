#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter no :");
    scanf("%d",&n);

    for(i=0;i<=2*n-1;i=i+2)
    {
        printf("%d ",i);
    }
}