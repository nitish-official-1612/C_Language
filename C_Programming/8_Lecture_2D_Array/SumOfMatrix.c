#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    printf("Enter the number of colum:\n");
    scanf("%d",&m);

    int arr[n][m];
    
    printf("Enter Array Elements:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }


    printf("Elements are:\n");
    for(int i=0;i<n;i++)
    {
        printf("[");
        for(int j=0;j<m;j++)
        {
            printf(" %d ",arr[i][j]);
        }
        printf("]");
        printf("\n");
    }

    int sum = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
             sum = sum + arr[i][j];
        }
    }

    printf("Sum of matrix is %d",sum);

    return 0;
}