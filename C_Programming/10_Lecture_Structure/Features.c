#include<stdio.h>
#include<string.h>
int main()
{
   typedef struct Book
    {
        char name[50];
        int noOfpages;
        float price;
    } Book;

    Book a;
    Book b;
    Book c;
    Book d;


    a.noOfpages = 100;
    a.price = 411.14;
    strcpy(a.name,"Secret Seven");

    b=a;
    b.noOfpages = 500;
    printf("%d\n",b.noOfpages);
    printf("%d",a.noOfpages);

    return 0;

}