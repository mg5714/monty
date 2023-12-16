#include "monty.h"

/**
 * rotr - rotates the stack to the bottom.
 *@head: ptr to ptr of the head od stack.
 *@line_number: number of linne.
 *
 */
void rotr(stack_t **head, unsigned int line_number)
{
	(void)line_number;
	stack_t *last = *head;

	if (*head != NULL && (*head)->next != NULL)
	{
		while (last->next != NULL)
		{
			last = last->next;
		}

		last->prev->next = NULL;
		last->prev = NULL;
		last->next = *head;
		(*head)->prev = last;
		*head = last;
	}
}
