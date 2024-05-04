#include<stdio.h>
int main()
{
    int arr[7]= {1,2,3,4,5,6,7};
    int x= 5;
    for(int i=1; i<=6;i++)
    {
        if(arr[i]==x)
        {
            printf("%d is in the array and its index position is %d",x,i);
            break;
        }
    }
    return 0;

}