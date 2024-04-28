 #include<stdio.h>
int main()
{
    int l,b,A,P;
    printf("Enter length of rect :");
    scanf("%d",&l);
    printf("Enter breath of rect :");
    scanf("%d",&b);

    A = (l*b);
    printf("Area is %d\n",A);
    P = 2*(l+b);
    printf("Perimeter is %d\n",P);
    if(A>P)
    {
        printf("Area is greater than its Perimeter");
    }
    else
    {
    	printf("Area is not greater than its Perimeter");
	}
}