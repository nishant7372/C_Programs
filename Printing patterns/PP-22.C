 /*Write a program the following pattern:
	1
	2 3
	4 5 6
	7 8 9 10        */


 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int i,j;
 clrscr();
 for(i=1;i<=4;i++)
 {
 for(j=0;j<=i-1;j++)
 {
 if(i<=2)
 printf("%d ",i+j);
 else if(i==3)
 printf("%d ",i+j+1);
 else
 printf("%d ",i+j+3);
 }
 printf("\n");
 }
 getch();
 }