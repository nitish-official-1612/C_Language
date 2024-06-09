#include<stdio.h>           //NOT RUN PROGRAMM
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    int i,j;

    if(i%2==0)
    {
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                printf("%d",j);            }
        }
        printf("\n");
    }

    else{
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                printf("%c",j+64);  
            }
        }
        printf("\n");
    }
    return 0;
}