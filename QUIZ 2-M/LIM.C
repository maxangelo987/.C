#include<stdio.h>
main(){

long num[100], d[100], f[100], r[100];
long i, lim=0, y, j, x, n;
clrscr();

printf("Enter digit: ");

	for(i=0;;i++)
	{
	scanf("%ld", &num[i]);
	if(num[i]==0)
	{
	break;
	}
	lim++;
	}
for(i=0;i<lim;i++)
{
n=num[i];
x=n;
d[i]=0;

for(;n!=0;)
{
n=n/10;
d[i]++;
}
y=0;
j=2;
f[i]=0;

for(;x!=0;)
{
if(x%j==0)
{
x=x/j;
r[y]=j;
y++;
f[i]++;

if(x==1)
{
break;
}
}
else
{
j++;
}
}
}
printf("1= Non-wasteful number: ");
	for(i=0;i<lim;i++)
{
	if(f[i]<=d[i])
{
printf(" %ld ", num[i]);
}
}

printf("\n2= Wasteful number: ");
	for(i=0;i<lim;i++)
{
	if(f[i]>d[i])
{
printf(" %ld ", num[i]);
}
}
getch();
}
