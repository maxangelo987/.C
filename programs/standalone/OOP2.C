#include<stdio.h>
#include<conio.h>
void main()
{
double z,doub,r,n,count=0,i=0,frac;
int num,p,ar[100];
clrscr();
printf("Enter the number to convert");
scanf("%lf",&doub);
num=doub;
frac=doub-num;
while(num!=0)
{
ar[i]=num%2;
num=num/2;
i++;
count++;
}

printf("The Binary form of this number is ");
for(i=(count-1);i>=0;i--)
{
printf("%d",ar[i]);
}
printf(".");
while(frac!=0)
{
z=frac*2;
p=z;
frac=z-p;
printf("%d",p);
}
getch();
}