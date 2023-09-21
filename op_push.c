#include "monty.h"

/**
 * push - push input to top of stack
 * @stack: a ptr
 * @line_number:num line
 * Return:Return nothing
 */

void push(stack_t **stack, unsigned int line_number)
{
	register int data;
	char *par = strtok(NULL, "\n");

	if (isNumStr(par) == -1)
	{
		fprintf(stderr, "L%u: usage push integer \n", line_number);
		clears();
		exit(EXIT_FAILURE);
	}
	data = atoi(par);
	if (args.layout == 1)
	{
		addNode(stack, data);
	}
	else
	{
		addNodeEnd(stack, data);
	}
}
