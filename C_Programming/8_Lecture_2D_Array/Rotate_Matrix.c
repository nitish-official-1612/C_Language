 #include<stdio.h>   //not run programm
int main()
{
    int n;
    printf("Enter the number of row and column : \n");
    scanf("%d",&n);



    int arr[n][n];
    //inputs
printf("Elements of array:\n");
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

    //rotate
    for(int i=0;i<n;i++)
    {
        int j=0;
        int k=n-1;
        while(i<k)
        {
            //swap arr[i][j] and arr[i][k]
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            j++;
            k--;
        }

    }

    //output
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

