#include<stdio.h>            //not run
int main()
{
    int arr[3][4]={{1,0,1,1},{1,0,1,0},{1,1,0,0}};
    int i,j;
    int maxcount = 0;

    for(i=0;i<3;i++)
    {
        int count = 0;
        for(j=0;j<4;j++)
        {
            if(arr[i][j]==1)
            count++;
        }
        printf("%d",maxcount);
    }
}