#include <stdio.h>
#include <math.h>

int main (){

    char *n;
    char p[100];
    char d[100];
    char input[100];

    float sum, p_sum = 0, d_sum = 0;
    int i;
    clrscr();
    printf("enter the binary number: ");

    if (fgets(input, sizeof(input), stdin) == 0)
	{
	puts("no input!");
        exit(0);
	}
    n = strchr(input, '.');
    if (sscanf(input, "%[01]", p) == 1)
	{
	for (i = 0; p[i] != '\0'; ++i)
	    {
		  p_sum = 2*p_sum + (p[i] - '0');
	    }
	}
    if (sscanf(n, ".%[01]", d) == 1)
	{
	for (i = strlen(d); i > 0; --i)
	    {
            d_sum = (d_sum + (d[i-1] - '0'))/2;
	    }
	}
    sum = p_sum + d_sum;

    printf("decimal value is %f\n",sum);
    getch();
}