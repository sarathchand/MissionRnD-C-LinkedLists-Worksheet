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
	struct node *temp1 = head;
	int c0 = 0, c1 = 0, c2 = 0;
	while (head != NULL)
	{
		if (head->data == 0)
		{
			c0++;
		}
		if (head->data == 1)
		{
			c1++;
		}
		if (head->data == 2)
		{
			c2++;
		}
		head = head->next;
	}
	head = temp1;
	while (head != NULL)
	{
		if (c0 > 0)
		{
			head->data = 0;
			c0--;
		}
		else
		{

			if ((c0 == 0) && (c1 > 0))
			{
				head->data = 1;
				c1--;
			}
			else
			{
				if ((c0 == 0) && (c1 == 0) && (c2 > 0))
				{
					head->data = 2;
					c2--;
				}
			}
		}
		head = head->next;
	}
	head = temp1;
	while (temp1 != NULL)
	{
		printf("%d", temp1->data);
		temp1 = temp1->next;
	}


}