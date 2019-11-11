#include<stdio.h>
#include<math.h>
main(){
	int range,sum,arr[100],i,k;
	printf("Enter a range:");
	scanf("%d",&range);
	for (i=0;i<range;i++) {
	scanf("%d",&arr[i]);}
	sum=0;  k=0;
	for (i=range-1;i>=0;i--) {
		sum += arr[i] * pow (10,k) ;
		k++;
		printf("\t SUM:%d",sum);}
	printf("\n final_SUM: %d",sum);
	getch();}
