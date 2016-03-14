/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	struct node *p, *q, *prev=NULL;
	int n = 0;
	if (K <=1 ||head == NULL)
		return NULL;
	p = head;
	while (p != NULL)
	{
		n++;
		if (n%K== 0)
		{
			q = p;
			p = p->next;
			free(q);
			prev->next = p;
		}
		else
		{
			prev = p;
			p = p->next;
		}
	}
	return head;

}