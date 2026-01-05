// how to take input from user
#include <stdio.h>
void main()
{
    int age;
    float height;
    printf("enter your age : ");
    scanf("%d", &age);
    printf("enter your height = ");
    scanf("%f", &height);

    printf("my age is %d\n", age);
    printf("my height is %.1f", height);
}