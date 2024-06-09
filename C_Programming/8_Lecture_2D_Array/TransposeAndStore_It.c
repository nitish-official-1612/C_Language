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

printf("Store array elements in another array:\n");

int brr[c][r];
    for(int i=0;i<c;i++)
    { 
        for(int j=0;j<r;j++)
        {
           // printf(" %d ",arr[j][i]);
            brr[i][j]=arr[j][i];
        }
    }

    for(int i=0;i<c;i++)
    {
        printf("[");
        for(int j=0;j<r;j++)
        {
            printf("%d ",brr[i][j]);
        }
        printf("]");
        printf("\n");
    }
    return 0;

}