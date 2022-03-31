#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t
 * @h: head
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t j = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
