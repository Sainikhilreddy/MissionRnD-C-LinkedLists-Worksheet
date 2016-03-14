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

void sll_012_sort(struct node *head){
	int l = 0, l1 = 0, l2 = 0;
	struct node *p;
	p = head;
	while (p != NULL)
	{
		if (p->data == 0)
			l++;
		else if (p->data == 1)
			l1++;
		else if (p->data == 2)
			l2++;
		p = p->next;
	}
	p = head;
	while (p != NULL)
	{
		if (l > 0)
		{
			p->data = 0;
			l--;
		}
		else if (l1 > 0)
		{
			p->data = 1;
			l1--;
		}
		else if (l2 > 0)
		{
			p->data = 2;
			l2--;
		}
		p = p->next;
	}
}