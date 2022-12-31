 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a=4;
 int*p;
 p=&a;
 printf("address of a= %u \n",&a);
 printf("address of a= %u \n",p);
 printf("address of p= %u \n",&p);
 printf("value of p= %d \n",&p);
 printf("value of a= %d \n",a);
 printf("value of a= %d \n",(&a));
 //printf("value of a= %d",)
 getch();
 }