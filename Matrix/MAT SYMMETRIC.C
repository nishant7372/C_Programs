/*WAP to check whether the entered matrix is symmetric or not*/

#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],i,j,c=0,d=0;
clrscr();
printf("Enter the elements in matrix a:\n");

for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
scanf("%d",&a[i][j]);
}

for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
b[i][j]=a[j][i];
}

for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
if(b[i][j]==a[i][j])
c++;
}
}

if(c==9)
printf("Symmetric Matrix");
else
printf("Not Symmetric");

getch();
}
