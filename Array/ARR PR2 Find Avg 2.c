/*Write a program to find average marks of a class of 5 students in a test*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int m[5], i, sum = 0, avg;
    printf("Enter the marks of students");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &m[i]);
        sum = sum + m[i];
    }
    avg = sum / 5;
    printf("Average is %d", avg);
    getch();
}