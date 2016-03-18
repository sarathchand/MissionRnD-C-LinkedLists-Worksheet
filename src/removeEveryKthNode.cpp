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

struct node * removeEveryKthNode(struct node *head, int K) {

	if ((K >1) && (head != NULL))
	{
		int c = 0;
		struct node *current = head, *previous = head;
		while (current != NULL)
		{
			c++;
			if (c == K)
			{

				previous->next = (previous->next)->next;
				c = 0;

			}
			else{
				previous = current;


			}
			current = current->next;
		}
		return head;
	}
	else
	{
		return NULL;
	}
}