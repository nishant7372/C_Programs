/*WAP to search an element in the sorted array using
 binary search method*/

 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a[7]={10,20,30,40,50,60,70};
 int target,low=0,high=6,mid;
 clrscr();
 printf("Enter the element to be searched");
 scanf("%d",&target);
 while(low<=high)
 {
 mid=(low+high)/2;
 if(target<a[mid])
 high=mid-1;
 else if(target>a[mid])
 low=mid+1;
 else
 {
 printf("Target element is found: %d",mid);
 break;
 }}
 getch();
 }