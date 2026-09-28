/* Solution of a set of linear equations by pivoted-elimination  method */
/* Standard Headers */

	#include<math.h>
	#include<stdio.h>
	main()
	{
/* variable declarations */
	int i,j,n,k,m,jmax,nm;
        float D[3][3],d[3],x,s[3],st;
/* declaration of sub-functions */
	int max();
        FILE *FP,*fp;
	clrscr();
        n=2;
/* the equation is [D][s]=[d] */
/* read the matrix [D] and [d] */
        D[0][0]=3.0;
	D[0][1]=-0.1;
	D[0][2]=-0.2;
        D[1][0]=0.1;
	D[1][1]=7;
	D[1][2]=-0.3;
	D[2][0]=0.3;
	D[2][1]=-0.2;
	D[2][2]=10;
	d[0]=7.85;
        d[1]=-19.3;
        d[2]=71.4;
        for(j=0;j<=2;j++)
        {
        printf(" %f  %f  %f    %f\n",D[j][0],D[j][1],D[j][2],d[j]); 
        }
/* eliminate column by column */
        for(k=0;k<=n-1;k++)
        { nm=-1;
/* find the largest element in the column  */
	  for(i=k;i<=n;i++)
	   { nm=nm+1; s[nm]=D[i][k];} 
/* call the function "max" to get the maximum value in [s] */
           jmax=max(nm,s);
/* if the largest element is not in the k'th row , exchange the rows  on the 
LHS and RHS* /
	   if(jmax>0)
           {
	    for(i=0;i<=n;i++)
	   {  s[i]=D[k][i];
	      D[k][i]=D[k+jmax][i]; D[k+jmax][i]=s[i];
           }
	   st=d[k]; d[k]=d[k+jmax];d[k+jmax]=st;
	     
           }
/* eliminate the column using this pivoted row */
	  for(j=k+1;j<=n;j++)
	  {
	    x=D[j][k]/D[k][k];
	    for(i=k;i<=n;i++)
             {  
	       D[j][i]=D[j][i]-x*D[k][i];
             }
	     d[j]=d[j]-d[k]*x;
	  }
/* print the matrix as the elimination progress */
	  printf("\n");
          for(m=0;m<=2;m++)
          {
          printf(" %f  %f   %f    %f\n",D[m][0],D[m][1],D[m][2],d[m]); 
          }
        }
/* find the solution by back substitution */
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

/* this sub-function called by "main" to calculate the maximum value in an array.
The function receives a one dimensional array and returns the index corresponding 
to the maximum value in the array. Note that since this function "returns" a variable 
it has to have the same "type" as the variable   */
         int max(int nm,float s[])
	{
	  int j,jmax;
	  float smax;
	  jmax=0;
/* start with the assuption that the first element is the largest */
	  smax=s[0];
/* go through the array sequentially */
          for(j=1;j<=nm;j++)
        {
/* if any of the elements are larger then set "jmax" to that element */
	  if(s[j]>smax) 
          { jmax=j; smax=s[j];}
/*return the index corresponding to the largest value to the main program.*/
          return jmax;
	}
	}