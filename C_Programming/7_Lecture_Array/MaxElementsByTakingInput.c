#include<stdio.h>               //NOT RUN PROGRAM.
 int main()
 {
    int n,i;
    printf("Enter the size of array:");
    scanf("%d",&n);

     int arr[n];
     printf("Array elements are :\n");
     for(i=0;i<n-1;i++)
     {
     	scanf("%d \n",&arr[i]);
	 }
	 
	 int max = arr[0];
	 for(i=1;i<n;i++)
	 {
	 	if(max<arr[i])
	 	{
	 		max = arr[i];
		 }
	 }
	 
	 
    printf("\nMax elements is %d",max);

    return 0;

 }