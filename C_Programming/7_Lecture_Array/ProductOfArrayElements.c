 #include<stdio.h>                       //NOT RUN PROGRAM.
 int main()
 {
    int n,i;
    printf("Enter the size of array:");
    scanf("%d",&n);

    int arr[n];
    printf("TAking array elements are :\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Array elements are :\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }

    int sum = 0;

    for(i=1;i<=n;i++)
    {
        sum = sum * arr[i];
    }

    printf("\nSum is %d\n",sum);

    return 0;

 }