/*WAP to print the transpose of a matrix*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[2][2], b[2][2], i, j;
    printf("Enter the elements in matrix a: \n");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Transposed Matrix:");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            b[i][j] = a[j][i];
            printf("%d ", b[i][j]);
        }
    }
    getch();
}