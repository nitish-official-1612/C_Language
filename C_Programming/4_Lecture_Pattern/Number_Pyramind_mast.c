#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of lines :");
    scanf("%d",&n);


    for(int i=1;i<=n;i++)
    {
        for(int q=1;q<=n-i;q++)     //for space ke liye
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)         //for number triangle
        {
            printf("%d",j);
        }
        int a = i-1;
        for(int k=1;k<=i-1;k++)         //for extra cheez
        {
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}