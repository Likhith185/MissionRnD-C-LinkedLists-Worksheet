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
	node *temp=NULL, *present;
	if (N < 0)
	{
		N *= -1;
	}
	if (N == 0){
		temp = (node *)malloc(sizeof(node));
		temp->num = 0;
		temp->next = NULL;
	}
	while (N){
		present = (node *)malloc(sizeof(node));
		present->num = N % 10;
		present->next = temp;
		temp = present;
		N /= 10;
	}
	return temp;
}
