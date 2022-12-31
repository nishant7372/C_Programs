/*WAP to print the elements of a two dimensional array*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[2][2], i, j;
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
            printf("a[%d][%d]=%d \n", i, j, a[i][j]);
    }
    getch();
}