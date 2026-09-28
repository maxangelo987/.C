#include<stdio.h>
main()
{
long real,i,j,range,pdrange,a;
long num[1000],count[1000],pdnum[1000];
clrscr();

scanf("%ld",&range);

real = 2;
for (i=0;i<range;i++){
	num[i]=real;
	real++;
	count[i]=0;
	for (j=2;j<num[i];j++){
        	if (num[i]%j==0){
           		count[i]++;
           		}
        	}
	}

pdrange=0;
a=0;
for (i=0;i<range;i++){
    if (count[i]==0){
       pdnum[a]=num[i];
       a++;
       pdrange++;
       }
    }

for (i=0;i<pdrange;i++){
	printf(" %ld ",pdnum[i]);
	}

getch();
}