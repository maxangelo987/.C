/* (69) Enter 2 numbers, determine its GCD.
Convert GCD to binary.
(if else function) <Comp1/MATH1/CompTech3/CpE321> */

#include<stdio.h>
main()
{
int base=1,bin=0,rem,n1,n2;
clrscr();
printf("\n Enter Two Numbers:");
scanf("%d%d",&n1,&n2);

for (;n1!=n2;)
	{
	if (n1>=n2-1)
		{
		n1=n1-n2;
		}
	else
		{
		n2=n2-n1;
		}
	}


	printf("\n GCD: %d\n",n1);


	for (;n1!=0;)
		{
		rem=n1%2;
		bin=bin+base*rem;
		base=base*10;
		n1=n1/2;
		}

		printf("Binary : %d",bin);

	getch();


}