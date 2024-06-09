#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j,k;
    printf("Enter first matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Second matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //processing

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=0;
            for(k=0;k<2;k++)
            {

                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }

    //output
    printf("Multiplication of matrix is:\n");
    for(i=0;i<2;i++)
    {
        printf("[");
        for(j=0;j<2;j++)
        {
            printf(" %d ",c[i][j]);
        }
        printf("]");
        printf("\n");
    }
    return 0;

}