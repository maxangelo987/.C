/*
---------------------------------------------------------------------------
Algo2-1.c   C program for implementing Algorithm 2.1
Algorithm translated to  C  by: Dr. Norman Fahrer
IBM and Macintosh verification by: Daniel Mathews

NUMERICAL METHODS: C Programs, (c) John H. Mathews 1995
To accompany the text:
NUMERICAL METHODS for Mathematics, Science and Engineering, 2nd Ed, 1992
Prentice Hall, Englewood Cliffs, New Jersey, 07632, U.S.A.
Prentice Hall, Inc.; USA, Canada, Mexico ISBN 0-13-624990-6
Prentice Hall, International Editions:   ISBN 0-13-625047-5
This free software is compliments of the author.
E-mail address:       in%"mathews@fullerton.edu"

Algorithm 2.1  (Fixed Point Iteration).
Section   2.1,  Iteration for Solving  x = g(x), Page 51
---------------------------------------------------------------------------
*/
/*
---------------------------------------------------------------------------

Algorithm 2.1 (Fixed-Point Iteration). To find a solution
to the equation  x = g(x)  by starting with  p_0  and iterating
p_n+1 = g(p_n).

---------------------------------------------------------------------------
*/

/* User has to supply a function named : gfunction
   An example is included in this program */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


/*  define prototype for USER-SUPPLIED function g(x)  */

    double gfunction(double x);


/*  EXAMPLE for "gfunction"   */

    double gfunction(double x)

    {
        return ( 1 + x - pow(x,2)/4 );
    }

/* -------------------------------------------------------- */

/*  Main program for algorithm 2.1  */

    void main()

{
        double MaxPnew = 1E+200; /* highest absolute value for Pnew */
        double Tol = 0.000001;   /* Termination criterion  */
        int    Max = 200;        /* Maximum number of iterations */
        double Small = 0.000001; /* Initialize the variable */
        int K = 0;               /* Initialize the counter */
        double RelErr = 1;       /* Initialize the variable */
        double Pterm;            /* INPUT : The initial approximation */
        double Pnew;             /* Result of a iteration */
        double Pold,Dg,Delta,Dx,Slope;
        int iwarn = 0;           /* Initialize warning flag */

        printf("Please enter START-value for iteration :\n");
        scanf("%lf", &Pterm);
        printf("START-value for iteration : Pterm = %lf\n", Pterm);
        printf("");

        Pnew = gfunction(Pterm);         /* First iteration */

    while( (RelErr >= Tol) && (K <= Max) ) {

         K++;                            /* Increment the counter       */
         Pold   = Pterm;                 /* Previous iterate p_(k+1)    */
         Pterm  = Pnew;                  /* Current iterate p_k         */
         Pnew   = gfunction(Pterm);      /* Compute new iterate p_(k+1) */

       if( fabs(Pnew) > MaxPnew){        /* Check for  +/-INF  before
                                            the end of the while-loop */
            iwarn = 1;                   /* set flag for warning */
            break;                       /* break out of while-loop */
       }

         Dg     = Pnew - Pterm;          /* Difference in gfunction     */
         Delta  = fabs(Dg);              /* Absolute Error              */
         RelErr = 2 * Delta / ( fabs(Pnew) + Small ); /* Relative Error */

    }    /* End of the 'while'-loop */

        Dx = Pterm - Pold;               /*   Difference in x           */
        Slope = Dg / Dx;                 /*   g'(p_k)                   */

    printf("-----------------------------------------------\n");

    if(iwarn){   /* Tell that Pnew has grown dramatically and stop */
         printf("Number of iterations :  %d\n",K);
         printf("Iteration walks out of precision range !!\n");
         printf("Value of x = Pnew = %G\n", Pnew);
         printf("The sequence appears to be diverging !\n");
         exit(0);
    }

    printf("Number of iterations :  %d\n",K);
    printf("The computed fixed point of g(x) is %lf\n",Pnew);
    printf("Consecutive iterations are within %lf\n", Delta);

   if( fabs(Slope) > 1 ) printf("The sequence appears to be diverging.\n");
   else                  printf("The sequence appears to be converging.\n");

}   /* End Main Program */

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

(c) John H. Mathews 2004