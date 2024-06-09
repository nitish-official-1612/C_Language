#include<stdio.h>
int main()
{
    char str[]="College Wallah is best channel for code";
   // str[1]=97;
    int i=0;
    while(str[i]!='\0')
    {
         printf("%c",str[i]);      //way of printing particular element
        // printf("%c",i[str]);    //way of printing particular element
        // printf("%c",*(str+i));     //way of printing particular element
        //printf("%c",*(i+str));      //way of printing particular element
        
         i++;
    }
    return 0;
}