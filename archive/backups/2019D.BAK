#include<stdio.h>
main()
{
long real,i,range;
long num[1000],key[1000],bin[1000],temp[1000],rev[1000];
clrscr();

range = 0;
for (i=0;;i++){
	scanf("%ld",&real);

	if (real == 0){
		break;
		}
	else{
		num[i]=real;
		range++;
		}
	}

for (i=0;i<range;i++){
    key[i]=num[i];
    temp[i]=0;

    for (;key[i]!=0;){
	temp[i]=key[i]%10;
	key[i]=key[i]/10;
        rev[i]=temp[i]+(rev[i]*10);
        }
    }

for (i=0;i<range;i++){
	printf(" %ld ",rev[i]);
	}

getch();
}