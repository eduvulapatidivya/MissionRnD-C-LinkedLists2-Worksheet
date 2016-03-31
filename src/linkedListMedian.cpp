/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) {
	if (head==NULL)
	return -1;
	else
	{
		struct node*temp;
		int count = 0,c=1,b=0,med=0,med1=0,med2=0;
		temp = head;
		while (temp != NULL)
		{
			count++;
			temp = temp->next;
		}
		if (count == 1)
		{
			return (head->num);
		}
		else
		{
			if (count % 2 == 0)
			{
				b = (count / 2) + 1;
				temp = head;
				while (b != c + 1)
				{
					temp = temp->next;
					c++;
				}
				if (b == c + 1)
				{
					med1 = temp->num;
					med2 = temp->next->num;

					med = (med1 + med2) / 2;
				}
			}
			else
			{
				b = (count / 2) + 1;
				temp = head;
				while (b != c + 1)
				{
					temp = temp->next;
					c++;
				}
				if (b == c + 1)
				{
					med = (temp->next)->num;
				}
			}
			return med;
		}
	}
}
