#include "monty.h"

/**
* main - monty code interpreter
* @argc: argument counter
* @argv: argument vector
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	read_file(argv[1]);
	return (0);
}
