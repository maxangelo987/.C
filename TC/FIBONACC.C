#include<stdio.h>
main(){

long num,f1=0,f2=1,i,f3;
clrscr();

printf("Input: ");
scanf("%ld",&num);
printf("Fibonacci: ");

for(i=0;i<num;i++)
{
    printf(" %ld",f1);
    f3=f1+f2;
    f1=f2;
    f2=f3;
}

getch();
}