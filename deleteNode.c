#include "monty.h"

/**
 * delNodidx - Delete node at index
 * @head: Doubly linked list
 * @index: index
 * Return: 1 on success, -1 on failure
 */

int delNodidx(stack_t **head, unsigned int idx)
{
	stack_t *new = *head;
	unsigned int i = 0;

	if (!head || !*head)
	{
		return (-1);
	}
	if (idx == 0)
	{
		*head = (*head)->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
		free(new);
		return (1);
	}
	while (new)
	{
		new = new->next;
		i++;
	}
	if (idx >= i)
	{
		return (-1);
	}
	new = *head;
	while (new && new->next)
	{
		if (idx == 0)
			break;
		idx--;
		new = new->next;
	}
	new->prev->next = new->next;
	if (new->next)
		new->next->prev = new->prev;
	free(new);
	return (1);
}
