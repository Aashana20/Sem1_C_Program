#include<stdio.h>
void factorial(int num)
{
    int i,fact=1;
    for(i=num;i>=1;i--)
        fact=fact*i;
    printf("Factorial=%d",fact);
}
int main()
{
        int n;
        printf("Enter the no:");
        scanf("%d",&n);
        factorial(n);
        return 0;
}
