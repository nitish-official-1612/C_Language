#include<stdio.h>
void swap(int *a , int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return;
}
int main()
{
	printf("swapping of number using FUNCTION :\n");
	printf("-------------------------------------\n");
	
	int a;
	printf("Enter first number :");
	scanf("%d",&a);
	
	int b;
	printf("Enter second number :");
	scanf("%d",&b);
	
	printf("Before swapping number are :\n");
	printf("n1=%d,n2=%d\n",a,b);
	
	swap(&a,&b);
	
	printf("After swapping Numbers are \nn1=%d, n2=%d",a,b);
	
	return 0;
	
}