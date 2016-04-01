/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

typedef struct node *lptr;

struct node * removeEveryKthNode(struct node *head, int K) {

	
	lptr tmp = NULL, parent = NULL, child = NULL;
	int k = 1;

	if (head == NULL || K <= 1)
		return NULL;

	parent = child = head;
	while (child != NULL){
		if (k == K){
			k = 1;
			while (parent->next != child)
				parent = parent->next;

			parent->next = child->next;
			child = parent->next;

		}
		if (child == NULL)
			break;

		child = child->next;
		k += 1;
	}

	return head;
	
}