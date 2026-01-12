//  Write a program to print any three digit number in reverse order.
#include <stdio.h>
void main()
{
    int n, r, s, t, rev;
    printf("enter a 3 digit num :");
    scanf("%d", &n);
    r = n / 100;
    s = (n % 100) / 10;
    t = n % 10;
    rev = r + s * 10 + t * 100;
    printf("revesre num = %d", rev);
}