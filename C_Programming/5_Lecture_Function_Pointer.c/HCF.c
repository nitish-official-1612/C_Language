#include<stdio.h>                                 //NOT RUN PROGRAM...
int min(int a, int b)
{
    if(a<b)
    return a;
    else
    return b;
}
 int gcd(int a, int b)
 {
    int hcf;
    for(int i=1;i<=min(a,b);i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf  1;
        }
    }
    return hcf;
 }
 int main()
 {
    int a;
    printf("Enter 1st number :");
    scanf("%d",&a);

    int b;
    printf("Enter 2st number :");
    scanf("%d",&b);

    int hcf = gcd(a,b);
    printf("The hc is =%d"hcf);
 }