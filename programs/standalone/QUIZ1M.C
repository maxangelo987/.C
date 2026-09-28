/*M.A. Perin, MSCpE-SE 1 HAHA*/
/*Note, nahurot na ang takna hapit. Fighting lang, ayaw undang!*/
/*aw abi kog na gg, taas na kaayo diay*/
#include<stdio.h>
main(){

long range, pdrange, real,num[1000],pdnum[1000],count[1000];
long i,j,a;
long bin[1000],rem[1000],base,temp[1000];
long key[1000],temp1[1000];
long rev[1000];
clrscr();

printf("Enter Range: ");
scanf("%ld",&range);
real = 2;

for (i=0;i<range;i++){
	num[i]=real;
	real++;
}


/*PRIME NUMBERS*/

for (i=0;i<range;i++){
	count[i]=0;

	for (j=2;j<num[i];j++){
		if (num[i]%j==0){
		count[i]++;
		}
	}
}

pdrange = 0;
a=0;

for (i=0;i<range;i++){
	if (count[i]==0){
		pdnum[a]=num[i];
		temp[a]=num[i];
		a++;
		pdrange++;
	}
}


/*BINARY*/

for (i=0;i<pdrange;i++){
	bin[i] = 0;
	base = 1;

	for (;pdnum[i]>0;){
		rem[i]=pdnum[i]%2;
		bin[i]=bin[i]+rem[i]*base;
		base=base*10;
		pdnum[i]=pdnum[i]/2;
	}

}


/*REVERSE for PALINDROME*/

for (i=0;i<pdrange;i++){

	key[i]=bin[i];
	temp1[i]=0;
	rev[i]=0;

	for (;key[i]!=0;){
		temp1[i]=key[i]%10;
		key[i]=key[i]/10;
		rev[i]=temp1[i]+(rev[i]*10);
	}
}

for (i=2;i<pdrange;i++){ /*Mag start na ta sa two arun dili ma print ang kinaunhan*/

	if (rev[i]==bin[i]){
		printf("Palindromic Prime: %ld = %ld\n",temp[i],rev[i]);
	}
}

/*The end of the program. HAHA. Sorry kaayo kay karun pako kabalik ug code c, mag cheat unta
ko sa c++ apan ga lantaw rapud ko sa bondpaper nga gi example nato
so mao ni akong code guys, hapit na mahurot ag 1 hour, tungod kay
lisod i debug ug code sa c
tas galibog pajud kas imong kopya kay magkabaylobaylo. then dapat i quit napud
nimo arun mo restart jud ang tc kay bawu aning dosbox nga virtual raman gud
haha. oki akong iparun utro ha?
Salamat. Maayo untag naa moy nakat unan gamay! :)*/
getch();
}