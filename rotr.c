#include "monty.h"

/**
 * rotr - rotates the stack to the bottom.
 *@head: ptr to ptr of the head od stack.
 *@line_number: number of linne.
 *
 */
void rotr(stack_t **head, unsigned int line_number)
{
	stack_t *curr = *head;
	stack_t *previous = NULL;

	(void)line_number;

	if (curr != NULL && curr->next != NULL)
	{
		while (curr->next != NULL)
		{
			previous = curr;
			curr = curr->next;
		}

		previous->next = NULL;
		curr->next = *head;
		*head = curr;
	}
}
