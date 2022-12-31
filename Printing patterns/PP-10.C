/*Write a program to print the following pattern:
   0 0 0 0 0
   1 1 1 1 1
   0 0 0 0 0
   1 1 1 1 1
   0 0 0 0 0 */

  #include<stdio.h>
  #include<conio.h>
  void main()
  {
  int i,j;
  clrscr();
  for(i=1;i<=5;i++)
  {
  for(j=1;j<=5;j++)
  {
  if((i==2)||(i==4))
  printf("1 ");
  else
  printf("0 ");
  }
  printf("\n");
  }
  getch();
  }
