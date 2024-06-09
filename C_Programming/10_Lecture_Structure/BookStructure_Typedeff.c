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

    printf("Number of pages : %d\n",a.noOfpages);
    printf("Price : %f\n",a.price);
    printf("Name of book is : %s\n",a.name);

    printf("\n");
    b.noOfpages = 200;
    b.price = 511.14;
    strcpy(b.name,"Famous Five");

    printf("Number of pages : %d\n",b.noOfpages);
    printf("Price : %f\n",b.price);
    printf("Name of book is : %s\n",b.name);


    return 0;

}