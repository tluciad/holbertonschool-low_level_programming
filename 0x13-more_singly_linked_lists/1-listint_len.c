#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t
 * @h: head
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		if (h->n)
			h = h->next;
		j++;
	}
	return (j);
}
