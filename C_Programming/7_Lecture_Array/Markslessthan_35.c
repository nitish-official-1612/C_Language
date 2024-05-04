#include<stdio.h>
int main()
{
    
    int marks[10] = {95,10,56,85,15,65,45,34,19,100};
     
     for(int i=0;i<10;i++)
     {
        if(marks[i]<35){
        printf("index number is %d\n",i);
        }
     }
    return 0;
}