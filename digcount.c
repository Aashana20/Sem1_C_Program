//WAP to count no of digits in a no

#include<stdio.h>
int main()
{
    int n,i,dig=0;
    printf("Enter the no: ");
    scanf("%d",&n);
    while(n!=0)
    {
        n/=10;
        ++dig;
    }
    printf("Number of digits=%d",dig);
    return 0;
}
