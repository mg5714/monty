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
	instruction_t inst[] = {
		{"pall", pall}, {"pint", pint}, {"pop", pop}, {"swap", swap},
		{"add", add}, {"nop", nop}, {"sub", sub}, {"div", _div}, {"mul", mul},
		{"mod", mod}, {"pchar", pchar}, {"pstr", pstr}, {"rotl", rotl},
		{"rotr", rotr}, {NULL, NULL}
	};

	int i = 0, value;

	if (strcmp(opcode, "push") == 0)
	{
		if (operator == NULL || operator[0] == '\0')
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		if ((operator[0] != '-' && !isdigit(operator[0])) ||
				(operator[0] == '-' && !isdigit(operator[1])))
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		value = atoi(operator);
		push(head, value);
		return;
	}
	while (inst[i].opcode)
	{
		if (strcmp(opcode, inst[i].opcode) == 0)
		{
			inst[i].f(head, line_number);
			return;
		}
		i++;
	}
	if (inst[i].opcode == NULL)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
		exit(EXIT_FAILURE);
	}
}
