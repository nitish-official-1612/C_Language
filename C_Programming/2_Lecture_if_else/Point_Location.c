#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinates:");
    scanf("%d %d",&x,&y);

    if(x==0 && y==0)
    {
        printf("Point is at origin");
    }
    else if(x==0)
    {
        printf("Point is on Y-axis");
    }
    else if(y==0){
        printf("Point is on X-axis");
    }
    else
    {
        printf("Points not lies on X and y-axis,And not a origin");
    }
    return 0;
}