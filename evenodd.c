//to find whether no is odd or even

#include<stdio.h>
void evenodd(int num)
{
    (num%2==0)? printf("Even"):printf("Odd");
}
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    evenodd(n);
    return 0;
}
