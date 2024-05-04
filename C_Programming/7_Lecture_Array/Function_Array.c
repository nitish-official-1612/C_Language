#include<stdio.h>           //value changes in array by passing function in array. 
void fun(int x[])
{
    x[0] = 150;
    return;
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    printf("%d\n",arr[0]);
    fun(arr);
    printf("%d\n",arr[0]);
    return 0;

}