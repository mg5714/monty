#include "monty.h"

/**
 *_div - divides the second top element of the stack by the top element.
 *@head: pointer to pointer of the head of the stack.
 *@line_number: integer number for line.
 *
 **/
void _div(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n /= (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
}
