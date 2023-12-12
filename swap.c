#include "monty.h"

void swap(stack_t **head, unsigned int line_number)
{
	int temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->n;
	(*stack)->n = ((*stack)->next)->n;
	((*stack)->next)->n = temp;
}
