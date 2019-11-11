#include<stdio.h> 
#include<conio.h> 
void Union(int set1[10],int set2[10],int m,int n); 
void Intersection(int set1[10],int set2[10],int m,int n); 
void main() 
{ 
 int a[10],b[10],m,n,i,j; 
 int ch; 
 clrscr(); 
 printf("\nEnter the number of elements in first set:\n"); 
 scanf("%d",&m); 
 printf("\nEnter the elements:\n"); 
 for(i=0;i<m;i++) 
 { 
  scanf("%d",&a[i]); 
 } 
 printf("\nElement of First set:\n\n"); 
 for(i=0;i<m;i++) 
 { 
  printf("%d\t",a[i]); 
 } 
 printf("\nEnter the number of elements in second set:\n"); 
 scanf("%d",&n); 
 printf("\nEnter the elements:\n"); 
 for(i=0;i<n;i++) 
 { 
  scanf("%d",&b[i]); 
 } 
 printf("\nElement of second set\n"); 
 for(i=0;i<n;i++) 
 { 
  printf("%d\t",b[i]); 
 } 
 for(;;)
 { 
  printf("\n\nMenu\n\n1.Union\n2.Intersection"); 
  printf("\n3.exit"); 
  printf("\nEnter your choice:\n"); 
  scanf("%d",&ch); 
  switch(ch) {
  case 1: 
   Union(a,b,m,n); 
   break; 
  case 2: 
   Intersection(a,b,m,n); 
   break; 
  case 3: 
   exit(0); 
  } 
  getch(); 
 }
} 

void Union(int a[10],int b[10],int m,int n) 
{ 
 int c[20],i,j,k=0,flag=0; 
 for(i=0;i<m;i++) 
 { 
  c[k]=a[i]; 
  k++; 
 } 
 for(i=0;i<n;i++) 
 { 
  flag=0; 
  for(j=0;j<m;j++) 
  { 
   if(b[i]==c[j]) 
   { 
    flag=1; 
    break; 
   } 
  } 
  if(flag==0) 
  { 
   c[k]=b[i]; 
   k++; 
  } 
 } 
 printf("\nElement of resultant set\n\n"); 
 for(i=0;i<k;i++) 
 { 
  printf("\t%d",c[i]); 
 } 
} 
void Intersection(int a[10],int b[10],int m,int n) 
{ 
 int c[20],i,j,k=0,flag=0; 
 for(i=0;i<m;i++) 
 { 
  flag=0; 
  for(j=0;j<n;j++) 
  { 
   if(a[i]==b[j]) 
   { 
    flag=1; 
    break; 
   } 
  } 
  if(flag==1) 
  { 
   c[k]=a[i]; 
   k++; 
  } 
 } 
 if(k==0)
 {
  printf("\n\nResultant set is null set!\n");
 }else{
  printf("\nElement of resultant set\n"); 
  for(i=0;i<k;i++) 
  { 
   printf("\t%d",c[i]); 
  } 
 }
}