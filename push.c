#include "monty.h"

/**
 * push - pushes an element to the stack.
 *@head: pointer to a pointer to the head of the stack.
 *@line_number: The integer value stack.
 *
 **/
void push(stack_t **head, unsigned int line_number)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = line_number;
	new_node->next = *head;
	*head = new_node;
}
