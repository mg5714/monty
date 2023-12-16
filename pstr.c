#include "monty.h"
/**
 * pstr - Prints the string starting from the top of the stack.
 * @stack: A pointer to a pointer to the head of the stack.
 * @line_number: An integer representing the line number.
 */
void pstr(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;

    while (current != NULL && current->n != 0 && isprint(current->n))
    {
        putchar(current->n);
        current = current->next;
    }

    putchar('\n');
    (void)line_number;
}
