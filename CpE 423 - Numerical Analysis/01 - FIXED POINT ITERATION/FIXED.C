/* False position method to find the roots of the function f(x) when
f(x)=0 can be written as x=g(x) */
/* Standard Headers */
	#include<math.h>
	#include<stdio.h>
/* Declare the external function to evaluate g(x) */
	double func(double);
	main()
	{
/* Declaration of the variables */
	double s,x1;
	double fixedpoint();
        FILE *FP,*fp1;
	clrscr();
/* Initial guess for the zero */
	printf("Initial guess for the root: ");
        scanf("%lf",&x1);
	printf("\n Error    x        f(x)\n");

/* call the function to find the zero using fixed point iteration.
Pass the pointer to the external function that evaluate g(x) */
        s=fixedpoint(x1,&func);	
	printf(" The root is  %lf\n",s);
	getch();
	}

/* the function that computes the zero of f(x) using fixed point interation
it recieves the external function to evaluate g(x) as "function" and the
current approximation of the zero as "x1" */
        double fixedpoint(x1,function)
	double x1;
	double function(double);
	{
	int i,j,n,m;
        double e,f;
	double x2;
	e=1.0;
/* continue the iteration till the error defined as the percentage
change between two iterations is small */
	while(e>0.0001)
        {
/* use x=g(x) to get the next approximation to the zero */
	   x2=function(x1);
	   e=fabs((x1-x2)/x2);
	printf(" %lf %lf %lf\n",e,x2,function(x2));
	   x1=x2;
	}
	return x2;
        }

	double func(double x)
        {
	 double y;
         y=pow((x+10),(0.25));
	 return y;
        }
	   
