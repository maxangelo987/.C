#include<stdio.h>
#include<stdlib.h>

/* Linked list structure */
struct linkedlist {
	struct linkedlist *prev;
	int data;
	struct linkedlist *next;
} *node = NULL, *first = NULL, *last = NULL, *node1 = NULL, *node2 = NULL;

/* Function for create/insert node at the beginning of Linked list */
void insert_beginning() {

	/* Dynamic memory allocation */
	node = (struct linkedlist*)malloc(sizeof(struct linkedlist));
	printf("Enter value for the node:\n");
	scanf("%d",&node->data);
	if(first == NULL) {
		node->prev = NULL;
		node->next = NULL;
		first = node;
		last = node;
		printf("Linked list Created!\n");
	}
	else {
		node->prev = NULL;
		first->prev = node;
		node->next = first;
		first = node;
		printf("Data Inserted at the beginning of the Linked list!\n");
	}							
}
										
/* Function for create/insert node at the end of Linked list */
void insert_end() {

	/* Dynamic memory allocation */
	node = (struct linkedlist*)malloc(sizeof(struct linkedlist));
	printf("Enter value for the node:\n");
	scanf("%d",&node->data);
	if(first == NULL) {
		node->prev = NULL;
		node->next = NULL;
		first = node;
		last = node;
		printf("Linked list Created!\n");
	}
	else {
		node->next = NULL;
		last->next = node;
		node->prev = last;
		last = node;
		printf("Data Inserted at the end of the Linked list!\n");
	}							
}

/* Function for Display Linked list */
void display() {
	node = first;
	printf("List of data in Linked list in  Ascending order!\n");
	while(node != NULL) {
		printf("%d\n",node->data);
		node = node->next;
	}
	node = last;
	printf("List of data in Linked list in  Descending order!\n");
	while(node != NULL) {
		printf("%d\n",node->data);
		node = node->prev;
	}
}
										
/* Function for create/insert node in Linked list */
void delete() {
	int count = 0, number, i;
	node = node1 = node2 = first;
	for(node = first; node != NULL; node = node->next)
		printf("Enter value for the node:\n");
	count++;
	display();
	printf("\n%d nodes available here!\n", count);
	printf("Enter the node number which you want to delete:\n");
	scanf("%d", &number);
	if(number != 1) {
		if(number < count && number > 0) {
			for(i = 2; i <= number; i++)
				node = node->next;
			for(i = 2; i <= number-1; i++)
				node1 = node1->next;
			for(i = 2; i <= number+1; i++)
				node2 = node2->next;
			node2->prev = node1;
			node1->next = node2;
			node->prev = NULL;
			node->next = NULL;
			free(node);
		}
		else if(number == count) {
			node = last;
			last = node->prev;
			last->next = NULL;
			free(node);
		}
		else
			printf("Invalid node number!\n");
	}
	else {
		node = first;
		first = node->next;
		first->prev = NULL;
		free(node);
	}
	printf("Node has been deleted successfully!\n");							
}

int main() {
	int op = 0;
	while(op != 5) {
		printf("1. Insert at the beginning\n2. Insert at the end\n3. Delete\n4. Display\n5. Exit\n");
		printf("Enter your choice:\n");
		scanf("%d", &op);
		switch(op) {
			case 1:
				insert_beginning();
				break;
			case 2:
				insert_end();
				break;
			case 3:
				delete();
				break;
			case 4:
				display();
				break;
			case 5:
				printf("Bye Bye!\n");
				exit(0);
				break;
			default:
				printf("Invalid choice!\n");
		}
	}
getch();
}
