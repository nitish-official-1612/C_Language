 #include<stdio.h>
#include<string.h>
int main()
{
    struct Book
    {
        char name[50];
        int noOfpages;
        float price;
    }a,b,c;

    a.noOfpages = 1000;
    a.price = 500;
    strcpy(a.name,"Secret Seven");

    printf("Name of Book : %s\n",a.name);
    printf("Price is : %.2f\n",a.price);
    printf("Number of pages is : %d\n",a.noOfpages);

    printf("\n");

    b.noOfpages = 2000;
    b.price = 1000;
    strcpy(b.name,"Famous Five");

    printf("Name of Book : %s\n",b.name);
    printf("Price is : %.2f\n",b.price);
    printf("Number of pages is : %d\n",b.noOfpages);

    return 0;
    
}