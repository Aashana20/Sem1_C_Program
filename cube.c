//WAP to find cube of a no using function

#include<stdio.h>
double cube(double n)
{
    return(n*n*n);
}

int main()
{
    double num,numcube;
    printf("Enter the no you want to find the cube of: ");
    scanf("%.2f",&num);
    numcube=cube(num);
    printf("Cube of %d is=%.2f",num,numcube);
    return 0;

}
