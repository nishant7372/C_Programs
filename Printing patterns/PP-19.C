/*Write a program to print the following pattern:
  #*#*#*#
  *#*#*#*
  #*#*#*#
  *#*#*#*
  #*#*#*#     */

  #include<stdio.h>
  #include<conio.h>
  void main()
  {
  int i,j;
  clrscr();
  for(i=1;i<=5;i++)
  {
  for(j=1;j<=7;j++)
  {
  if((i+j)%2==0)
  printf("#");
  else
  printf("*");
  }
  printf("\n");
  }
  getch();
  }