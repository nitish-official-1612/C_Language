#include<stdio.h>      
#include<string.h>
int main()
{
    typedef struct Cricketer
    {
        char firstname [20];
        char lastname [20];
        int age;
        int NoOfMatchesPlayed;
        float Average;
    } Cricketer;

    Cricketer arr[20];

    //3 Cricketer
    printf("Enter Details of cricketers : \n\n");

    for(int i=0;i<3;i++)
    {
        scanf("%s",&arr[i].firstname);
        scanf("%s",&arr[i].lastname);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].NoOfMatchesPlayed);
        scanf("%f",&arr[i].Average);
    }
    
    printf("\n\nDetails of Cricketers are : \n\n");

    for(int i=0;i<3;i++)
    {
        printf("Name : %s %s\n",arr[i].firstname,arr[i].lastname);
        printf("Age : %d\n",arr[i].age);
        printf("Number of matches played : %d\n",arr[i].NoOfMatchesPlayed);
        printf("Average : %0.2f\n",arr[i].Average);
        printf("\n\n");
    }
    
}