#include "monty.h"

/**
 * pall - prints all the values on the stack, starting from the top.
 * @head: spointer to pointer tack head
 *
 **/
void pall(stack_t **head)
{
	stack_t *current = *head;

	if (h == NULL)
		return;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
