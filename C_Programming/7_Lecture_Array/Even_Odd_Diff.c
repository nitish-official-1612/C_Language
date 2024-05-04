#include<stdio.h>
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int sumEven = 0;   //sum 1 3 5 7 9 = 25
	int sumOdd = 0;   //sum 2 4 6 8 10 = 30
	
	for(int i=0;i<10;i++)
	{
		if(i%2==0)
		{
			sumEven = sumEven + arr[i];
		}
		else
		{
			sumOdd = sumOdd +arr[i];
		}
	}
	int res = sumEven - sumOdd;
	printf("%d",res);
	return 0;
	
}