#include<stdio.h>
int main()
{
    int n;
    printf("Enter a no : ");
    scanf("%d",&n);

    //Ternary operator
    //Expression1 ? Expression2 : Expression3

    n%2==0 ? printf("Even no") : printf("odd no");

    return 0;
}