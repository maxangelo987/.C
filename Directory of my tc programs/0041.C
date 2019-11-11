/* (41) Input 3 numbers. Determine the SUM, QUOTIENT,
LARGEST and SMALLEST.
(if functions) <Comp1/MATH1> */

#include<stdio.h>

main(){

int a,b,c,sum,rem;
long prod;
int ave,large,smallest;

clrscr();

printf("Input 3 Numbers") ;
printf("\n\n1st = ");
scanf("%d",&a) ;
printf("\n\n2nd = ") ;
scanf("%d",&b) ;
printf("\n\n3rd = ") ;
scanf("%d",&c) ;

sum=a+b+c;
ave=sum/3;
rem=sum%3;

large=a;

if(b>a)
large=b;
if(c>b)
large=c;

smallest=a;

if(b<a)
smallest=b;
if(c<b)
smallest=c;

printf("\n\n\nSUM= %d", sum);
printf("\n\n\nQUOTIENT= %d", ave);
printf("\tr = %d",rem) ;
printf("\n\n\nLARGEST = %d",large);
printf("\n\n\nSMALLEST = %d",smallest);


getch();
}