#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct Date
    {
        int day;
        int month;
        int year;
    } Date ;

    Date a,b;

    //a-->16/07/2005
    //b-->22/05/2024

    a.day = 16;
    a.month = 07;
    a.year = 2005;

    b.day = 26;
    b.month = 07;
    b.year = 2005;

    Date c;
    c = a;

    bool flag = true;
    if(a.day != c.day) flag = false;
    if(a.month != c.month) flag = false;
    if(a.year != c.year) flag = false;

    if(flag==true) printf("The dates are same:");
    else{
        printf("The dates are different :");
    }
    return 0;
    
}