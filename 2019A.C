#include<stdio.h>
main()
{
long real,i,range;
long num[1000];
clrscr();

scanf("%ld",&range);
real = 2;
for (i=0;i<range;i++){
	num[i]=real;
	real++;
	}

for (i=0;i<range;i++){
	printf(" %ld ",num[i]);
	}

getch();
}