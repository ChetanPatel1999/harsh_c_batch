#include <stdio.h>
void main()
{
    int a = 12, b = 5;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    // a += b;
    // a -= b;
    // a += 10;
    // a *= b;
    // b *= b;
    b *= a;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}