 #include<stdio.h>
int main()
{
    float x,y;
    int z; 
    printf("Enter a decimal number:");
    scanf("%f",&x);
    z=x;
    y=x-z;
    printf("Fractional part of ur decimal no %f is %f",x,y);
    return 0;
}