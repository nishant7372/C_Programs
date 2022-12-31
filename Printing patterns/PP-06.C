/*Write a program to print the following pattern:
     *
    ***
   *****
  *******	       */

  #include<stdio.h>
  #include<conio.h>
  void main()
  {
  int i,j,k,c=1;
  clrscr();
  for(i=1;i<=4;i++)
  {
  for(j=3;j>=i;j--)
  {
  printf(" ");
  }
  for(k=1;k<=c;k++)
  {
  printf("*");
  }
  c=c+2;
  printf("\n");
  }
  getch();
  }
