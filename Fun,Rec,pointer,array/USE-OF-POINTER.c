 /*Program for the Use of pointer*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int p;
 clrscr();
 int i=3,*x;
 float j=3.5,*y;
 char k='a',*z;
 x=&i;
 y=&j;
 z=&k;
 printf("original address = %u \n",x);
 printf("original address = %u \n",y);
 printf("original address = %u \n",z);
 x++;
 y++;
 z++;
 printf("new address = %u \n",x++);
 printf("new address = %u \n",y++);
 printf("new address = %u \n",z++);
 getch();
 }