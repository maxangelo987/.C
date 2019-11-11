#include<stdio.h>
main()
{
 long z,digit,x,temp;
 long rem[100],w[100],not[100];
 long factor,t,i,j,k,m=0,r=0;
 long count,n[100];
 clrscr();

 count=0;
 printf("Input Number: ");

 for(k=0;;k++){
	scanf("%ld",&n[k]);
	count++;
	if(n[k]==0){
	break;
	}
}

 for(k=0;k<count-1;k++){

	digit=0;
	z=n[k];
	x=z;
		for(;z!=0;)
		{
			z=z/10;
			digit++;
		}

 t=0;
 i=2;
 factor=0;
 for(;x!=0;){
	if(x%i==0){
	     x=x/i;
	     rem[t]=i;
	     t++;
	     factor++;

	    if(x==1){
		     break;
		    }
		  }
		  else
			{
			i++;
			}
	   }
		if(factor>digit){
		w[r]=n[k];
		r++;
}

 if(factor<=digit){
	not[m]=n[k];
	m++;
	}
}

 printf("\n 1 NON-WASTEFUL: ");
 for(i=0;i<m;i++)
 {
   printf(" %ld ",not[i]);
 }

 printf("\n 2 WASTEFUL: ");
 for(i=0;i<r;i++)
 {
   printf(" %ld ",w[i]);
 }

getch();
}
