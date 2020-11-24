//To find diameter,circumference and area of a circle using functions.

#include<stdio.h>
void diameter(float r)
{
    float d;
    d=2*r;
    printf("\nDiameter=%f",d);
}
void circumference(float r)
{
    float c;
    c=6.28*r;                          //3.14 X 2=6.28
    printf("\nCircumference=%f",c);
}
void area(float r)
{
    float a;
    a=6.28*r*r;
    printf("\nArea=%f",a);
}
int main()
{
    float rad;
    printf("Enter radius:");
    scanf("%f",&rad);
    diameter(rad);
    circumference(rad);
    area(rad);
    return 0;
}
