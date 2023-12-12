#include "monty.h"

/**
 * swap - swaps the top two elements of the stack.
 *@head: pointer to a pointer to the head of the stack.
 *@line_number: integer number for the line.
 *
 **/

void swap(stack_t **head, unsigned int line_number)
{
	int temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = (*head)->n;
	(*head)->n = ((*head)->next)->n;
	((*head)->next)->n = temp;
}