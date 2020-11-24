//WAP to print a table of any number provided by the user

#include<stdio.h>
int main()
{
    int a,n,i=1,x;
    printf("Enter the number of which the table is: ");
    scanf("%d",&a);
    printf("\nEnter the no till which table will be printed:");
    scanf("%d",&n);
    while(i<=n)
    {
        x=a*i;
        printf("\n%d * %d=%d",a,i,x);
        i++;
    }
    return 0;
}
