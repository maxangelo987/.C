#include<stdio.h>
main()
{

long n,dig,x,p,i,a,fact,temp,w[100],rem[1000],non[100],b=0,r=0;
long count,nom[1000];

clrscr();

count=0;
printf("Input Number: ");
for(a=0;;a++){
	scanf("%ld",&nom[a]);
	count++;
	if(nom[a]==0){
	break;
	}
}
for(a=0;a<count-1;a++){

dig=0;
n=nom[a];
x=n;
for(;n!=0;){
	n=n/10;
	dig++;
	}

  p=0;
  i=2;
  fact=0;
  for(;x!=0;){
	if(x%i==0){
	 x=x/i;
	  rem[p]=i;
	   p++;
	    fact++;

	if(x==1){
	break;
	}
}
  else
   {
    i++;
   }
 }
   if(fact>dig){
   w[r]=nom[a];
r++;
}

   if(fact<=dig){
    non[b]=nom[a];
    b++;
   }
  }

     printf("\n1.Non-Wasteful= ");

for(i=0;i<b;i++){
   printf(" %ld",non[i]);
}
printf("\n2.Wasteful= ");


for(i=0;i<r;i++){
   printf(" %ld",w[i]);
}

getch();
}
