#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position
 * @h: head node
 * @idx: index
 * @n: data value
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newp = NULL, *temp = NULL;
	unsigned int i = 1;

	newp = malloc(sizeof(dlistint_t));
	if (newp == NULL || h == NULL)
		return (NULL);
	newp->n = n;
	temp = *h;
	if (idx == 0)
	{
		*h = newp;
		newp->next = temp;
		newp->prev = NULL;
		temp->prev = newp;
		return (newp);
	}
	while (temp->next != NULL)
	{
		if (i == idx)
		{
			newp->prev = temp;
			newp->next = temp->next;
			temp->next = newp;
			newp->next->prev = newp;
		}
		temp = temp->next;
		i++;
	}
	if (i == idx)
	{
		newp->prev = temp;
		newp->next = NULL;
		temp->next = newp;
	}
	if (i < idx)
	{
		free(newp);
		return (NULL);
	}
	return (newp);
}
