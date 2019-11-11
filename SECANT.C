/* find the zero of the function f(x) using the secant method */
/* Standard Headers */
	#include<math.h>
	#include<stdio.h>
/* External function that returns the value of f(x) */
	double func(double);
	main()
	{
/* Variable declarations */
	double s,x0,x1;
	double sec();
        FILE *FP,*fp1;
	clrscr();
/* the initial guesses. Unlike the bracketing methods these two 
values need not enclose the zero of f(x) */
        printf("Initial guesses 'a': ");
	scanf("%lf",&x0); 
	printf("Initial guesses 'b': ");
	scanf("%lf",&x1);
	
	printf("\n k Error    x        f(x)\n");
/* call the funcion "sec" that computes the zero using secant method. 
Pass the two initial guess values and the pointer to the external function 
that evaluates f(x) */
        s=sec(x0,x1,&func);	
	printf(" The root is  %lf\n",s);
	getch();
	}

/* the function that compute the zero of f(x) using iterations based on 
secant method. it recieves two guess values "x0" and "x1" and the pointer to 
the function that computes f(x) */
        double sec(x0,x1,function)
	double x0,x1;
	double function(double);
	{	
	int i,j,n,m,k;
        double e,f;
	double x2;
	e=1.0;
/* continue the iteration till the error defined as the percentage
change between two iterations is small */
       k=0;
	 while(e>0.0001)
        {
/* the new approxiation is obtained from the the present one as the 
point of intersection of the line joining (x0,f(x0)) and (x1,f(x1)) 
with the x-axis */
	   x2=(function(x1)*x0-function(x0)*x1)/(function(x1)-function(x0));
           e=fabs((x1-x2)/x2);
       printf(" %d %lf %lf %lf\n",k,e,x2,function(x2));
/* always replace x0 with x1 and x1 with the new point */
	   x0=x1;
	   x1=x2;
	   k++;
	}
	return x2;
        }

	double func(double x)
        {
	 double y;
         y=3*x+sin(x)-exp(x);
	 return y;
        }
	   
