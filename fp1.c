#include <stdio.h>
#include <math.h>
 
#define absval(x) ((x) >= 0.0 ? (x) : (-(x)))

 double funct(double);
 double fixedpoint(double (*fnct)(double), double startingval,
 double xtol, int maxits, int *itcount, int *outcome);

 double funct(double x)
  {
  double value;
  value = exp(1.0/x);
 return(value);
 }
 main()
 {
 /* This program implements fixed-point iteration
 for solving an equation x=funct(x). The function
 funct() is defined separately. */


 const double tol=5e-10;
 double root;
 int its, success;
 root = fixedpoint(&funct, 1.0, tol, 50, &its, &success);
 if ( success == 2 ) {
 printf("The root is %.12f\n", root);
 printf("%u iterations were used to find"
 " the root\n", its);
 }
 else if (success == 0) {
 printf("The maximum number of iterations has been reached\n");
 }
 }

 double fixedpoint(double (*fnct)(double), double startingval,
 double xtol, int maxits, int *itcount, int *outcome)
 {
 double x, oldx, assumedzero=1e-20;
 *outcome = 0;
 x = startingval;
 for (*itcount = 0; *itcount < maxits; (*itcount)++) {
 oldx = x;
 x = fnct(x);
 /* The next line is included so as to monitor
 the progress of the calculation. This line
 should be deleted from a program of
 practical utility. */
 printf("Iteration number %2u: ", *itcount);
 printf("x=% .12f\n", x);
 if ( absval(x-oldx)/(absval(oldx)+assumedzero) <= xtol ) {
 *outcome = 2; /* within tolerance */
 break;
 }
 }
 return x; /* returning the value of the root */
 }