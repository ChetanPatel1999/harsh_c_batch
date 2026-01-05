// wap to take two float value from user and display sum.
#include <stdio.h>
void main()
{
    float num1, num2, add;
    printf("this is addition app....\n");
    printf("enter first num = ");
    scanf("%f", &num1);
    printf("enter second num = ");
    scanf("%f", &num2);
    add = num1 + num2;
    printf("addition = %.1f", add);
}