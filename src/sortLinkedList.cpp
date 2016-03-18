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
	struct node *current1 = head, *current2 = head;
	int t;
	if (head != NULL)
	{
		if (head->num != NULL)
		{
			while (current1 != NULL)
			{
				current2 = current1;
				while (current2 != NULL)
				{
					if (current1->num > current2->num)
					{
						t = current1->num;
						current1->num = current2->num;
						current2->num = t;
					}
					current2 = current2->next;
				}
				current1 = current1->next;
			}
			return head;
		}
	}
	else
	{
		return NULL;
	}
}