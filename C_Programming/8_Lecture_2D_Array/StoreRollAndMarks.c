#include<stdio.h>             //Improve Later In this program.
int main()
{
    int arr[4][2]={76,80,57,81,40,90,21,95};

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Roll[%d],Marks[%d] :",i+1,j+1);
            printf("%d \n",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}