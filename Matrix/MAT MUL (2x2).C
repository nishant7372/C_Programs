/*WAP to perform matrix multiplication*/

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[2][2], b[2][2], c[2][2], i, j, k;
    printf("Enter the elements in matrix a: \n");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter the elements in matrix b: \n");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
            scanf("%d", &b[i][j]);
    }
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            c[i][j] = 0;
            for (k = 0; k <= 1; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    printf("Resultant Matrix: \n");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
    getch();
}