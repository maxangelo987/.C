#include<stdio.h>
main(){
long num, digits;

clrscr();

printf("Enter Number: ");
scanf("%ld",&num);

digits = 0;
for (;num!=0;){
	num=num/10;
	digits++;
	}
printf("%ld",digits);

getch();
}
