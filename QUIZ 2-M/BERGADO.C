#include <stdio.h>
main()
{
long a[100], digit[100], factor[100], rem[100];
long i, size=0, t,j, x, n;
clrscr();


printf("Karle Mathew G. Bergado\nBSCpE\n");
printf("Please Enter Numbers:");

for (i=0;;i++)
		{
		scanf("%ld", &a[i]);
		if (a[i]==0)
		{
		break;
		}
		size++;
		}

for (i=0; i<size; i++)
	{
	n=a[i];
	x=n;
	digit[i]=0;
	for (;n!=0;)
		{
		n=n/10;
		digit[i]++;
		}
	t=0;
	j=2;
	factor[i]=0;
	for (;x!=0;)
		{
		if (x%j==0)
			{
			x=x/j;
			rem[t]=j;
			t++;
			factor[i]++;
			if (x==1)
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

printf("1 --> Non-wasteful Numbers:\n\n");
for (i=0; i<size; i++)
		{
		if (factor[i]<=digit[i])
		{
		printf("	%ld	", a[i]);
		}
		}

printf("\n2 --> Wasteful Numbers:\n\n");
for (i=0; i<size; i++)
		{
		if (factor[i]>digit[i])
		{
		printf("	%ld	", a[i]);
		}
		}

getch();

printf("\n\n\nNI RUN SYA!!! HAHAHAHAHA!!!!");

getch();
}