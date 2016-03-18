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
	int temp = N, c = 0, p = 1, temp1;
	struct node *start = NULL, *current = NULL, *new_node;
	if (N<0)
	{
		N = N*-1;
		temp = N;
	}
	if (N == 0)
	{
		c = 1;
		p = 10;
	}

	while (temp > 0)
	{
		c++;
		p = p * 10;
		temp = temp / 10;

	}
	p = p / 10;
	while (c>0)
	{
		if (start == NULL)
		{
			new_node = (struct node*)malloc(sizeof(struct node));
			new_node->num = N / p;
			new_node->next = NULL;
			current = new_node;
			start = new_node;
			p = p / 10;
		}
		else
		{
			new_node = (struct node*)malloc(sizeof(struct node));
			current->next = new_node;
			temp = N / p;
			new_node->num = temp % 10;
			new_node->next = NULL;
			current = new_node;
			p = p / 10;
		}
		c--;
	}
	return start;
}