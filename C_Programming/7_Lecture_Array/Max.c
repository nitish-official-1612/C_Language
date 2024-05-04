#include<stdio.h>
int main()
{
    int arr[10] = {2,8,6,4,9,10,51,3,48,50};
   int  max = arr[0];

    for(int i=1;i<10;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    printf("Max elements in array is %d",max);

    return 0;

}