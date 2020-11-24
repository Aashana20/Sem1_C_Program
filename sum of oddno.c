//To print sum of odd nos
#include<stdio.h>

int main()
{
    unsigned int i,sum=0,n;
    printf("Enter the number: ");
    sacnf("%u,&n");
    for(i=2;i<n;i++)                                                // use for construct
    {
        if(i%2!=0)
            sum=sum+i;
    }
    printf("Sum=%d",sum);
    return 0;

}
