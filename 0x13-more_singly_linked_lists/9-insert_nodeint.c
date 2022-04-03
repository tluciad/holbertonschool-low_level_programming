#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *@head: pointer to head
 *@idx: is the index of the list where the new node should be added
 *@n: new data
 *Return: NULL or the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new;
	listint_t *previous = *head;

	new = malloc(sizeof(listint_t));
	if (!head || !new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (previous)
	{
		if (count == idx - 1)
		{
			new->next = previous->next;
			previous->next = new;
			return (new);
		}
		previous = previous->next;
		count++;
	}
	return (NULL);
}
