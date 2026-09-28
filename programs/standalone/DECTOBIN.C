#include<stdio.h>
main(){

long num,bin=0,rem,base=1;;

clrscr();

printf("Decimal: ");
scanf("%ld",&num);

for(;num!=0;)
{
   rem=num%2;
   bin=bin+(rem*base);
   base=base*10;
   num=num/2;
}
printf("Binary: %ld",bin);


getch();
}


