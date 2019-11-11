#include<stdio.h>
main(){

long range,num[1000],real;
long i;
long pdrange,pdnum[1000],count[1000];
long a,j;
long pdtemp[1000];
long bin[1000],base,rem[100];
long key[1000],temp[1000],rev[1000];
clrscr();

printf("Enter Range: ");
scanf("%ld",&range);
real = 2;

for (i=0;i<range;i++){
	num[i]=real;
	real++;
}

/* PRIME */
pdrange=0;
a=0;
for (i=0;i<range;i++){
	count[i]=0;
	for (j=2;j<num[i];j++){
		if (num[i]%j==0){
			count[i]++;
		}
	}

	if (count[i]==0){
		pdnum[a]=num[i];
		a++;
		pdrange++;
	}
}

/* BINARY */
for (i=0;i<pdrange;i++){
/*	printf("PRIME: %ld \n",pdnum[i]);     */
	pdtemp[i] = pdnum[i];
	bin[i]=0;
	base = 1;

	for (;pdtemp[i]>0;){
		rem[i]=pdtemp[i]%2;
		bin[i]=bin[i]+rem[i]*base;
		base = base*10;
		pdtemp[i]=pdtemp[i]/2;
	}
}

/*REVERSE*/
for (i=0;i<pdrange;i++){
/*	printf("BINARY: %ld \n",bin[i]);       */
	key[i]=bin[i];
	temp[i]=0;
	rev[i]=0;

	for (;key[i]!=0;){
		temp[i]=key[i]%10;
		key[i]=key[i]/10;
		rev[i]=temp[i]+(rev[i]*10);
	}
}

for (i=2;i<pdrange;i++){
/*	printf("REVERSE: %ld \n", rev[i]);      */

	if (rev[i]==bin[i]){
		printf("PALINDROMIC PRIME: %ld = %ld \n",pdnum[i],rev[i]);
	}
}

getch();
}