//WAP to print natural numbers from 1to n.

#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the natural no till which you want to print: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)                                                // use for construct do decrease line of code
        printf("\n%d",i);
    return 0;

}
