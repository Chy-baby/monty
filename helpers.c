#include "monty.h"

/**
 * shiftdown - takes stack to the bottom of list
 * @stack: a double linkedlist
 * @line_number:num line
 */

void shiftdown(stack_t **stack, unsigned int line_number)
{
	int x = 0;
	int count = 0;
	stack_t *temp = *stack;

	(void)line_number;
	if (*stack && (*stack)->next)
	{
		while (temp)
		{
			if (!temp->next)
			{
				x = temp->n;
			}
			count++;
			temp = temp->next;
		}
		addNode(stack, x);
		delNodidx(stack, count);
	}
}



/**
 * print_str - output str
 * @stack: double linkedlist
 * @line_number:num
 * Return: Returns nothing
 */

void print_str(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;
	while (temp && (temp->n > 0 && temp->n <= 127))
	{
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}

/**
 * chr_print - prints character
 * @stack: double linkedlist
 * @line_number: line num
 * Return: Returns nothing(void)
 */

void chr_print(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
	{
		fprintf(stderr, "L%u: can't print char, stack is empty\n", line_number);
		clears();
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%u: can't print char value out of range\n", line_number);
		clears();
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
