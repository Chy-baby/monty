#include "monty.h"

/**
 * clears - clears stack list
 */
void clears(void)
{freeList(args.d_list);
if (args.file)
{
fclose(args.file);
}
}

/**
 * mty - interpretor
 * Return: Returns nothing(void)
 */
void mty(void)
{
char line[130];

args.file = fopen(args.list[1], "r");
if (args.file != NULL)
{
while (fgets(line, sizeof(line), args.file) != NULL)
{
args.count++;
args.i_line = line;
calls();
}
fclose(args.file);
}
else
{
fprintf(stderr, "Error: sorry can't open file %s\n", args.list[1]);
clears();
exit(EXIT_FAILURE);
}
}

/**
 * shiftUp - shifts stack to the top
 * @stack: double linkedlist
 * @line_number:line num
 */
void shiftUp(stack_t **stack, unsigned int line_number)
{
(void)line_number;
if (*stack && (*stack)->next)
{
addNodeEnd(stack, (*stack)->n);
delNodidx(stack, 0);
}
}

/**
 * addNodeEnd - adds node at the end of a list
 * @list: double linked list
 * @x: data for a node
 * Return:Returns a linked list
 */
stack_t *addNodeEnd(stack_t **list, const int x)
{
stack_t *current = *list;
stack_t *n_node = NULL;

n_node = malloc(sizeof(stack_t));
if (!n_node)
{
return (NULL);
}
n_node->n = x;
n_node->next = NULL;
if (!*list)
{
n_node->prev = NULL;
*list = n_node;
return (n_node);
}
while (current->next)
{
current = current->next;
}
current->next = n_node;
n_node->prev = current;
return (n_node);
}
