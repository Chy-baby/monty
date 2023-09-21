#include "monty.h"

/**
 * addNode - adds a node at the top
 * @head: double linkedlist
 * @x: data of a node
 * Return: Double linked list
 */

stack_t *addNode(stack_t **head, const int x)
{
	stack_t *newNode = NULL;

	newNode = malloc(sizeof(stack_t));
	if (!newNode)
	{
		fprintf(stderr, "Error: memory allocation failed\n");
		clears();
		exit(EXIT_FAILURE);
	}
	newNode->n = x;
	newNode->prev = NULL;
	newNode->next = *head;
	if (*head)
	{
		(*head)->prev = newNode;
	}
	*head = newNode;
	return (newNode);
}

/**
 * sizeStack -size of stack
 * @x: double linked list
 * Return:Returns size of stack
 */

size_t sizeStack(const stack_t *x)
{
	size_t i = 0;

	while (x)
	{
		i++;
		x = x->next;
	}
	return (i);
}

/**
 * printLists - print linked list
 * @x: double linkedlist
 * Return:Returns size of list
 */

size_t printLists(const stack_t *x)
{
	size_t chr = 0;

	while (x)
	{
		chr++;
		printf("%d\n", x->n);
		x = x->next;
	}
	return (chr);
}

/**
 * freeList - frees the list
 * @head: double linkedlist
 * Return:Returns nothing (void)
 */

void freeList(stack_t *head)
{
	stack_t *new = head;

	while (head)
	{
		head = head->next;
		free(new);
		new = head;
	}
}
