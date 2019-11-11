#include <stdio.h>
main()

{
/*JMBERSANO=MATATAG*/
long digit[100], a[100], factor[100], rem[100];
long i, size=0, t,j, x, n;
clrscr();

printf("enter a number:");

for (i=0;;i++)
	{
	scanf("%ld", &digit[i]);
	if (digit[i]==0)
		{
		break;
		}
	size++;
	}

for (i=0; i<size; i++)
  {
	n=digit[i];
	x=n;
	a[i]=0;
	for (;n!=0;)
		{
		n=n/10;
		a[i]++;
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

printf("1-NON-WASTEFUL NUMBER(S):\n");
	for (i=0; i<size; i++)
	   {
	if (factor[i]<=a[i])
		{
		printf("%ld	", digit[i]);
		}
	   }

printf("\n2-WASTEFUL NUMBER(S):\n");
	for (i=0; i<size; i++)
	   {
	if (factor[i]>a[i])
		{
		printf("%ld	", digit[i]);
		}
	   }

getch();
}