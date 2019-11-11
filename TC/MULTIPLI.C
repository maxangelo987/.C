#include<stdio.h>
main(){

int i,j,limit=10;
clrscr();

for(i=1;i<=limit;i++)
{
    for(j=1;j<=limit;j++)
    {
	printf("%5d ",i*j);
    }
    printf("\n\n");
}


getch();
}