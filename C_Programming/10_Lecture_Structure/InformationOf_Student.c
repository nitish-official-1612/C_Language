#include<stdio.h>          //NOT RUN...
#include<string.h>
int main()
{
    typedef struct Student
    {
        char name[20];
        int Roll;
        int Batch;
        char Branch[10];
        double Mobile_No;

    } Student;

    Student arr[3];

    arr[0].Batch = 2023;
    arr[0].Branch = ECE;
    arr[0].Mobile_No = 8434000005;
    arr[0].Roll = 21;
    strcpy(arr[0].name,"Nitish");
    
    arr[1].Batch = 2024;
    arr[1].Branch = ECE;
    arr[1].Mobile_No = 6299000005;
    arr[1].Roll = 15;
    strcpy(arr[1].name,"Gaurav");

    arr[2].Batch = 2020;
    arr[2].Branch = CSE;
    arr[2].Mobile_No = 9172000005;
    arr[2].Roll = 1;
    strcpy(arr[2].name,"Ram");

    for(int i=0;i<3;i++)
    {
        printf("Name : %s\n",arr[i].name);
        printf("Roll : %d\n",arr[i].Roll);
        printf("Batch : %d\n",arr[i].Batch);
        printf("Branch : %c\n",arr[i].Branch);
        printf("Mobile_No : %d\n",arr[i].Mobile_No);
        printf("\n");
    }
    return 0;
}