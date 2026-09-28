#include<stdio.h>
main(){

long num,rem,sum=0,f1=0,f2=1,f3,i;
clrscr();

scanf("%ld",&num);

for(;num>=10;)
{
    for(;num!=0;)
    {
	rem=num%10;
	printf("%d +",rem);
	sum=sum+rem;
	num=num/10;
    }
    num=sum;
    printf("\b= %d\n",sum);
    sum=0;
}

printf("\n\nFibonacci: ");

for(i=0;i<num;i++)
{
    printf("%d",f1);
    f3=f1+f2;
    f1=f2;
    f2=f3;
}

getch();
}