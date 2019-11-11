/* find the zero of f(x) using false-position method. Here one starts with the 
a pair of points bracketing the zero. The point of intersection of the 
line connecting this points with the x-axis is taken as the solution 
in the next iteration */

/* Standard Headers */
	#include<math.h>
	#include<stdio.h>
/* Declare the external function that evaluates f(x) */
	float func(float);
	main()
	{
/*  Variable declarations */
	float s,x0,x1;
	float false_position();
        FILE *FP,*fp1;
	clrscr();
/* the first guesses that bracket the zero. It is
assumed that f(x0) is negative and f(x1) is positive */

        printf("Enter the first guess: ");
	scanf("%f",&x0); 
	printf("Enter the second guess: ");
	scanf("%f",&x1);
 
        printf("\n Error    x        f(x)\n");

/* Call the function "false-position" to obtain the zero.
Pass the pointer to the function "func" that evaluate the function at any
point. This "func" must be declared global , that is outside the main function */
        s=false_position(x0,x1,&func);	
	printf(" The root is  %f\n",s);
	getch();
	}

/* function to find the zero using false-position rule.  */
        float false_position(x0,x1,function)
/* declaration of the arguments recieved */
	float x0,x1;
	float function(float);
	{	
	int i,j,n,m;
        float e,f;
	float x2;
	e=1.0;
/* continue till close to the zero */
        while(e>0.0001)
        {
/* Find the new solution by fiding the point of intersection of the 
line connecting (x0,f(x0)) and  (x1,f(x1)) with the x-axis. */
	   x2=x1+function(x1)*(x0-x1)/(function(x1)-function(x0));
	   if(function(x2)<0)
/* if f(x2) is negative replace x0 with x2 */
             {e=fabs((x0-x2)/x2);x0=x2;}
/* if f(x2) is positive replace x1 with x2 */
	   if(function(x2)>0)
             {e=fabs((x1-x2)/x2);x1=x2;}
       printf(" %f %f %f\n",e,x2,function(x2));
	}
/* return x2 as the zero when the error condition is satisfied */
	return x2;
        }

/* user supplied routine that evaluates f(x).
Note that the name "func" can be changed without 
changing "function" in the 
routine that evaluates false-position*/
	float func(float x)
        {
	 float y;
         y=3*x + sin(x) - exp(x);
	 return y;
	
        }
	   