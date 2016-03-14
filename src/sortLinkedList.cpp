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

struct node * sortLinkedList(struct node *head) {
	struct node *p,*prev=NULL;
	int n,e;
	if (head == NULL)
		return NULL;
	p = head;
	while (1)
	{
		e = 0;
		while (p->next != prev)
		{
			if (p->num > (p->next)->num)
			{
				n = p->num;
				p->num = (p->next)->num;
				(p->next)->num = n;
				e++;
			}
			p = p->next;
		}
		prev = p;
		p = head;
		if (e == 0)
			break;
	}
	return head;
	
}