

#include <stdio.h>
void main()
{
    int age, order;
    printf("enter your age : ");
    scanf("%d", &age); // 17
    if (age >= 18)
    {
        printf("welcome to my club \n");
        printf("club menu :\n");
        printf("1. sandwitch :150 \n");
        printf("2. pizza  : 100\n");
        printf("3. burger  : 80\n");
        printf("choose any item : ");
        scanf("%d", &order);
        if (order == 1)
        {
            printf("your sandwitch is orderd please pay 150 rs");
        }
        else if (order == 2)
        {
            printf("your pizaa is orderd please pay 100 rs");
        }
        else if (order == 3)
        {
            printf("your burger is orderd please  pay 80 rs");
        }
        else
        {
            printf("wrong choise please enter 1 to 3");
        }
    }
    else
    {
        printf("your not adult please try after %d year", 18 - age);
    }
}