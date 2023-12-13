#include "monty.h"

/**
 * swap - swaps the top two elements of the stack.
 *@head: pointer to a pointer to the head of the stack.
 *@line_number: integer number for the line.
 *
 **/

void swap(stack_t **head, unsigned int line_number)
{
	stack_t *m;
	int temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	m = *head;
	temp = m->n;
	m->n = m->next->n;
	m->next->n = temp;
}
