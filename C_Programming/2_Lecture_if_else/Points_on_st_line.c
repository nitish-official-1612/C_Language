#include<stdio.h>
int main()
{
    double x1,y1,x2,y2,x3,y3;
    double m1,m2;
    printf("Enter the first coordinate:\n");
    scanf("%lf %lf",&x1,y1);
    printf("Enter the Second coordinate:\n");
    scanf("%lf %lf",&x2,y2);
    printf("Enter the Third coordinate:\n");
    scanf("%lf %lf",&x3,y3);
    

    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);


    if(m1=m2)
    {
        printf("Points are in thesame line");
    }
    else{
        printf("Points are not in the same line");
    }
    return 0;
}