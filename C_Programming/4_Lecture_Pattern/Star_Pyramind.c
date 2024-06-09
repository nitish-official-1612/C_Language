//FIRST METHOD

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter number of lines :");
//     scanf("%d",&n);

//       for(int i=1;i<=n;i++)
//       {
//         for(int j=1;j<=2*i-1;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//       }
//     return 0;
// }


//SECOND METHOD


#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of lines :");
    scanf("%d",&n);

      int a = 1;
      for(int i=1;i<=n;i++)
      {
        for(int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=a;j++)
        {
            printf("*");
             
        }
        a=a+2;
        printf("\n");
      }
    return 0;
}