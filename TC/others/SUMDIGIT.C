#include<stdio.h>
main(){

long num,rem,sum=0;

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