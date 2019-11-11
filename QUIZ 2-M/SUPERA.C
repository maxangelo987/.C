#include<stdio.h>
main(){
long n[1000],i,size=0,hazel,s,temp,count,factor;
clrscr();
printf("INPUTS: ");
s=0;
for(size=0;;size++)
{
 scanf(" %ld", &n[size]);

	if(n[size]==0)
	{
	 break;
	}
}

for(i=0;i<size;i++)
{
	temp=n[i];
	hazel=0;
	factor=2;
	for(;temp!=1;)
	{
		if(temp%factor!=0)
			{
			 factor++;
			}
		else
			{
			 temp=temp/factor;
			 hazel++;
			}
	}
	temp=n[i];
	s=0;
		for(;temp!=0;)
			{
			 temp=temp/10;
			 s++;
			}


	if(hazel>s)
	{
	 temp=n[i];
	 hazel=0;
	 factor=2;
	 printf("\nOUTPUT: %ld = ",n[i] );
		for(;temp!=1;)
		{
		 if(temp%factor!=0)
			{
			factor++;
			}
		else
			{
			printf(" %ld  ", factor);
			temp=temp/factor;
			hazel++;
			}
		}

	 printf("\n\t\t\t: %ld factor/s > %ld digit/s ------- WASTEFUL NUMBER", hazel,s);

	}
    else
	{
	temp=n[i];
	hazel=0;
	factor=2;
	printf("\nOUTPUT: %ld = ", n[i]);
		for(;temp!=1;)
		{
		  if(temp%factor!=0)
		  {
		   factor++;
		  }
		  else
		  {
		   printf(" %ld  ", factor);
		   temp=temp/factor;
		   hazel++;
		  }

		}
		printf("\n\t\t\t: %ld factor/s <= %ld digit/s ------- NON WASTEFUL NUMBER",hazel,s);
	}
}
getch();
}