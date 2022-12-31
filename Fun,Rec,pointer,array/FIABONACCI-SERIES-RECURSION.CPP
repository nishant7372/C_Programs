/* WAP to print n terms of fibonacci series using recursive
   function, where n is input through the keyboard */

 #include<stdio.h>
 #include<conio.h>
 int fib(int x);
 void main()
 {
 int n,i,c;
 clrscr();
 printf("Enter the value if n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 c=fib(i);
 printf("%d",c);
 }
 getch();
 }

 int fib(int x)
 {
 if((x==0)||(x==1))
 return(1);
 else
 return(fib(x-1)+fib(x-2));
 }