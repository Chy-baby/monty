#include "monty.h"
/**
 * subs - subtracts  top two elements
 * @stack: double linkedlist
 * @line_number:num line
 * Return:Returns nothing (void)
 */

void subs(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		clears();
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n -= (*stack)->n;
	delNodidx(stack, 0);
}


/**
 * add_ele - adds top two
 * @stack: double linked list
 * @line_number: num line
 * Return:Returns nothing(void)
 */

void add_ele(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		clears();
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;
	delNodidx(stack, 0);
}
