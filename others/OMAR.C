#include<stdio.h>
void rno_decimal(long x);
void rno_float(long y);
main(){
	long a,d,e,g;
	double num,b,c,f;
	scanf("%lf",&num);
	a=(long)num;
	b=num-a;
	c=b*10000000;
	d=(long)c;
	e=d%10;
	f=d/10;
	g=(long)f;
	if (e>=5){ g= g+1;}
	rno_decimal(a);
	rno_float(g);
	getchar();}

void rno_decimal(long x){
	long a,c,d,b,max,mid,min;

	a=x%100;
	b=(long)x/100;
	c=b%100;
	d=(long)b/100;

	max=a;
	if (c>max){ max=c;}
	if (d>max){ max=d;}
	min=a;
	if (c<min){min=c;}
	if (d<min){min=d;}
	mid=0;
	if ((a>c&&a<d)||(a>d&&a<c)){mid=a;}
	if ((c>a&&c<d)||(c>d&&c<a)){mid=c;}
	if ((d>a&&d<c)||(d>c&&d<a)){mid=d;}

	printf("%ld%ld%ld . ",max,mid,min);

}

void rno_float(long y){long a,c,d,b,max,mid,min;

	a=y%100;
	b=(long)y/100;
	c=b%100;
	d=(long)b/100;

	max=a;
	if (c>max){ max=c;}
	if (d>max){ max=d;}
	min=a;
	if (c<min){min=c;}
	if (d<min){min=d;}
	mid=0;
	if ((a>c&&a<d)||(a>d&&a<c)){mid=a;}
	if ((c>a&&c<d)||(c>d&&c<a)){mid=c;}
	if ((d>a&&d<c)||(d>c&&d<a)){mid=d;}
	
	printf("%ld%ld%ld",min,mid,max);
	

}

