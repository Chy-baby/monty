#include "monty.h"

/**
 * pint - outputs element in stack
 * @stack: double linkedlist
 * @line_number:line num
*/

void pint(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		clears();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
