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
	if (head == NULL)
		return NULL;
	node *temp1, *temp2;
	int i;
	for (temp1 = head; temp1->next != NULL; temp1 = temp1->next){
		for (temp2 = temp1; temp2->next != NULL; temp2 = temp2->next){
			if (temp1->num > temp2->next->num){
				i = temp1->num;
				temp1->num = temp2->next->num;
				temp2->next->num = i;
			}
		}
	}
	return head;
}