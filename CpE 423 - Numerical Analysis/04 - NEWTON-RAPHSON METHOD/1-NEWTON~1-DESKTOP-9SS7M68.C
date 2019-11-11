/* Newton-Raphson method to find the zero of the function f(x) */
/* Standard Headers */
	#include<math.h>
	#include<stdio.h>
/* Declare the external function to evaluate f(x) and its first derivative*/
	void func(double,double*,double*);
	main()
	{
/* Declaration of the variables */
	double s,x1;
	double newton();
        FILE *FP,*fp1;
	clrscr();
	
	
/* Initial guess for the zero */
        printf("Initial guess for the zero: ");
	scanf("%lf",&x1);
	printf("\n Error    x+1 	    x  	      f(x)      f'(x)\n");

/* call the function to find the zero using newton-raphson iteration.
Pass the pointer to the external function that evaluate f(x) and its derivative */
        s=newton(x1,&func);
	printf(" The root is  %lf\n",s);
	getch();
	}

/* the function that computes the zero of f(x) using newton-raphson interation
it recieves the external function to evaluate f(x) as "function" and the
current approximation of the zero as "x1" */
        double newton(x1,function)
	double x1;
/* the "function" is called with two pointers through which the value of f(x)
and its derivatives are updated. Since this function does not "return" any
variables it is of type "void" */
	void function(double,double*,double*);
	{	
	int i,j,n,m;
        double e,*f,*deriv;
	double x2;
	e=1.0;
/* continue the iteration till the error defined as the percentage
change between two iterations is small */
        while(e>0)
        {
/* call the "function" to get the value of f(x) in "f" and its 
derivative in "deriv" */
	   function(x1,f,deriv);
/* the new approxiation is obtained from the Taylor expansion around 
the present one */
	   x2=x1-(*f)/(*deriv);
	   e=fabs((x1-x2)/x2);
	printf(" %lf %lf  %lf %lf %lf\n",e,x2,x1,*f,*deriv);
	   x1=x2;
	}
	return x2;
        }

/* the external function that recives "x" and evaluates f(x) and its
derivative. since "y" and "deriv" are pointers they are passed by reference.
This means that any change in their value made here will be reflected in the
function from which it is called and no explicit "return" statements are required  */
	void func(double x, double *y, double *deriv)
        {
	 /*
	 *y=pow(x,3)-(2*x)-5;
	 *deriv=(3*pow(x,2))-2;
	 */
	 /*
	 *y=exp(-x)-x;
	 *deriv=-exp(-x)-1;
	 */
	 /*
	 *y=exp(2*x)-x-6;
	 *deriv=2*exp(2*x)-1;
	 */
	 *y=(5*x)+log(x)-10000;
	 *deriv=5+(1/x);
        }
