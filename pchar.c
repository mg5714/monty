#include "monty.h"

/**
 *pchar - prints the char at the top of the stack.
 *@head: ptr of ptr to head of stack.
 *@line_number: number of line.
 *
 **/
void pchar(stack_t **head, unsigned int line_number)
{
	stack_t *value;

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	value = *head;
	if (value->n < 0 || value->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		free-stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", value->n);
}
