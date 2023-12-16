#include "monty.h"
/**
 * pchar - Prints the character at the top of the stack.
 * @head: A pointer to a pointer to the head of the stack.
 * @line_number: An integer representing the line number.
 */
void pchar(stack_t **head, unsigned int line_number)
{
  int value;
    if (*head == NULL)
    {
        fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }

    value = (*head)->n;
    if (value < 0 || value > 127)
    {
        fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
        exit(EXIT_FAILURE);
    }

    printf("%c\n", value);
}
