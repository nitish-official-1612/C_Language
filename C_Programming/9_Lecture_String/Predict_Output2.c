#include<stdio.h>
int main()
{
    char str[]="College Wallah is best channel for code";
   // str[1]=97;
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        
         i++;
    }
    return 0;
}