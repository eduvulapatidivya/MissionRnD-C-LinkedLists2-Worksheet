/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * insertAtEveryKthNode(struct node *head, int K) {
	if (head==NULL||K<=0)
	return NULL;
	else
	{
		int count = 0, c = 1, len = 0, i = 1, n = 0, j;
		struct node*temp;
		
		temp = head;
		while (temp != NULL)
		{
			temp = temp->next;
			len++;
		}
		if (K > len)
			return head;
		else
		{
			
					for (j = 1; j <= len; j++)
					{
						if (j%K == 0)
						{
							n++;
						}
					}


					j = 0;
					i = 1;
					temp = head;
					while (j < n)
					{
						c = i ;
						if (c % K == 0)
						{
							struct node *newnode = (struct node*)malloc(sizeof(struct node));
							newnode->num = K;
							newnode->next = temp->next;
							
							temp->next = newnode;
							j++;
							temp = newnode->next;
							i++;
						}
						else
						{
							temp = temp->next;
							i++;
						}
					}


					return head;
				}
		}
	}

