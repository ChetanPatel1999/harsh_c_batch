// wap to check given number is less than or greater then 500.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num :");
    scanf("%d", &num);
    num >= 500 ? printf("num is greter then 500") : printf("num is less then 500");
}