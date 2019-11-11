#include<stdio.h>

main(){

long n[1000], size, i, factor, real, temp, digit;

clrscr();

    printf("\n  INPUTS: ");


	for(size=0;;size++){

	scanf(" %ld", &n[size]);

	  if(n[size]==0){

	   break;

	  }
	}

	printf("\n  OUTPUTS: \n");

	for(i=0;i<size;i++){

	temp=n[i];
	factor=0;
	real=2;

		for(;temp!=1;){

			if(temp%real!=0){

				 real++;

				 }

			  else{

			      temp=temp/real;
			      factor++;

				}
		}

		temp=n[i];
		digit=0;


		  for(;temp!=0;){

			 temp=temp/10;
			 digit++;

			}

			if(factor>digit){

		temp=n[i];
		factor=0;
		real=2;

		printf("\n     %ld   = ", n[i]);

			for(;temp!=1;){

				if(temp%real!=0){

				   real++;

				  }

				   else{

				     printf(" %ld  ", real);
				     temp=temp/real;
				     factor++;

				     }
				}

				printf("[%ld factor/s > %ld digit/s] ----------> [WASTEFUL NUMBER]", factor, digit);
				printf("\n          =  %ld FACTORS", factor);
				printf("\n          =  %ld DIGITS\n\n", digit);
		}

	     else{

		 temp=n[i];
		 factor=0;
		 real=2;

		 printf("     %ld   =", n[i]);


			for(;temp!=1;){

				if(temp%real!=0){

					 real++;

					 }

					else{

					 printf("  %ld ", real);
					 temp=temp/real;
					 factor++;

					 }

			}

			 printf(" [%ld factor/s <= %ld digit/s] ----------> [NOT A WASTEFUL NUMBER]", factor, digit);

				 if(factor==1){

				  printf("\n          =  %ld FACTOR", factor);

				  }
				  else{

				    printf("\n          =  %ld FACTORS", factor);

				  }

				  if(digit==1){

				    printf("\n          =  %ld  DIGIT\n\n", digit);

				  }
				  else{

				    printf("\n          =  %ld DIGITS\n\n", digit);

				  }

		}
}


getch();
}