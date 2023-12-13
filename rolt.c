#include "monty.h"

/**
 *rotl - rotates the stack to the top.
 *@head: ptr to ptr to head of stack.
 *@line_number: number of line.
 *
 */
void rotl(stack_t **head, unsigned int line_number)
{
	stack_t *temp = *head, *h;

	(void)line_number;

	if (*head && (*head)->next)
	{
		h = (*head)->next;
		h->prev = NULL;

		while (temp->next)
		{
			temp = temp->next;
		}

		temp->next = *head;
		(*head)->prev = temp;
		(*head)->next = NULL;
		*head = h;
	}
}
