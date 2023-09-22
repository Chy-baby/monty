#include "monty.h"

/**
 * pop - removes last element
 * @stack:double linkedlist
 * @line_number: the number line
 * Return: Returns nothing
 */

void pop(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
	{
		fprintf(stderr, "L%u: Can't pop ,empty stack \n", line_number);
		clears();
		exit(EXIT_FAILURE);
	}
	delNodidx(stack, 0);
}

/**
 * swap -  swaps data in list
 * @stack: double linkedlist
 * @line_number:num line
 * Return:Returns nothing(void)
 */

void swap(stack_t **stack, unsigned int line_number)
{
	register int tempo;

	if ((!*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't swap ,the stack is too short\n", line_number);
		clears();
		exit(EXIT_FAILURE);
	}
	tempo = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = tempo;
}

/**
 * nop - does nothing really
 * @stack: double linkedlist
 * @line_number:line
 * Return: Returns nothing(void)
 */

void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

/**
 * pall - prints all data in stack
 * @stack: double linkedlist
 * @line_number: num line
 * Return:Returns nothing(void)
 */

void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	printLists(*stack);
}
