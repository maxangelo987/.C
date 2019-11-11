#include<stdio.h>
main(){


double inp;
long num;
long sum;
clrscr();

printf("Input int: ");
scanf("%ld",&num);
printf("Input float: ");
scanf("%lf",&inp);

sum=num+inp;
printf("Output: %ld",sum);


getch();
}