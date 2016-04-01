/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

typedef struct node *lptr;

lptr insertFront(lptr head,int key){

	lptr nptr;

	if (head == NULL){
		head = (lptr)malloc(sizeof(struct node));
		head->num = key;	
		head->next = NULL;
		return head;
	}

	nptr = (lptr)malloc(sizeof(struct node));
	nptr->num = key;
	nptr->next = head;	
	head = nptr;
		
	return head;
}

struct node * numberToLinkedList(int N) {
	lptr head = NULL, nptr = NULL;
	int rem = 0;

	if (N < 0)
		N *= -1;

	if (N == 0){
		nptr = (lptr)malloc(sizeof(struct node));
		nptr->num = 0;
		nptr->next = NULL;
		return nptr;
	}
	
	while (N != 0){
		rem = N % 10;
		head = insertFront(head, rem);
		N /= 10;
	}


	return head;
}