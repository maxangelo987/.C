#include<stdio.h>
main(){
long size=0,n[1000],i,c,d,temp,real;
clrscr();
printf("INPUTS: ");
for(i=0;;i++)
{
	scanf(" %ld ", &n[i]);
	size++;
	if(n[i]==0)
	{
		break;
	}
}
for(i=0;i<size;i++)
{
	temp=n[i];
	c=0;
	real=2;
	for(;temp!=1;)
	{
		if(temp%real!=0)
		{
			real++;
		}
		else
		{
			temp=temp/real;
			c++;
		}

	}
      temp=n[i];
      d=0;
	for(;temp!=0;)
	{
		temp=temp/10;
		d++;
	}
	if(c>d)
	{
		temp=n[i];
		c=0;
		real=2;
		printf(" %ld = ", n[i]);
			for(;temp!=1;)
			{
				if(temp%real!=0)
					{
						real++;
					}
				else
					{
						printf(" %ld  ", real);
						temp=temp/real;
						c++;
					}
			}
			printf(" == %ld factors > %ld digits ---- WASTEFUL NUMBER", c,d);
	}

}
getch();
}