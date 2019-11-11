#include<stdio.h>
main()
{
long num[1000], factor[1000],digit[1000],rem[1000];
long i,real=0,temp,temp2,j,base;
clrscr();
printf("Enter Numbers:\n");

for (i=0;;i++)
	{
	scanf("%ld", &num[i]);
	if (num[i]==0){
		break;
		}
	real++;
	}

for (i=0;i<real; i++){
	temp=num[i];
	temp2=temp;
	digit[i]=0;

	for (;temp!=0;){
		temp=temp/10;
		digit[i]++;
		}
	j=0;
	base=2;
	factor[i]=0;
	for (;temp2!=0;){
if (temp2%base==0){

	temp2=temp2/base;
	rem[j]=base;
	factor[i]++;

if(temp2==1){
	break;
	}
}
	else{

	base++;
	}
}
}

printf("\n      [CHARL BRIAN RULONA]\n");
printf("\nOUTPUTS:\n");
printf("\n1-NON WASTEFUL NUMBER/S:\n");
for (i=0; i<real; i++)
	{
	if (factor[i]<=digit[i])
		{
		printf("       = %ld\n ",num[i]);
	}
}
printf("\n2-WASTEFUL NUMBER/S:\n");

for (i=0; i<real; i++)
	{
	if (factor[i]>digit[i])
		{
		printf("       = %ld\n ", num[i]);
		}
}

getch();
}
