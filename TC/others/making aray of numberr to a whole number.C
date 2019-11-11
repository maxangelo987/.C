#include<stdio.h>
#include<math.h>
main(){
	int arr[100],range,i,k,sum;
	printf("enter a range: ");
	scanf("%d",&range);
	for (i=0;i<range;i++) {
	printf("#%d: ",i+1);
	scanf("%d",&arr[i]);}

	sum=0;   k=0;
	for (i=range-1;i>=0;i--) {
	   sum+= arr[i] * pow (10,k) ;
	   k++;}
	printf("\n\n\twhole: %d",sum);
	getch ();
	}