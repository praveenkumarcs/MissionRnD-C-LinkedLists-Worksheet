/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

typedef struct node *lptr;

void Interchange(lptr node1, lptr node2){
	int tmp;
	tmp = node1->num;
	node1->num = node2->num;
	node2->num = tmp;

}

struct node * sortLinkedList(struct node *head) {
	lptr first, second;

	if (head == NULL)
		return NULL;
	if (head->next == NULL)
		return head;

	for (first = head; first->next != NULL; first = first->next)
		for (second = first->next; second != NULL; second = second->next)
			if (first->num > second->num)
				Interchange(first, second);

			
	return head;
}