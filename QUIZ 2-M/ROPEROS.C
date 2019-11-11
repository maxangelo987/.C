#include<stdio.h>
main()
{

long noob,x,temp,s,factor,rat=0,dig,i,dot=0,j,k;
long count,num[1000],rem[1000],waste[1000],nun[1000];

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

dig=0;
noob=num[k];
x=noob;
for(;noob!=0;){
	noob=noob/10;
	dig++;
	}

s=0;
i=2;
factor=0;
for(;x!=0;){
	if(x%i==0){
	x=x/i;
	rem[s]=i;
	s++;
	factor++;

	if(x==1){
	break;
	}
}
else
{
i++;
}
}
if(factor>dig){
waste[rat]=num[k];
rat++;
}

if(factor<=dig){
nun[dot]=num[k];
dot++;
}
}

printf("1.Non-Wasteful---: ");
for(i=0;i<dot;i++)
{

}
for(i=0;i<dot;i++)
{
printf("%ld\t",nun[i]);
}
	printf("\n\n2.Wasteful---: ");

   {
}
      for(i=0;i<rat;i++)
{
	printf("%ld\t",waste[i]);
}

getch();
}
