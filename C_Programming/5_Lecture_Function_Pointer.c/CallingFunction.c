#include<stdio.h> 
void usa()
{
    printf("You are in usa\n");
     
    return;
}
void pakistan()
{
    printf("You are in pakistan\n");
    usa();    //Calling usa
    return;
}

void australia()
{
    printf("You are in australia\n");
    pakistan();    //Calling pakistan
    return;
}
void india()
{
    printf("You are in india\n");
    australia();    //Calling australia
    return;
}
int main()
{
    india();    //calling india
    return 0;    
}