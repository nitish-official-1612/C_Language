#include<stdio.h>
int main()
{
    int r;
    printf("Enter the number of row:\n");
    scanf("%d",&r);

    int c;
    printf("Enter the number of colum:\n");
    scanf("%d",&c);

    int arr[r][c];
printf("Elements of array:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

printf("Array elements are:\n");

    for(int i=0;i<c;i++)
    {
        printf("[");
        for(int j=0;j<r;j++)
        {
            printf(" %d ",arr[j][i]);
        }
        printf("]");
        printf("\n");
    }
    return 0;

}