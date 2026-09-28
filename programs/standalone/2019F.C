#include<stdio.h>
main(){

long t, factors,x,rem[1000],i;
clrscr();

scanf("%ld",&x);
factors=0;
i=2;
t=0;
for (;x!=0;) {
   if (x%i==0){
       x=x/i;
       rem[t]=i;
       t++;
       factors++;
       if (x==1){
              break;
              }
           }
       else{
           i++;
           }
    }

for (i=0;i<factors;i++){
	printf(" %ld ",rem[i]);
}
getch();
}