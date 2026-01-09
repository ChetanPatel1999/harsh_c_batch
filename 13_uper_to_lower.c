//  Write a program to convert upper char to lower char.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a  upper character : ");
    scanf("%c", &ch); // B
    ch = ch + 32;
    printf("lower character = %c", ch);
}