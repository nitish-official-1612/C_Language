 #include<stdio.h>
int main()
{
    int i,j,r,c ;
    printf("Enter the size of row :");
    scanf("%d",&r);
    printf("Enter the size of colum:");
    scanf("%d",&c);
    
    int arr[r][c];

    printf("Enter the elements of array:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Array elements are :\n");

    for(i=0;i<r;i++)
    {
        printf("[");
        for(j=0;j<c;j++)
        {
            printf(" %d ",arr[i][j]);
        }
        printf("]");
        printf("\n");
    }

    return 0;
}
