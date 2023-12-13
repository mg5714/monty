#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack.
 * @head: pointer to pointer to head of stack.
 * @line_number: integer for the line number.
 *
 */
void pstr(stack_t **head, unsigned int line_number)
{
	stack_t *temp = *head;

	(void)line_number;

	while (temp && temp->n != 0)
	{
		if (temp->n < 0 || temp->n > 127)
		{
			break;
		}
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
