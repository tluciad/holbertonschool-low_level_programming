#include "lists.h"
/**
 *list_len -  returns the number of elements in a linked list
 *@h: head in list
 *Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		j++;
		h = h->next;
	}
	return (j);
}
