 #include<stdio.h>
 int main()
 {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int a=1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",a);
            a=a+2; 
        }
        printf("\n");
    }
 }