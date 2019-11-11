#include<stdio.h>
main(){

long num,rev=0,rem;
clrscr();

printf("Enter Number: ");
scanf("%ld",&num);

for(;num!=0;)
{
    rem=num%10;
    rev=(rev*10)+rem;
    num=num/10;
}

printf("Reverse: %ld",rev);

getch();
}
