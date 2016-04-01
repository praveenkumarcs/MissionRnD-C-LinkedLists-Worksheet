/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

typedef struct node *lptr;

void sll_012_sort(struct node *head){
	lptr tmp,tmp1;
	int ones = 0, twos = 0, zeros = 0;
		

	tmp = head;
	while (tmp != NULL){
		if (tmp->data == 0)
			zeros += 1;
		else{
			if (tmp->data == 1)
				ones += 1;
			else
				twos += 1;
		}
		tmp = tmp->next;
	}

	tmp1 = head;
	while (tmp1 != NULL){
		while (zeros){
			tmp1->data = 0;
			zeros--;
			tmp1 = tmp1->next;
		}

		while (ones){
			tmp1->data = 1;
			ones--;
			tmp1 = tmp1->next;
		}

		while (twos){
			tmp1->data = 2;
			twos--;
			tmp1 = tmp1->next;
		}


		
	}

	

}