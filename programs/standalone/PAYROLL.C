#include <stdio.h>

main ()
{

int days;
double minlate,minundertime,initialpay,totalpay,deduction,rate;
double latededuction,underdeduction;

clrscr ();

printf("Enter your rate per day: \n");
scanf ("%lf",&rate);
printf ("No. of days worked: \n");
scanf ("%d",&days);
printf ("No. of Minutes LATE: \n");
scanf ("%lf",&minlate);
printf ("No. of Minutes UNDERTIME: \n");
scanf ("%lf",&minundertime);

initialpay = days * rate;
latededuction = minlate * 0.60;
underdeduction = minundertime * 0.60;
totalpay = initialpay - (latededuction + underdeduction);

printf ("YOUR SALARY IS: %lf",totalpay);

getch ();
}