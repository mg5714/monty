#include "monty.h"

/**
 * read_file - reading and executing instructions.
 *@filename: A pointer to a character array containing the
 * path to the bytecode file.
 *
 **/

void read_file(const char *filename)
{
	FILE *file;
	char line[MAX_LINE_LENGTH];
	char *opcode;
	char *operator;
	unsigned int line_number = 1;
	stack_t *head = NULL;

	file = fopen(filename, "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, sizeof(line), file) != NULL)
	{
		size_t len = strlen(line);

		if (len > 0 && line[len - 1] == '\n')
		{
			line[len - 1] = '\0';
		}

		opcode = strtok(line, " \n\t");
		operator = strtok(NULL, " \n\t");

		if (opcode[0] == "#")
		{
			return (0);
		}

		if (opcode != NULL)
		{
			execute_instruction(opcode, operator, &head, line_number);
		}

		line_number++;
	}

	free_stack(&head);
	fclose(file);

	exit(EXIT_SUCCESS);
}


/**
 *free_stack - fun to free
 *@head: ptr to ptr
 *
 **/
void free_stack(stack_t **head)
{
	stack_t *current = *head;

	while (current)
	{
		stack_t *next = current->next;

		free(current);
		current = next;
	}
	*head = NULL;
}
