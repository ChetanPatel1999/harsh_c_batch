//  Write a program to calculate area of circle.
#include <stdio.h>
void main()
{
    float area, radius;
    printf("enter radius : ");
    scanf("%f", &radius);
    area = 3.141 * radius * radius;
    printf("area of circle = %.2f", area);
}