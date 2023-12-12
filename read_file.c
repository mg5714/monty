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
	char *opcode, *operator;
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

		opcode = strtok(line, " ");
		operator = strtok(NULL, " ");

		if (opcode != NULL)
		{
			execute_instruction(opcode, operator, &head, line_number);
		}

		line_number++;
	}

	fclose(file);

	exit(EXIT_SUCCESS);
}
