/* WAP a program to find the second largest element in an array */

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[5] = {30, 40, 10, 50, 20};
    int i, lar1, lar2;
    lar1 = a[1];
    for (i = 0; i <= 4; i++)
    {
        if (a[i] > lar1)
            lar1 = a[i];
    }
    lar2 = a[0];
    for (i = 0; i <= 4; i++)
    {
        if ((a[i] > lar2) && (a[i] < lar1))
            lar2 = a[i];
    }
    printf("Second largest element is %d", lar2);
    getch();
}