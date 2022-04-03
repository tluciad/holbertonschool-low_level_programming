#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of a list.
 * @index: is the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *previous;
	listint_t *next;

	previous = *head;

	if (index != 0)
	{
		while (i < index - 1 && previous != NULL)
		{
			previous = previous->next;
			i++;
		}
	}
	if (previous == NULL || (previous->next == NULL && index != 0))
	{
		return (-1);
	}
	next = previous->next;

	if (index != 0)
	{
		previous->next = next->next;
		free(next);
	}
	else
	{
		free(previous);
		*head = next;
	}

	return (1);
}
