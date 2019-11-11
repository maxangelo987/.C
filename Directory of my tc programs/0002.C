/* (2) (x+y)=sum 
(printf, scanf functions) <Comp1/MATH1>*/

#include<stdio.h>
main(){


int x,y;
int sum;

clrscr();

printf("This program let's you: x+y=sum.\n");
printf("x= ");
scanf("%d",&x);
printf("y= ");
scanf("%d",&y);

sum=x+y;

printf("SUM= %d",sum);
getch();

}