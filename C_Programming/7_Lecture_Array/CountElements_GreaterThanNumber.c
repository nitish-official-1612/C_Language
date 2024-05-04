 #include<stdio.h>
 int main()
 {
 	int arr[10] = {10,25,87,15,48,65,95,99,100,77};
 	int x = 35;
 	int count = 0;
 	for(int i=0;i<10;i++)
 	{
 		if(arr[i]>x)
 		{
             count++;
		 }
	}
	printf("%d ",count);
 }