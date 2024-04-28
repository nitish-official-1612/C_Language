 #include<stdio.h>
int main()
{
    int a,i,n;
    printf("Enter no :");
    scanf("%d",&n);
    // 3,12,48.....
    //we are going to used extra variable.
    a = 3;
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        a = a*4;
    }
}