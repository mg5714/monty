#include "monty.h"


/**
 *sub - subtracts the top element of the stack from the second top element.
 *@head: ptr to ptr to stack.
 *@line_number: number for the line
 *
 **/
void sub(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n -= (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
}
