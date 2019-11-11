/* (75) Printing the value in x and y.
(void, struct functions) <Comp1/MATH1> */


#include<stdio.h>
struct sample
	{
	int x;
	float y,w;
	};

void print (struct sample);

main()
	{
	struct sample a;
	clrscr();

	a.x=10;
	a.y=23.5;
	print (a);
	getch();
	}

void print (struct sample b)
	{
	printf("%d %f\n",b.x,b.y);
	}


