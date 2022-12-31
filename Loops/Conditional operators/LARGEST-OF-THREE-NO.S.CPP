/*Write a pogram to find largest of three numbers
 using conditional operators*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a,b,c,lar;
 clrscr();
 printf("Enter the three numbers");
 scanf("%d%d%d",&a,&b,&c);
 lar=(a>b)?(a>c)?a:c:(b>c)?b:c;
 printf("the largest no. is %d",lar);
 getch();
 }
