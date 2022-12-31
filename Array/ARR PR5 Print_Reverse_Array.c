/*Write a program to reverse an array*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5], i;
    printf("Enter the elements in an array: \n");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Reverse of Arrray is: \n");
    for (i = 4; i >= 0; i--)
    {
        printf("%d,", a[i]);
    }
    getch();
}