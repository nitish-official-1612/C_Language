#include<stdio.h>
int main()
{
    float m1 = 100;  //math marks
    float m2 = 77;   //physics marks
    float m3 = 92;  //chemistry marks
    float m4 = 90;   //english marks
    float m5 = 86;  //biology marks

    float p = (m1 + m2 + m3 + m4 + m5)/5;

    printf("Percentage of 5 subjects is : %f",p);
    return 0; 
}