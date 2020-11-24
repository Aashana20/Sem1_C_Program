#include<stdio.h>
int main()
{
    int n,first, last;
    printf("Enter the no: ");
    scanf("%d",&n);
    last=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    first=n;
    printf("\n First digit=%d",first);
    printf("\n Last digit=%d",last);
    printf("\n%d + %d=%d",first,last,first+last);
    return 0;
}
