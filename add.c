#include "monty.h"

void add(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n += (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
}
