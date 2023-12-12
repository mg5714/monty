#include "monty.h"
/**
 * pint - prints the value at the top of the stack.
 *@head: pointer to a pointer to the head of the stack.
 *@line_number: integer number
 *
 **/
void pint(stack_t **head, unsigned int line_number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
