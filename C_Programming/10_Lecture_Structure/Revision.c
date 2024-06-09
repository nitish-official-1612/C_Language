 #include<stdio.h>
 #include<string.h>
 int main()
 {
    struct Person
    {
        char name[50];
        int age;
        float salary;
    }a,b;

    a.age = 20;
    a.salary = 40000;
    strcpy(a.name,"Rahul Kumar");

     
    b.age = 25;
    b.salary = 100000;
    strcpy(b.name,"Amit Kumar");

    printf("Name of first person is : %s\n",a.name);
    printf("Age of second person is : %d\n",b.age);
   
 }