// how to display value like integer, float , char , string
#include <stdio.h>
void main()
{
    printf("my age is %d\n", 67);
    printf("my mobile price is %d\n", 12000);
    printf("my height is %f\n", 5.7);   // 5.700000
    printf("my height is %.2f\n", 5.7); // 5.70
    printf("my height is %.1f\n", 5.7); // 5.7
    printf("character value = %c\n", 'P');
    printf("character value = %c\n", '@');
}
