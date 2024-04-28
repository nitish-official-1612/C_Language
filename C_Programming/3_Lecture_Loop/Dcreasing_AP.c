 #include<stdio.h>
int main()
{
    int a,i,n;
    // printf("Enter no :");
    // scanf("%d",&n);
    // 100,97,94,91....
    //we are going to used extra variable.


    // a = 100;
    // for(i=1;i<=n;i++)
    // {
    //     printf("%d ",a);
    //     a = a-3;
    // }

    // a = 100;
    // for(i=1;i<=34;i++)
    // {
    //     printf("%d ",a);
    //     a = a-3;
    // }

    a = 100;
    for(i=1;a>0;i++)
    {
        printf("%d ",a);
        a = a-3;
    }
}