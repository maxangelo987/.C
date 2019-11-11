#include<stdio.h>
#include<math.h>
#define I 2
double f(double x)
{
    return pow(x,7) + 3*pow(x,6) + 7*pow(x,5) + pow(x,4) + 5*pow(x,3) + 2*pow(x,2) + 5*x + 5;
}
main ()
{
    int i, itr, maxmitr;
    double x[4], li, di, mu, s, l, allerr;
    clrscr();
    printf("\nEnter the three initial guesses:\n");
    for (i=I-2; i<3; i++){
	printf("x%d: ",i);
	scanf("%lf", &x[i]);}
    printf("Enter the maximum iterations:\n");
    scanf("%d",&maxmitr);
    allerr=0.0001;
    for (itr=1; itr<=maxmitr; itr++)
    {
        li = (x[I] - x[I-1]) / (x[I-1] - x[I-2]);
        di = (x[I] - x[I-2]) / (x[I-1] - x[I-2]);
        mu = f(x[I-2])*li*li - f(x[I-1])*di*di + f(x[I])*(di+li);
        s = sqrt ((mu*mu - 4*f(x[I])*di*li*(f(x[I-2])*li - f(x[I-1])*di + f(x[I]))));
        if (mu < 0)
            l = (2*f(x[I])*di)/(-mu+s);
        else
            l = (2*f(x[I])*di)/(-mu-s);
        x[I+1] = x[I] + l*(x[I] - x[I-1]);
        printf("At iteration no. %3d, x = %7.5lf\n", itr, x[I+1]);
        if (fabs (x[I+1] - x[I]) < allerr)
        {
        printf("After %3d iterations, the required root is %6.4lf\n", itr, x[I+1]);
        getch();
	return 0;
        }
        for (i=I-2; i<3; i++)
            x[i] = x[i+1];
    }
printf("The required solution does not converge or iterations are insufficient\n");
getch();
return 1;
}