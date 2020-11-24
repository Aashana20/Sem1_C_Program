//WAP to print all odd no between 1 to 100

#include<stdio.h>
int main()
{
    unsigned int i;
    for(i=2;i<100;i++)                                                // use for construct
    {
        if(i%2!=0)
            printf("\n%u",i);
    }
    return 0;

}
