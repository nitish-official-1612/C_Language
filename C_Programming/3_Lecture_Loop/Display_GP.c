#include<stdio.h>
int main()
{
    int i,a,n;
   
    printf("n=");
    scanf("%d",&n);

    a=100;
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        a=a*1/2;
    }

}