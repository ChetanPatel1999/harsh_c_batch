// Write a program to find sum of individuals digits of any three digits
// number.
#include <stdio.h>
void main()
{
    int n, r, s, t, sum;
    printf("enter a 3 digit num :");
    scanf("%d", &n);
    r = n / 100;
    s = (n % 100) / 10;
    t = n % 10;
    sum = r + s + t;
    printf("sum of individual digit = %d", sum);
}