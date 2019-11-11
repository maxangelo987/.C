#include<stdio.h>

main(){
long a,d,e,g,a1,c1,d1,b1,max1,mid1,min1,a2,c2,d2,b2,max2,mid2,min2;

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


a1=a%100;
b1=(long)a/100;
c1=b1%100;
d1=(long)b1/100;

max1=a1;
if (c1>max1){ max1=c1;}
if (d1>max1){ max1=d1;}
min1=a1;
if (c1<min1){min1=c1;}
if (d1<min1){min1=d1;}
mid1=0;
if ((a1>c1&&a1<d1)||(a1>d1&&a1<c1)){mid1=a1;}
if ((c1>a1&&c1<d1)||(c1>d1&&c1<a1)){mid1=c1;}
if ((d1>a1&&d1<c1)||(d1>c1&&d1<a1)){mid1=d1;}

printf("%ld%ld%ld . ",max1,mid1,min1);



a2=g%100;
b2=(long)g/100;
c2=b2%100;
d2=(long)b2/100;

max2=a2;
if (c2>max2){ max2=c2;}
if (d2>max2){ max2=d2;}
min2=a2;
if (c2<min2){min2=c2;}
if (d2<min2){min2=d2;}
mid2=0;
if ((a2>c2&&a2<d2)||(a2>d2&&a2<c2)){mid2=a2;}
if ((c2>a2&&c2<d2)||(c2>d2&&c2<a2)){mid2=c2;}
if ((d2>a2&&d2<c2)||(d2>c2&&d2<a2)){mid2=d2;}

printf("%ld%ld%ld",min2,mid2,max2);



getch();}



