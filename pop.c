#include "monty.h"

/**
 * pop - removes the top element of the stack.
 *@head:pointer to a pointer to the head of the stack.
 *@line_number: integer num of lines.
 *
 **/
void pop(stack_t **head, unsigned int line_number)
{
	stack_t *temp = *head;

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	*head = (*head)->next;
	free(temp);
}
