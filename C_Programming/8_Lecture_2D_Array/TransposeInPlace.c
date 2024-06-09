 #include<stdio.h>   //not run programm
int main()
{
    int n;
    printf("Enter the number of row and column : \n");
    scanf("%d",&n);



    int arr[n][n];
    //inputs
printf("Taking elements are:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    //transpose
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
             int temp=arr[i][j];
             arr[i][j]=arr[j][i];
             arr[j][i]=temp;
        }
    }

    //output
    printf("Array elements are:\n");
    for(int i=0;i<n;i++)
    {
        printf("[");
        for(int j=0;j<n;j++)
        {
            printf(" %d ",&arr[i][j]);
        }
        printf("]");
        printf("\n");

    }
    return 0;
}    

