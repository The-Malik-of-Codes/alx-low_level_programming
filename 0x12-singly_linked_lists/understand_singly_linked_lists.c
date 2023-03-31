#include <stdio.h>
#include <stdlib.h>

typedef struct node *nodePtr; //we have renamed struct node to *nodePtr

struct node
{
	int data;
	nodePtr next;
}

typedef struct node node; //we have renamed struct node to node

int main(int argc, const char **argv)
{	
	nodePtr first = NULL; //pointer to the first node in the list which has nothing ie the pointer has nothing
	
	first = malloc(sizeof(node));

	//think of the arrows as pointing to the sections of the node
	first->next = NULL; //pointer to next for the first node has null

	first->data = 254; //pointer to data for the first node has 254

	first->next = malloc(sizeof(node));

	first->next->next = NULL;

	first->next->data = 255;

	printf("Hello, Kenya!\n");
	
	//before you point to the next node you need to create space on the heap that returns a pointer to that space that stores the address of hat next node
	nodePtr temp; 
	temp = malloc(sizeof(node));
	temp->next = first;
	first = temp;
	return 0;
}
