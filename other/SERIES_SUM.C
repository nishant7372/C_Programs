/*Write a program to find the sum of the series:
 f(x)=x^1-x^3+x^5-x^7......upto nth term, where the
 value of n is input through the keyboard*/

 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 void main()
 {
 int s1=0,s2=0,sum,x,n,i=1,j=3;
 clrscr();
 printf("Enter the value of x and n: \n");
 scanf("%d%d",&x,&n);
 while(i<=n+2)
 {
 s1=s1+pow(x,i);
 i=i+4;
 }
 while(j<=n+2)
 {
 s2=s2+pow(x,j);
 j=j+4;
 }
 sum=s1-s2;
 printf("%d,%d,%d",s1,s2,sum);
 getch();
 }