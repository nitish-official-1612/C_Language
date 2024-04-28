#include<stdio.h>
int main()
{
    int m;
    printf("Enter your marks :");
    scanf("%d",&m);

    // more than 80  --> A
    // more than 60  --> B
    // more than 40  --> C
    // less than 40  --> D

    if(m>80)
    {
        printf("A grade\n");
    }
    else if(m>60)
    {
        printf("B grade\n");
    }
    else if(m>40)
    {
        printf("C grade\n");
    }
    else{
        printf("D grade\n");
    }
    return 0;

}