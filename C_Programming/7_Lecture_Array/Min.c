#include<stdio.h>
int main()
{
    int arr[10] = {2,8,6,4,9,10,51,3,48,50};
   int  min = arr[0];

    for(int i=1;i<10;i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
        }
    }
    printf("Min elements in array is %d",min);

    return 0;

}