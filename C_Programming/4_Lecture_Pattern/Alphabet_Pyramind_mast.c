#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines :");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int q=1;q<=n-i;q++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%c",j+64);
        }
        int a=i-1;
        for(int k=1;k<=i-1;k++)
        {
            printf("%c",a+64);
            a--;
        }
        printf("\n");
    }
}