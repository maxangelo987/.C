 #include<stdio.h>
    #include<stdlib.h>
    #include<malloc.h>

    typedef struct linked_list *list;

    struct linked_list
    {
int result;
list next;
    };

    int main()
    {
int i,j;
scanf("%d %d",&i,&j);

int l,k;
list **array=(list**)malloc(i*sizeof(list*));

for(l=0;l<i;l++)
    array[l]=(list*)malloc(j*sizeof(list));

for(l=0;l<i;l++){   
    for(k=0;k<j;k++){
        array[i][j]=NULL;
    }
}

int temp;
list new;
list current;
for(l=0;l<i;l++)
    for(k=0;k<j;k++)
    {
        scanf("%d",&temp);
        while(temp!=-1)
        {
            if (array[l][k]==NULL)
            {
                new->result=temp;
                new->next=NULL;
                array[l][k]->next=new;
            }
            else
            {
                current->result=temp;
                current->next=NULL;
                new->next=current;
            }
            scanf("%d",&temp);
        }
    }

int cnt=0;
for(l=0;l<i;l++)
    for(k=0;k<j;k++)
    {
        if (array[l][k]==NULL){
    new->result=temp;
    new->next=NULL;
    array[l][k]->next=new;
}while (array[l][k]!=NULL);
        }
    }

return 0;
    }