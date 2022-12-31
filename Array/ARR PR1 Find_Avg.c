/*Write a program to find average marks of a class of 30 students in a test*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int m[30];
    int i, sum = 0, avg;
    printf("Enter the marks of students");
    for (i = 0; i <= 29; i++)
    {
        scanf("%d", &m[i]);
    }
    for (i = 0; i <= 29; i++)
    {
        sum = sum + m[i];
    }
    avg = sum / 30;
    printf("Average is %d", avg);
    getch();
}