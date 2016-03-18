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

struct node * removeEveryKthNode(struct node * head, int K)
{
	if (K <= 1 || head == NULL)
		return NULL;
	int index = 1;
	struct node *head_two;
	 head_two = head;
	struct node * temp;
	while (head != NULL)
	{
		if (index == K - 1 && head->next != NULL)
		{
			temp = head->next;
			head->next = temp->next;
			index = 1;
		}
		else
			index = (index + 1) % K;

		head = head->next;
	}
	return head_two;
}