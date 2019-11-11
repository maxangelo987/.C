#include<stdio.h>
main()
{

long n,digit,x,temp,rem[1000],w[100],non[100],factor,t,b,a,k,m=0,r=0;
long count,num[1000];

clrscr();

count=0;
printf("Input Number: ");
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
for(;n!=0;){
	n=n/10;
	digit++;
	}

t=0;
b=2;
factor=0;
for(;x!=0;){
	if(x%b==0){
	x=x/b;
	rem[t]=b;
	t++;
	factor++;

	if(x==1){
	break;
	}
}
else
{
b++;
}
}
if(factor>digit){
w[r]=num[k];
r++;
}

if(factor<=digit){
non[m]=num[k];
m++;
}
}

printf("\n1.Non-Wasteful: ");
for(b=0;b<m;b++)
{

}
for(b=0;b<m;b++)
{
   printf("\n		%ld",non[b]);
}
printf("\n2.Wasteful: ");
for(b=0;b<r;b++)
{


}
for(b=0;b<r;b++)
{
   printf("\n		%ld",w[b]);
}


getch();
}
