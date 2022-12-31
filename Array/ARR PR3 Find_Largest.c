/*WAP to find the largest element in the array*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[4] = {20, 30, 40, 10}, lar, i;
    lar = a[0];
    for (i = 0; i <= 3; i++)
    {
        if (a[i] > lar)
            lar = a[i];
    }
    printf("Largest element is %d", lar);
    getch();
}