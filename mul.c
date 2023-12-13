#include "monty.h"

/**
 *mul - multiplies the second top element of the stack with the top element
 *@head:ptr to ptr to head of the stack.
 *@line_number:umber for the line.
 *
 *
 **/
void mul(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n *= (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
}
