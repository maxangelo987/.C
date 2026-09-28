#include <stdio.h>
#include <stdlib.h>

struct record{
int value1;
struct record *ptr_nxt;
struct record *ptr_bck;
struct record *ptr_up;
struct record *ptr_dwn;

};

typedef struct record node;

main(){
node *start, *curr, *prev;
int i,j,rows,cols;
clrscr();
printf("Please enter the no. of rows you want:\n");
scanf("%d",&rows);

printf("Please enter the no. of columns you want:\n");
scanf("%d",&cols);

start = (node *)malloc(sizeof(node));
curr = start;
prev = start;

printf("Please type in the value for field:\n");
scanf("%d",&curr->value1);

curr->ptr_bck = NULL;
curr->ptr_up = NULL;

for(i=1;i<rows;i++){ /*initialisation of outer loop*/
curr->ptr_nxt = (node *)malloc(sizeof(node));


printf("Please type in the value for row no. %d\n",i);

for(j=0;j<cols;j++){
curr->ptr_dwn = (node *)malloc(sizeof(node));
prev = curr;
curr = curr->ptr_dwn;
curr->ptr_up = prev;

printf("Please type in the value:\n");
scanf("%d",&curr->value1);


}
curr->ptr_dwn = NULL;
prev = curr;
curr = curr->ptr_nxt;
curr->ptr_bck = prev;
}curr->ptr_nxt = NULL;

curr = start;

for(i=0;i<rows;i++){
for(j=0;j<cols;j++){
printf("%p %p %p %d %p %4p\n",curr,curr->ptr_nxt,curr->ptr_dwn,curr->value1,curr->ptr_bck,curr->ptr_up);
curr = curr->ptr_dwn;
}
curr = curr->ptr_nxt;
}
getch();
}