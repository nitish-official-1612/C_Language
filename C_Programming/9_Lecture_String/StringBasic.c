#include<stdio.h>
int main()
{
    // int a[4]={1,2,3,4};
    // printf("%p \n",&a[0]);
    // printf("%p \n",&a[1]);
    // printf("%p \n",&a[2]);
    // printf("%p \n",&a[3]);

    // char arr[4] = {'a','b','c','d'};
    // printf("%p \n",&arr[0]);
    // printf("%p \n",&arr[1]);
    // printf("%p \n",&arr[2]);
    // printf("%p \n",&arr[3]);

    //char str[]={'h','e','l','l','o','w','o','r','l','d'};
char str[]="College Wallah is best channel for code";
    
    int i=0;
    while(str[i]!='\0')
    {
         printf("%c",str[i]);
         i++;
    }


    return 0;
} 