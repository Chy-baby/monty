#include "monty.h"




/**
 * product -multiplys of top 2 elements
 * @stack: double linked list
 * @line_number: num line
 * Return: Returns nothing(void)
 */

void product(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		clears();
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n *= (*stack)->n;
	delNodidx(stack, 0);
}

/**
 * modulo- reminder of the top 2 element
 * @stack: double linkedlist
 * @line_number: the line
 * Return:Returns nothing(void)
 */

void modulo(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		clears();
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		clears();
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n %= (*stack)->n;
	delNodidx(stack, 0);
}

/**
 * divi - divdids top 2 elements
 * @stack: double linkedlist
 * @line_number:num line
 * Return:Returns nothing(void)
 */

void divi(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		clears();
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		clears();
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n /= (*stack)->n;
	delNodidx(stack, 0);
}
