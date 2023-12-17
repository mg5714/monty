#include "monty.h"

/**
 * pall - prints all the values on the stack, starting from the top.
 * @head: spointer to pointer tack head
 * @line_number: number of lines.
 *
 **/
void pall(stack_t **head, unsigned int line_number)
{
	stack_t *current = *head;

	(void)line_number;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
