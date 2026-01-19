#include <stdio.h>
void main()
{
    int res;
    // res = 12 > 7 && 5 == 5 && 56 < 88;
    // res = 12 > 7 || 5 == 45 || 56 < 88;
    // res = !(12 > 8);
    res = !(12 > 8 && 4 == 4);
    printf("res = %d", res);
}