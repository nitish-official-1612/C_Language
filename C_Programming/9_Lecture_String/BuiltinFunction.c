#include<stdio.h>
#include<string.h>
int main()
{
    //strlength

    // char *str="Nitish";
    // int x = strlen(str);
    // printf("%d",x);

    //strcpy

    // char s1[7] ="Nitish";
    // char s2[7];
    // strcpy(s2,s1);
    // s2[0]='M';
    // printf("%s",s2);

    //strcat   (concatinate)
    
    char s1[12] = "Nitish";
    char s2[] = "Kumar";
    strcat(s1,s2);
    printf("%s",s1);

    return 0;
}