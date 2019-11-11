#include<stdio.h>
main(){
	int num,i,rem,quot,arr[100],j;
	scanf("%d",&num);
	i=0;
	for (;;) {
	quot=num/10;
	rem=num%10;
	num=quot;
	arr[i]=rem;
	i++;
	printf("rem : %d",rem);
	if (quot==0) {
	break;}}

	printf("\n") ;
	for (j=0;j<i;j++) {
	printf("%d   ",arr[j]);}
	getch();}