//to find the max and min b/w two numbers.

#include<stdio.h>
int max(int n1,int n2)
{
    int max;
    max=(n1>n2)? n1:n2;
    return max;
}
int min(int n1,int n2)
{
    int min;
    min=(n1<n2)? n1:n2;
    return min;
}
int main()
{
    int num1,num2,Max,Min;
    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2);
    Max=max(num1,num2);
    Min=min(num1,num2);
    printf("\nMaximum=%d",Max);
    printf("\nMinimum=%d",Min);

    return 0;
}
