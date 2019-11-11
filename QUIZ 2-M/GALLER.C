#include<stdio.h>
main()
{

long n,digit,x,temp,rem[1000],wasteful[100],nonwaste[100],factor,t,i,j,k,y=0,w=0;
long count,num[1000];

clrscr();

count=0;
printf("Input Number(s): ");
for(k=0;;k++){
	scanf("%ld",&num[k]);
	count++;
	if(num[k]==0){
	break;
	}
}
for(k=0;k<count-1;k++){

digit=0;
n=num[k];
x=n;
for(;n!=0;)
 {
	n=n/10;
	digit++;
 }

t=0;
i=2;
factor=0;
for(;x!=0;)
 {
	if(x%i==0)
	 {
	x=x/i;
	rem[t]=i;
	t++;
	factor++;

	if(x==1)
	 {
	break;
	 }
	 }
	else
	 {
	i++;
	 }
 }
if(factor>digit)
 {
  wasteful[w]=num[k];
  w++;
 }

if(factor<=digit)
 {
  nonwaste[y]=num[k];
  y++;
 }
}

printf("\nNon-Wasteful Number(s): ");
for(i=0;i<y;i++)
 {
   printf(" =%ld",nonwaste[i]);
 }
printf("\nWasteful Number(s): ");
for(i=0;i<w;i++)
 {
   printf(" =%ld",wasteful[i]);
 }

getch();
}

