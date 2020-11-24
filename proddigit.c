//To find product of digits of a number
#include<stdio.h>
int main()
{
    int n,x,prod=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        x=n%10;
        n=n/10;
        prod*=x;
    }
    printf("Product=%d",prod);
    return 0;
}
