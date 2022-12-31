/*WAP to perform Matrix Addition*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[3][3], b[3][3], c[3][3], i, j;
    printf("Enter the elements in matrix a: \n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter the elements in matrix b: \n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
            scanf("%d", &b[i][j]);
    }
    printf("Resultant Matrix:");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
    }
    getch();
}