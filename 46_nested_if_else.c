//  Write a program to read the age of a candidate and determine whether he
// is eligible to cast his/her own vote in india or not.
#include <stdio.h>
void main()
{
    char country;
    printf("enter 'i' if your country india : ");
    scanf("%c", &country);
    if (country == 'i')
    {
        int age;
        printf("enter your age : ");
        scanf("%d", &age);
        if (age >= 18)
        {
            printf("you are eligible for voting");
        }
        else
        {
            printf("your not eligible for voting");
        }
    }
    else
    {
        printf("you are not indian ");
    }
}