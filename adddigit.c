//To add digits of a number
#include<stdio.h>
int main()
{
    int n,x,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n>0)
    {
        x=n%10;
        n=n/10;
        sum+=x;
    }
    printf("sum=%d",sum);
    return 0;
}
