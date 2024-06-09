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
printf("Enter the array Elements:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    //wave Print
    printf("\n");
    for(int i=0;i<r;i++)
    {
        if(i%2==0)
        {
            printf("[");
           for(int j=0;j<c;j++)
        {
            printf(" %d ",arr[i][j]);
        } 
        printf("]");
        printf("\n");
        }
         else{
            printf("[");
            for(int j=c-1;j>=0;j--)
            {
                printf(" %d ",arr[i][j]);
            }
            printf("]");
            printf("\n");
         }
       //  printf("\n");  
    }
    return 0;

}