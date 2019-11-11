#include<stdio.h>
main(){

long num,sum=0,rem;

clrscr();

printf("Enter Number: ");
scanf("%ld",&num);
printf("Output: ");

for(;num!=0;)
{
    rem=num%10;
    sum=sum+rem;
    num=num/10;
    printf("%ld+",rem);
}

printf("\b \nSum = %ld",sum);

getch();
}