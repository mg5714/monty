#include "monty.h"

/**
 * execute_instruction - function that excute the instructions.
 *@opcode: pointer to a character array containing the opcode string.
 *@operator: A pointer to a character array.
 *@head: A pointer to a pointer to the head of the stack.
 *@line_number: An integer representing the line number
 *
 **/

void execute_instruction(char *opcode, char *operator, stack_t **head,
		unsigned int line_number)
{
	int value;

	if (strcmp(opcode, "push") == 0)
	{
		if ((operator == NULL || !isdigit(operator[0])) &&
				(operator[0] != '-' || !isdigit(operator[1])))
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}

	value = atoi(operator);

	push(head, value);
	}
	else if (strcmp(opcode, "pall") == 0)
	{
		pall(head);
	}
	else if (strcmp(opcode, "pint") == 0)
	{
		pint(head, line_number);
	}
	else if (strcmp(opcode, "pop") == 0)
	{
		pop(head, line_number);
	}
	else
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
		exit(EXIT_FAILURE);
	}
}