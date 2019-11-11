/* Solution of a set of linear equations by elimination method */
/* Standard Headers */
	#include<math.h>
	#include<stdio.h>
	main()
	{
/* variable declarations */
	int i,j,n,k,m;
        float D[3][3],d[3],x,s[3];
        FILE *FP,*fp1;
	clrscr();
        n=2;
/* the equation is [D][s]=[d] */
/* read the matrix [D] and [d] */
        D[0][0]=3.0;
	D[0][1]=2.0;
	D[0][2]=1.1;
        D[1][0]=6.0;
	D[1][1]=2.0;
	D[1][2]=1.;
	D[2][0]=1.0;
	D[2][1]=4.0;
	D[2][2]=2.0;
	d[0]=7.65;
        d[1]=13.5;
        d[2]=16.0;
/* print the matrix elements and the RHS on the screen */
        for(j=0;j<=2;j++)
        {
        printf(" %f  %f  %f    %f\n",D[j][0],D[j][1],D[j][2],d[j]); 
        }

/* eliminate column by column */
        for(k=0;k<=n;k++)
        {
	  for(j=k+1;j<=n;j++)
	  {
/* to eliminate the kth column, subtract from all rows j >i k, 
the elements of the kth row, divided by its diagonal element and 
multuplied by the kth element of the jth row. */
	    x=D[j][k]/D[k][k];
	    for(i=k;i<=n;i++)
             {  
	       D[j][i]=D[j][i]-x*D[k][i];
             }
/* do the same operation on the RHS too */
	     d[j]=d[j]-d[k]*x;
	  }
/* print the matrix at the end of each column elimination */
	  printf("\n");
          for(m=0;m<=2;m++)
          {
          printf(" %f  %f   %f    %f\n",D[m][0],D[m][1],D[m][2],d[m]); 
          }
        }
/* obtain the solution by back substitution */
	printf("The solution\n");
	for(i=n;i>=0;i--)
        { x=0.0; 
	  for(j=i+1;j<=n;j++)
          { x=x+D[i][j]*s[j];}
 	  s[i]=(d[i]-x)/D[i][i];
          printf(" %d  %f \n", i,s[i]); 
	}
	  getch();
        }