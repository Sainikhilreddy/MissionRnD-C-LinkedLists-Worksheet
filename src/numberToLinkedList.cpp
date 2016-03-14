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

struct node * numberToLinkedList(int N) {
	struct node *p, *head = NULL, *prev = NULL;
	int n = 0;
	if (N < 0)
		N = -N;
	if (N == 0)
	{
		head = (node *)malloc(sizeof(node));
		head->num = N;
		head->next = NULL;
		return head;
	}
	
	while (N > 0)
	{
		n = n*10+(N % 10);
		N /= 10;
	}
	
	while (n > 0)
	{
		p = (node *)malloc(sizeof(node));
		p->num = n % 10;
		n = n / 10;
		if (head == NULL)
			head = p;
		else
			prev->next = p;
		prev = p;

	}
	prev->next = NULL;
	return head;

	
}