#include<stdio.h>
main(){

int num[100],size=0,bin=0,i,rem,base=1,temp,bin2[100],prime[100],p=0;
int count=0,j,rev=0,palPrime[100],pp=0;
clrscr();

printf("Inputs: ");
for(;;)
{
    scanf("%d",&num[size]);
    if(num[size]==0){break;}
    size++;
}

for(i=0;i<size;i++)
{
    for(j=1;j<=num[i];j++)
    {
	if(num[i]%j==0)
	{
	    count++;
	}
    }
    if(count==2)
    {
	prime[p]=num[i];
	p++;
    }
    count=0;
}

for(i=0;i<size;i++)
{
    temp=num[i];

    for(;temp!=0;)
    {
	rem=temp%2;
	bin=bin+rem*base;
	base=base*10;
	temp=temp/2;
    }
    printf("%d - %d\n",num[i],bin);
    bin=0;
    base=1;
}

for(i=0;i<p;i++)
{
    temp=prime[p];

    for(;temp!=0;)
    {
	rev=(rev*10)+(temp%10);
	temp=temp/10;
    }

    if(prime[i]==rev)
    {
	palPrime[pp]=rev;
	pp++;
    }
    rev=0;
}

getch();
}