/* (0) RNO Program 
(void, switching functions) <Comp 1/Mathematics> */


#include<stdio.h>
#include<math.h>
void volume(void);
void instant_calcu(void);
void conversion(void);
void area(void);
void fun_station(void);
void exit(void);

void main(void){
 char choice;
 clrscr();
 printf("\n\n\t\t...THIS PROGRAM COmPUTES MULTIPLE PROBLEM... ");
 getch();
 clrscr();
 printf("Choose the problem you want to solve : ");
 printf("\n  (just press)\n");
 printf("A. Volume \n");
 printf("B. Instant calculator\n");
 printf("C. Conversion\n");
 printf("D. Area\n");
 printf("E. Fun station\n");
 printf("X. Exit\n");
 printf("\nEnter your choice : ");
 scanf("%c",&choice);
 switch(toupper(choice)){
 case 'A':
 volume();
 break;
 case 'B':
 instant_calcu();
 break;
 case 'C':
 conversion();
 break;
 case 'D':
 area();
 break;
 case 'E':
 fun_station();
 break;
 case'X':
 exit();
 break;
 default:
 printf("\n\n\t\t!!!!INVALID CHOICE!!!!");
 getch();}
 main();}

 /**********volume*************/
 void volume(void){
 long num1,h1,r1,e1,a2,e2,r2,h2,a3,h3,a5;
 double a1,a4,a6;
 clrscr();
 printf("\t\t...THIS PROGRAM COMPUTES THE VOLUME OF A FIGURE...");
 printf("\n\n  (just press)");
 printf("\n1. Volume of a cylinder.");
 printf("\n2. Volume of a square box.");
 printf("\n3. Volume of a cone.");
 printf("\n4. Volume of pyramid.");
 printf("\n\n Enter your choice: ");
 scanf("%ld",&num1);
 if(num1==1){
 clrscr();
 printf("You chose the cylinder..");
 printf("\nEnter the raduis : ");
 scanf("%ld",&r1);
 printf("Enter the heigth : ");
 scanf("%ld",&h1);
 e2=pow(r1,2);
 a1=(double)3.1316*e2*h1;
 printf("\nThe volume of your cylinder is : %lf cu.unit",a1);
 getch();}
 if(num1==2){
 clrscr();
 printf("You chose the square box..");
 printf("\n\nEnter the edge of your box : ");
 scanf("%ld",&e1);
 a2=pow(e1,3);
 printf("\n\nThe volume of the box is : %ld cu.unit",a2);
 getch();}
 if(num1==3){
 clrscr();
 printf("\nYou chose the cone..");
 printf("\n\nEnter the raduis : ");
 scanf("%ld",&r2);
 printf("\nEnter the height : ");
 scanf("%ld",&h2);
 a3=pow(r2,2);
 a4=(double)a3*0.3333*3.1416*h2;
 printf("\n\nThe volume of the cone : %lf cu.unit",a4);
 getch();}
 if(num1==4){
 clrscr();
 printf("\nYou chose the pyramid...");
 printf("\n\nEnter the heigth of your pyramid : ");
 scanf("%ld",&h3);
 printf("\nEnter the area of its base : ");
 scanf("%ld",&a5);
 a6=(double)0.3333*a5*h3;
 printf("\n\nThe volume of your pyramid : %lf cu.unit",a6);
 getch();}}

 /********instant calcu********/
 void instant_calcu(void){
 long num1,x1,y1,a1,x2,y2,a2,x3,y3,a3,x4,y4,x5,y5,a5,x6,i,prod,z=1,x7,x8;
 double a4,a7,a8;
 clrscr();
 printf("\t\t...THIS PROGRAM IS A BASIC CALCULATOR...");
 printf("\n\n(just press)");
 printf("\n1. x^y");
 printf("\n2. x+y");
 printf("\n3. xy");
 printf("\n4. x/y");
 printf("\n5. x-y");
 printf("\n6. x!");
 printf("\n7. x^-1");
 printf("\n8. x^1/2");
 printf("\nEnter your choice : ");
 scanf("%ld",&num1);
 if(num1==1){
 clrscr();
 printf("\nx^y");
 printf("\n\nEnter the value of x : ");
 scanf("%ld",&x1);
 printf("\nEnter the value of y : ");
 scanf("%ld",&y1);
 a1=pow(x1,y1);
 printf("\nAnswer: %ld",a1);
 getch();}
 if(num1==2){
 clrscr();
 printf("\nx+y");
 printf("\n\nEnter the value of x : ");
 scanf("%ld",&x2);
 printf("\nEnter the value of y : ");
 scanf("%ld",&y2);
 a2=x2+y2;
 printf("\nAnswer: %ld",a2);
 getch();}

 if(num1==3){
 clrscr();
 printf("\nxy");
 printf("\n\nEnter the value of x : ");
 scanf("%ld",&x3);
 printf("\nEnter the value of y : ");
 scanf("%ld",&y3);
 a3=x3*y3;
 printf("\nAnswer: %ld",a3);
 getch();}

 if(num1==4){
 clrscr();
 printf("\nx\y");
 printf("\n\nEnter the value of x : ");
 scanf("%ld",&x4);
 printf("\nEnter the value of y : ");
 scanf("%ld",&y4);
 a4=(double)x4/y4;
 printf("\nAnswer: %lf",a4);
 getch();}

 if(num1==5){
 clrscr();
 printf("\nx-y");
 printf("\n\nEnter the value of x : ");
 scanf("%ld",&x5);
 printf("\nEnter the value of y : ");
 scanf("%ld",&y5);
 a5=x5-y5;
 printf("\nAnswer: %ld",a5);
 getch();}
 if(num1==6){
 clrscr();
 printf("\nx!");
 printf("\n\nEnter the value of x : ");
 scanf("%ld",&x6);
 for(i=2;i<=x6;i++){
 prod=z*i;
 z=prod;}
 printf("Answer: %ld",prod);
 getch();}
 if(num1==7){
 clrscr();
 printf("\nx^-1");
 printf("\n\nEnter the value of x : ");
 scanf("%ld",&x7);
 a7=(double)pow(x7,-1);
 printf("\nAnswer: %lf",a7);
 getch();}

 if(num1==8){
 clrscr();
 printf("\nx^1/2");
 printf("\n\nEnter the value of x : ");
 scanf("%ld",&x8);
 a8=(double)pow(x8,0.5);
 printf("\nAnswer: %lf",a8);
 getch();}}





 /*******conversion*****/
 void conversion(void){
 long choice,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;
 double a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
 clrscr();
 printf("\t\t...THIS PROGRAM IS THE CONVERSION PROGRAM...");
 printf("\n\n  (just press)");
 printf("\n1. inch-cm");
 printf("\n2. cm-inch");
 printf("\n3. ft-m");
 printf("\n4. yd-m");
 printf("\n5. mile-km");
 printf("\n6. km-mile");
 printf("\n7. lb-kg");
 printf("\n8. kg-lb");
 printf("\n9. oz-g");
 printf("\n10. g-oz");
 printf("\n\nEnter your choice  : ");
 scanf("%ld",&choice);
 if(choice==1){
 clrscr();
 printf("\n inch-cm");
 printf("\n\nEnter the value of your inch: ");
 scanf("%ld",&x1);
 a1=(double)x1*2.54;
 printf("\nAnswer: %lf cm.",a1);
 getch();}
 if(choice==2){
 clrscr();
 printf("\n cm-inch");
 printf("\n\nEnter the value of your cm: ");
 scanf("%ld",&x2);
 a2=(double)x2/2.54;
 printf("\nAnswer: %lf inch",a2);
 getch();}
 if(choice==3){
 clrscr();
 printf("\n ft-m");
 printf("\n\nEnter the value of your ft: ");
 scanf("%ld",&x3);
 a3=(double)x3*0.3048;
 printf("\nAnswer: %lf m.",a3);
 getch();}
 if(choice==4){
 printf("\n yd-m");
 printf("\n\nEnter the value of your yard: ");
 scanf("%ld",&x4);
 a4=(double)x4*0.9144;
 printf("\nAnswer: %lf m.",a4);
 getch();}
 if(choice==5){
 clrscr();
 printf("\n mile-km");
 printf("\n\nEnter the value of your mile: ");
 scanf("%ld",&x5);
 a5=(double)x5*1.609344;
 printf("\nAnswer: %lf km.",a5);
 getch();}
 if(choice==6){
 clrscr();
 printf("\n km-mile");
 printf("\n\nEnter the value of your km: ");
 scanf("%ld",&x6);
 a6=(double)x6/1.609344;
 printf("\nAnswer: %lf mile",a6);
 getch();}
 if(choice==7){
 clrscr();
 printf("\n lb-kg");
 printf("\n\nEnter the value of your lb: ");
 scanf("%ld",&x7);
 a7=(double)x7*0.4535924;
 printf("\nAnswer: %lf kg.",a7);
 getch();}
 if(choice==8){
 clrscr();
 printf("\n kg-lb");
 printf("\n\nEnter the value of your kg: ");
 scanf("%ld",&x8);
 a8=(double)x8/0.4535924;
 printf("\nAnswer: %lf lb.",a8);
 getch();}
 if(choice==9){
 clrscr();
 printf("\n oz-g");
 printf("\n\nEnter the value of your oz: ");
 scanf("%ld",&x9);
 a9=(double)x9*28.34954;
 printf("\nAnswer: %lf g.",a9);
 getch();}
 if(choice==10){
 clrscr();
 printf("\n g-oz");
 printf("\n\nEnter the value of your g: ");
 scanf("%ld",&x10);
 a10=(double)x10/28.34954;
 printf("\nAnswer: %lf oz.",a10);
 getch();}}


  /*****area*****/
 void area(void){
 long num,x1,a1,x2,x3,x4,x5,x6,a4;
 double a2,a3,a5;
 clrscr();
 printf("\t\t...THIS PROGRAM COMPUTES THE AREA  OF FIGURE...");
 printf("\n\n  (just press)");
 printf("\n1. Area of a square.");
 printf("\n2. Area of a right triangle.");
 printf("\n3. Area of a rectangle.");
 printf("\n4. Area of a circle.");
 printf("\n\nEnter your choice: ");
 scanf("%ld",&num);
 if(num==1){
 clrscr();
 printf("\n Area of a square.");
 printf("\n\nEnter the side of your square: ");
 scanf("%ld",&x1);
 a1=pow(x1,2);
 printf("\nThe area of your square is : %ld sq.unit",a1);
 getch();}
 if(num==2){
 clrscr();
 printf("\n Area of a rigth triangle.");
 printf("\n\nEnter the base of your triangle: ");
 scanf("%ld",&x2);
 printf("\nEnter the side of your triangle: ");
 scanf("%ld",&x3);
 a2=(double)0.5*x3*x2;
 printf("\nThe area of your triangle is : %lf sq.unit",a2);
 getch();}
 if(num==3){
 clrscr();
 printf("\n Area of a rectangle.");
 printf("\n\nEnter the heigth of your rectangle: ");
 scanf("%ld",&x4);
 printf("\nEnter the width of your rectangle: ");
 scanf("%ld",&x5);
 a3=x5*x4;
 printf("\nThe area of your rectangle is : %ld sq.unit",a3);
 getch();}
 if(num==4){
 clrscr();
 printf("\n Area of a circle.");
 printf("\n\nEnter the raduis of your circle: ");
 scanf("%ld",&x6);
 a4=pow(x6,2);
 a5=(double)a4*3.1416;
 printf("\nThe area of your circle is : %lf",a5);
 getch();}}



 /*******fun_station******/
 void fun_station(void){
 long mn1=7,mn2=2,mn3=3,i,num[100],arr[100],x,rem,quot,count,k,range,c=0;
 long magic[100],l,a,b,v;
 clrscr();
 printf("\t\t...THIS IS THE FUN STATION OF THE PROGRAM...");
 printf("\n\n YoU ArE LUcKy iF YoU CaN GuEsS ThE MAgIC NUmBeR ^_^\n");
 printf("\nEnter range: ");
 scanf("%ld",&range);
 for(i=1;i<=range;i++){
 printf("number %ld: ",i);
 scanf("%ld",&num[i]);
 x=0;
 for(;;){
 quot=num[i]/10;
 rem=num[i]%10;
 num[i]=quot;
 arr[x]=rem;
 x++;
 if(quot==0){
 break;;}}
 count=0;
 for(k=0;k<x;k++){
 if((arr[k]==mn1)||(arr[k]==mn2)||(arr[k]==mn3)){
 count++;}}
 if(count!=0){
 magic[c]=i;
 c++;}}
 printf("\nThe magic numbers is in the number: ");
 for(l=0;l<c;l++){
 printf("%ld ",magic[l]);}
 printf("..");
 getch();
 printf("\n\n\tWhat is the magic numbes?? heheh");
 getch();
 printf("\n\n\tyou want a cluE??");
 getch();
 printf("\n   ThEre arE tHrEe magIc nuMber....");
 getch();
 clrscr();
 printf("\nOKay.. \n\nnow enter the three (1 bit) numbers(using space not enter): ");
 scanf("%ld%ld%ld",&a,&b,&v);
 if((a==mn1)||(a==mn2)||(a==mn3)){
 printf("\nThe 1st number is one of the magic numbers ^_^");}
 if((b==mn1)||(b==mn2)||(b==mn3)){
 printf("\nThe 2nd number is one of the magic numbers ^_^");}
 if((v==mn1)||(v==mn2)||(v==mn3)){
 printf("\nThe 3rd number is one of the magic numbers ^_^");}
 getch();
 printf("\n\n\t\t..T H A N K  Y O U... ");

 getch();}





 /**********exit*********/
 void exit(void){
 clrscr();
 printf("\n\n\t\t...P R O G R A M   T E R M I N A T E D...");
 getch();
 exit();}
 /***********END**********/


/***********HAHAHA*******/
