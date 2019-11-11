#include<stdio.h>
main(){

int temp2,temp,size,count,n=0,i,l,j,prime,c,d,k,q=0;
int x[100],arr[100],p[100];

clrscr();

for(size=0;;size++)
{
	scanf("%d",&x[size]);
	if(x[size]==0)
	{
	 break;
	}

}
for(i=0;i<size;i++)
{
 temp=x[i];
 k=2;
 c=0;
	while(temp!=1)
	{
	 l=temp%k;
		if(l==0)
		{
		 temp=temp/k;
		 c++;
		}
		else
		{
		 k++;
		}
	}
	temp=x[i];
	d=0;
	while(temp!=0)
	{
	 temp=temp/10;
	 d++;
	}
	if(c>d)
	{
	arr[n]=x[i];
	n++;
	}
	if(c<=d)
	{
	 p[q]=x[i];
	 q++;
	}
}
printf("1 - Nonwasteful\n");
for(i=0;i<q;i++)
{
 printf(" %d ",p[i]);

	}
 printf("\n2 - Wasteful\n ");
for(i=0;i<=n-1;i++)
{
 printf(" %d ",arr[i]);
}
getch();
}