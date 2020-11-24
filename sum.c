//WAP to find sum of all natural nos between 1 to n

#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the no: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i;
    printf("Sum=%d",sum);
    return 0;
}
