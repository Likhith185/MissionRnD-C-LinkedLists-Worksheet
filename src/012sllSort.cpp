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
	struct node *tmp, *t1, *t2;
	int len = 0,temp;
	if (head == NULL)
	return;
	tmp = head;
	t1 = head;
	while (tmp->next != NULL)
	{
	len++;
	tmp = tmp->next;
	}
	for (int i = 0; i<len; i++)
	{
	t1 = head;
	while (t1->next != NULL)
	{
	t2 = t1->next;
	if (t1->data > t2->data)
	{
	temp = t1->data;
	t1->data = t2->data;
	t2->data = temp;
	}
	t1 = t1->next;
	}
	}
}